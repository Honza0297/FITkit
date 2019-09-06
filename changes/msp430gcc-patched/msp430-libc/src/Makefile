#
# MSP430 libc
#
# $Id: Makefile,v 1.49 2008/12/07 22:45:57 sb-sf Exp $
#
VERSION = 20080812

# installation prefix (set this if you don't install by hand)

#prefix = /usr
prefix = /app/mspgcc

# name of target architecture (used for conform naming)

target = msp430

prefix_target = ${prefix}/${target}
bindir = ${prefix_target}/bin
includedir = ${prefix_target}/include
libdir = ${prefix_target}/lib

srcdir = .

CC = ${target}-gcc
AS = ${target}-gcc -x assembler-with-cpp
AR = ${target}-ar
RM = rm
MD = mkdir -p $@
INSTALL = install -c -m644 $^/

ASFLAGS = -Wa,-gstabs
CFLAGS = -Wall -O2 -g

# make sure we can find our header files (not the installed ones)

ALL_ASFLAGS += -I$(srcdir)/../include -I$(srcdir) ${ASFLAGS}
ALL_CFLAGS += -I$(srcdir)/../include -I$(srcdir) ${CFLAGS}

opt_speed_cflags = -O2

# further declaration... 
ifdef gnu
 source_dirs = gnu
else
 source_dirs = bsd
endif

source_dirs = 

VPATH = $(addprefix $(srcdir)/, $(source_dirs))

all: build-crt build-libc build-libm

install: install-crt install-libc install-headers install-libm

clean: clean-crt clean-libc clean-libm


crt_all_objs = \
	crt430x110.o   crt430x112.o \
	crt430x1101.o  crt430x1111.o  crt430x1121.o \
	crt430x1122.o  crt430x1132.o \
	crt430x122.o   crt430x123.o \
	crt430x1222.o  crt430x1232.o \
	crt430x133.o   crt430x135.o \
	crt430x1331.o  crt430x1351.o \
	crt430x147.o   crt430x148.o   crt430x149.o \
	crt430x1471.o  crt430x1481.o  crt430x1491.o \
	crt430x155.o   crt430x156.o   crt430x157.o \
	crt430x167.o   crt430x168.o   crt430x169.o   crt430x1610.o  crt430x1611.o  crt430x1612.o \
	crt430x2001.o  crt430x2011.o \
	crt430x2002.o  crt430x2012.o \
	crt430x2003.o  crt430x2013.o \
	crt430x2101.o  crt430x2111.o  crt430x2121.o  crt430x2131.o \
	crt430x2112.o  crt430x2122.o  crt430x2132.o \
	crt430x2232.o  crt430x2252.o  crt430x2272.o \
	crt430x2234.o  crt430x2254.o  crt430x2274.o \
	crt430x233.o   crt430x235.o \
	crt430x2330.o  crt430x2350.o  crt430x2370.o \
	crt430x247.o   crt430x248.o   crt430x249.o   crt430x2410.o \
	crt430x2471.o  crt430x2481.o  crt430x2491.o  \
	crt430x2416.o  crt430x2417.o  crt430x2418.o  crt430x2419.o \
	crt430x2616.o  crt430x2617.o  crt430x2618.o  crt430x2619.o \
	crt430x311.o   crt430x312.o   crt430x313.o   crt430x314.o   crt430x315.o \
	crt430x323.o   crt430x325.o   crt430x336.o   crt430x337.o \
	crt430x412.o   crt430x413.o   crt430x415.o   crt430x417.o \
	crt430x423.o   crt430x425.o   crt430x427.o \
	crt430x4250.o  crt430x4260.o  crt430x4270.o \
	crt430xG4250.o crt430xG4260.o crt430xG4270.o \
	crt430xE423.o  crt430xE425.o  crt430xE427.o \
	crt430xE4232.o crt430xE4242.o crt430xE4252.o crt430xE4272.o \
	crt430xW423.o  crt430xW425.o  crt430xW427.o \
	crt430xG437.o  crt430xG438.o  crt430xG439.o \
	crt430x435.o   crt430x436.o   crt430x437.o \
	crt430x4351.o  crt430x4361.o  crt430x4371.o \
	crt430x447.o   crt430x448.o   crt430x449.o \
	crt430xG4616.o crt430xG4617.o crt430xG4618.o crt430xG4619.o \
	crt430x4783.o  crt430x4784.o  crt430x4793.o  crt430x4794.o \
	crt430x5418.o  crt430x5419.o  \
	crt430x5435.o  crt430x5436.o  crt430x5437.o  crt430x5438.o \
	

build-crt: ${crt_all_objs}

# match by name

${crt_all_objs}: crt%.o: gcrt0.S
	${AS} ${CPPFLAGS} -mmcu=msp$* ${ALL_ASFLAGS} -c $(ABSPATH)$< -o $@

clean-crt:
	${RM} -f ${crt_all_objs}

