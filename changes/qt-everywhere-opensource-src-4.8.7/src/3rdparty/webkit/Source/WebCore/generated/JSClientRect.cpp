/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSClientRect.h"

#include "ClientRect.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSClientRect);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSClientRectTableValues[8] =
{
    { "top", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectTop), (intptr_t)0 THUNK_GENERATOR(0) },
    { "right", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectRight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "bottom", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectBottom), (intptr_t)0 THUNK_GENERATOR(0) },
    { "left", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectLeft), (intptr_t)0 THUNK_GENERATOR(0) },
    { "width", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectWidth), (intptr_t)0 THUNK_GENERATOR(0) },
    { "height", DontDelete | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectHeight), (intptr_t)0 THUNK_GENERATOR(0) },
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsClientRectConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSClientRectTable = { 18, 15, JSClientRectTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSClientRectConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSClientRectConstructorTable = { 1, 0, JSClientRectConstructorTableValues, 0 };
class JSClientRectConstructor : public DOMConstructorObject {
public:
    JSClientRectConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSClientRectConstructor::s_info = { "ClientRectConstructor", &DOMConstructorObject::s_info, &JSClientRectConstructorTable, 0 };

JSClientRectConstructor::JSClientRectConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSClientRectPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSClientRectConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSClientRectConstructor, JSDOMWrapper>(exec, &JSClientRectConstructorTable, this, propertyName, slot);
}

bool JSClientRectConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSClientRectConstructor, JSDOMWrapper>(exec, &JSClientRectConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSClientRectPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSClientRectPrototypeTable = { 1, 0, JSClientRectPrototypeTableValues, 0 };
const ClassInfo JSClientRectPrototype::s_info = { "ClientRectPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSClientRectPrototypeTable, 0 };

JSObject* JSClientRectPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSClientRect>(exec, globalObject);
}

const ClassInfo JSClientRect::s_info = { "ClientRect", &JSDOMWrapper::s_info, &JSClientRectTable, 0 };

JSClientRect::JSClientRect(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<ClientRect> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSClientRect::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSClientRectPrototype(exec->globalData(), globalObject, JSClientRectPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSClientRect::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSClientRect, Base>(exec, &JSClientRectTable, this, propertyName, slot);
}

bool JSClientRect::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSClientRect, Base>(exec, &JSClientRectTable, this, propertyName, descriptor);
}

JSValue jsClientRectTop(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->top());
    return result;
}


JSValue jsClientRectRight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->right());
    return result;
}


JSValue jsClientRectBottom(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->bottom());
    return result;
}


JSValue jsClientRectLeft(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->left());
    return result;
}


JSValue jsClientRectWidth(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->width());
    return result;
}


JSValue jsClientRectHeight(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* castedThis = static_cast<JSClientRect*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    ClientRect* imp = static_cast<ClientRect*>(castedThis->impl());
    JSValue result = jsNumber(imp->height());
    return result;
}


JSValue jsClientRectConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSClientRect* domObject = static_cast<JSClientRect*>(asObject(slotBase));
    return JSClientRect::getConstructor(exec, domObject->globalObject());
}

JSValue JSClientRect::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSClientRectConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, ClientRect* impl)
{
    return wrap<JSClientRect>(exec, globalObject, impl);
}

ClientRect* toClientRect(JSC::JSValue value)
{
    return value.inherits(&JSClientRect::s_info) ? static_cast<JSClientRect*>(asObject(value))->impl() : 0;
}

}
