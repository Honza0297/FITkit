
#include <stdlib.h>

#define XSIZE(x) ((*x)>>1)
#define FREE_P(x) (!((*x)&1))
#define MARK_BUSY(x) ((*x)|=1)
#define MARK_FREE(x) ((*x)&=0xfffe)

extern size_t __bss_end;
#define GET_HEAP_BOTTOM(__x)  __asm__ __volatile__("mov	r1, %0": "=r" ((uint16_t)__x) :)

void *malloc (size_t size)
{
    static char once = 0;
    size_t * heap_bottom;
    size_t kk = (size_t) (&__bss_end);		/* this will possibly introduce */
    size_t * heap_top = (size_t *)((kk+1)&~1);	/* 1 byte hole between .bss and heap */
    char f = 0;

    if (!once)
    {
        once = 1;
        *heap_top = 0xFFFE;
    }
    GET_HEAP_BOTTOM (heap_bottom);
    heap_bottom -= 20;
    size = (size+1) >> 1;	/* round to 2 */
    do
    {
        size_t xsize = XSIZE (heap_top);
        size_t * heap_next = &heap_top[xsize + 1];
        if ((xsize<<1)+2 == 0)
        {
            f = 1;
        }
        if (FREE_P (heap_top))
        {
            if (f)
            {
                xsize = heap_bottom - heap_top - 1;
            }
            else if (FREE_P(heap_next))
            {
                *heap_top = ( (XSIZE(heap_next)<<1) + 2 == 0
                              ? 0xfffe
                              : (xsize + XSIZE(heap_next) + 1)<<1);
                continue;
            }
            if (xsize >= size)
            {
                if (f)
                    heap_top[size + 1] = 0xfffe;
                else if (xsize != size)
                    heap_top[size + 1] = (xsize - size - 1) << 1;
                *heap_top = size << 1;
                MARK_BUSY (heap_top);
                return heap_top+1;
            }
        }
        heap_top += xsize + 1;
    }
    while (!f);
    return NULL;
}

void free (void *p)
{
    size_t *t = (size_t*)p - 1;
    MARK_FREE (t);
}