install-crt: ${crt_all_objs} ${libdir}
	${INSTALL}

#--------------- a bit of libc

libc_libs = msp1/libc.a msp2/libc.a

libc_c_sources = abs.c atol.c bsearch.c errno.c labs.c \
_init_section__.c malloc.c atoi.c strtol.c strtoul.c \
sprintf.c snprintf.c vsprintf.c vsnprintf.c \
printf.c vprintf.c vuprintf.c uprintf.c puts.c \
rand.c itoa.c ltoa.c utoa.c ultoa.c

libc_asm_sources = abort.S div.S exit.S ldiv.S setjmp.S

libc_str_sources = \
isascii.c memccpy.c strchr.c strncat.c swab.c \
isblank.c memchr.c strcmp.c strncmp.c toascii.c \
bcmp.c iscntrl.c memcmp.c strcpy.c strncpy.c tolower.c \
bcopy.c isdigit.c memcpy.c strcspn.c strpbrk.c toupper.c \
bzero.c islower.c memmove.c strdup.c strrchr.c \
ffs.c isprint.c memset.c strlcat.c strsep.c \
index.c isspace.c rindex.c strlcpy.c strspn.c \
isalnum.c isupper.c strcasecmp.c strlen.c strstr.c \
isalpha.c isxdigit.c strcat.c strncasecmp.c strtok.c \
ispunct.c



libc_msp430_ct_objs_1 = ${libc_c_sources:%.c=%.o}
libc_msp430_ct_objs_2 = ${libc_c_sources:%.c=%.o}

libc_msp430_asmt_objs_1 = ${libc_asm_sources:%.S=%.o}
libc_msp430_asmt_objs_2 = ${libc_asm_sources:%.S=%.o}



libc_msp430_c_objs_1 = $(addprefix msp1/, $(libc_msp430_ct_objs_1))
libc_msp430_c_objs_2 = $(addprefix msp2/, $(libc_msp430_ct_objs_2))

libc_msp430_S_objs_1 = $(addprefix msp1/, $(libc_msp430_asmt_objs_1))
libc_msp430_S_objs_2 = $(addprefix msp2/, $(libc_msp430_asmt_objs_2))


libc_msp430_objs_1 = ${libc_msp430_c_objs_1}
libc_msp430_objs_2 = ${libc_msp430_c_objs_2}


build-libc: mspdirs ${libc_libs}

mspdirs:
	mkdir -p msp1 msp2

${libc_msp430_objs_1}: msp1/%.o: stdlib/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp1 -c $(ABSPATH)$< -o $@

${libc_msp430_objs_2}: msp2/%.o: stdlib/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp2 -c $(ABSPATH)$< -o $@

${libc_msp430_S_objs_1}: msp1/%.o: stdlib/%.S
	${AS} -mmcu=msp1 -c $(ABSPATH)$< -o $@

${libc_msp430_S_objs_2}: msp2/%.o: stdlib/%.S
	${AS} -mmcu=msp2 -c $(ABSPATH)$< -o $@

libc_msp430_cstr_objs_1 = ${libc_str_sources:%.c=%.o}
libc_msp430_cstr_objs_2 = ${libc_str_sources:%.c=%.o}

libc_msp430_str_objs_1 = $(addprefix msp1/, $(libc_msp430_cstr_objs_1))
libc_msp430_str_objs_2 = $(addprefix msp2/, $(libc_msp430_cstr_objs_2))


${libc_msp430_str_objs_1}: msp1/%.o: string/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp1 -c $(ABSPATH)$< -o $@

${libc_msp430_str_objs_2}: msp2/%.o: string/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp2 -c $(ABSPATH)$< -o $@


all_objs1 = ${libc_msp430_objs_1} ${libc_msp430_str_objs_1} ${libc_msp430_S_objs_1}
all_objs2 = ${libc_msp430_objs_2} ${libc_msp430_str_objs_2} ${libc_msp430_S_objs_2}

msp1/libc.a: ${all_objs1}
	${AR} rc $@ $?

msp2/libc.a: ${all_objs2}
	${AR} rc $@ $?

.PHONY: clean-libc
clean-libc:
	${RM} -f msp1/libc.a msp2/libc.a msp1/*.o msp2/*.o

install-libc: ins-msp1 ins-msp2 ins-lib

ins-msp1: msp1/libc.a ${libdir}/msp1
	${INSTALL}

ins-msp2: msp2/libc.a ${libdir}/msp2
	${INSTALL}

ins-lib: msp1/libc.a ${libdir}
	${INSTALL}

#--------------- headers ---------------

install-headers: ins-hr ins-hs ins-msp430

ins-hr: $(wildcard $(srcdir)/../include/*.h) ${includedir}
	${INSTALL}

ins-hs: $(wildcard $(srcdir)/../include/sys/*.h) ${includedir}/sys
	${INSTALL}

ins-msp430: $(wildcard $(srcdir)/../include/msp430/*.h) ${includedir}/msp430
	${INSTALL}

fix-limits: $(wildcard $(srcdir)/../include/limits.h) ${includedir}/../../lib/gcc-lib/msp430/3.0/include
	${INSTALL}	

#--------------- directories ---------------
libc_dirs = msp1 msp2
install_lib_dirs = $(libdir) $(libdir)/msp1 $(libdir)/msp2 

$(libc_dirs) $(install_lib_dirs) $(includedir) $(includedir)/sys $(includedir)/msp430: 
	$(MD)


#------------------------------------------------------------------------
#------------------------------------------------------------------------
#------------------------------------------------------------------------
#------------------------------------------------------------------------
#-------------- Math & FP libs ---------------

math: build-libm


basic_fp = divsf.c fixsfsi.c floatdisf.c gtsf.c mulsf.c \
addsf.c eqsf.c fixunssfdi.c floatsisf.c lesf.c negsf.c \
cmpsf.c fixsfdi.c fixunssfsi.c gesf.c ltsf.c subsf.c nesf.c

fppfunc	= ef_acos.c ef_hypot.c ef_remainder.c kf_sin.c sf_erf.c sf_isinf.c sf_rint.c \
ef_acosh.c ef_j0.c ef_scalb.c kf_tan.c sf_expm1.c sf_isnan.c sf_scalbn.c \
ef_asin.c ef_j1.c ef_sinh.c sf_asinh.c sf_fabs.c sf_ldexp.c sf_signif.c \
ef_atan2.c ef_jn.c ef_sqrt.c sf_atan.c sf_finite.c sf_log1p.c sf_sin.c \
ef_atanh.c ef_log.c erf_gamma.c sf_cbrt.c sf_floor.c sf_logb.c sf_tan.c \
ef_cosh.c ef_log10.c erf_lgamma.c sf_ceil.c sf_frexp.c sf_modf.c sf_tanh.c \
ef_exp.c ef_pow.c kf_cos.c sf_copysign.c sf_ilogb.c sf_nan.c \
ef_fmod.c ef_rem_pio2.c kf_rem_pio2.c sf_cos.c sf_infinity.c sf_nextafter.c


libm_libs = msp1/libm.a msp2/libm.a msp1/libfp.a msp2/libfp.a

libm_msp430_fp_objs_1 = ${basic_fp:%.c=%.o}
libm_msp430_fp_objs_2 = ${basic_fp:%.c=%.o}

libm_msp430_fc_objs_1 = ${fppfunc:%.c=%.o}
libm_msp430_fc_objs_2 = ${fppfunc:%.c=%.o}


libm_msp430_c_objs_1 = $(addprefix msp1/, $(libm_msp430_fp_objs_1))
libm_msp430_c_objs_2 = $(addprefix msp2/, $(libm_msp430_fp_objs_2))

libm_msp430_cf_objs_1 = $(addprefix msp1/, $(libm_msp430_fc_objs_1))
libm_msp430_cf_objs_2 = $(addprefix msp2/, $(libm_msp430_fc_objs_2))


build-libm: ${libm_libs}

${libm_msp430_c_objs_1}: msp1/%.o: libm/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp1 -c $(ABSPATH)$< -o $@

${libm_msp430_c_objs_2}: msp2/%.o: libm/%.c
	${CC} -c ${CPPFLAGS} ${ALL_CFLAGS} -mmcu=msp2 -c $(ABSPATH)$< -o $@


${libm_msp430_cf_objs_1}: msp1/%.o: libm/%.c
	${CC} ${CPPFLAGS} -mmcu=msp1 ${ALL_CFLAGS} -c $(ABSPATH)$< -o $@

${libm_msp430_cf_objs_2}: msp2/%.o: libm/%.c
	${CC} ${CPPFLAGS} -mmcu=msp2 ${ALL_CFLAGS} -c $(ABSPATH)$< -o $@


allm_objs1 = ${libm_msp430_cf_objs_1} 
allm_objs2 = ${libm_msp430_cf_objs_2}

msp1/libm.a: ${allm_objs1}
	${AR} rc $@ $?

msp2/libm.a: ${allm_objs2}
	${AR} rc $@ $?

msp1/libfp.a:${libm_msp430_c_objs_1}
	${AR} rc $@ $?

msp2/libfp.a:${libm_msp430_c_objs_2}
	${AR} rc $@ $?

install-libm: insm-msp1 insm-msp2 insm-lib

insm-msp1: msp1/libm.a msp1/libfp.a ${libdir}/msp1
	${INSTALL}

insm-msp2: msp2/libm.a msp2/libfp.a ${libdir}/msp2
	${INSTALL}

insm-lib: msp1/libm.a ${libdir}
	${INSTALL}

.PHONY: clean-libm
clean-libm:
	${RM} -f msp1/libm.a msp2/libm.a msp1/libfp.a msp2/libfp.a msp1/*.o msp2/*.o
