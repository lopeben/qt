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

#if ENABLE(SVG)

#include "JSSVGTitleElement.h"

#include "CSSMutableStyleDeclaration.h"
#include "CSSStyleDeclaration.h"
#include "CSSValue.h"
#include "JSCSSStyleDeclaration.h"
#include "JSCSSValue.h"
#include "JSSVGAnimatedString.h"
#include "KURL.h"
#include "SVGTitleElement.h"
#include <runtime/Error.h>
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSSVGTitleElement);

/* Hash table */

static const HashTableValue JSSVGTitleElementTableValues[6] =
{
    { "xmllang", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTitleElementXmllang), (intptr_t)setJSSVGTitleElementXmllang },
    { "xmlspace", DontDelete, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTitleElementXmlspace), (intptr_t)setJSSVGTitleElementXmlspace },
    { "className", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTitleElementClassName), (intptr_t)0 },
    { "style", DontDelete|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTitleElementStyle), (intptr_t)0 },
    { "constructor", DontEnum|ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsSVGTitleElementConstructor), (intptr_t)0 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTitleElementTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 15, JSSVGTitleElementTableValues, 0 };
#else
    { 16, 15, JSSVGTitleElementTableValues, 0 };
#endif

/* Hash table for constructor */

static const HashTableValue JSSVGTitleElementConstructorTableValues[1] =
{
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTitleElementConstructorTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTitleElementConstructorTableValues, 0 };
#else
    { 1, 0, JSSVGTitleElementConstructorTableValues, 0 };
#endif

class JSSVGTitleElementConstructor : public DOMConstructorObject {
public:
    JSSVGTitleElementConstructor(ExecState* exec, JSDOMGlobalObject* globalObject)
        : DOMConstructorObject(JSSVGTitleElementConstructor::createStructure(globalObject->objectPrototype()), globalObject)
    {
        putDirect(exec->propertyNames().prototype, JSSVGTitleElementPrototype::self(exec, globalObject), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    virtual bool getOwnPropertyDescriptor(ExecState*, const Identifier&, PropertyDescriptor&);
    virtual const ClassInfo* classInfo() const { return &s_info; }
    static const ClassInfo s_info;

    static PassRefPtr<Structure> createStructure(JSValue proto) 
    { 
        return Structure::create(proto, TypeInfo(ObjectType, StructureFlags), AnonymousSlotCount); 
    }
    
protected:
    static const unsigned StructureFlags = OverridesGetOwnPropertySlot | ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSSVGTitleElementConstructor::s_info = { "SVGTitleElementConstructor", 0, &JSSVGTitleElementConstructorTable, 0 };

bool JSSVGTitleElementConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTitleElementConstructor, DOMObject>(exec, &JSSVGTitleElementConstructorTable, this, propertyName, slot);
}

bool JSSVGTitleElementConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTitleElementConstructor, DOMObject>(exec, &JSSVGTitleElementConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */

static const HashTableValue JSSVGTitleElementPrototypeTableValues[2] =
{
    { "getPresentationAttribute", DontDelete|Function, (intptr_t)static_cast<NativeFunction>(jsSVGTitleElementPrototypeFunctionGetPresentationAttribute), (intptr_t)1 },
    { 0, 0, 0, 0 }
};

static JSC_CONST_HASHTABLE HashTable JSSVGTitleElementPrototypeTable =
#if ENABLE(PERFECT_HASH_SIZE)
    { 0, JSSVGTitleElementPrototypeTableValues, 0 };
#else
    { 2, 1, JSSVGTitleElementPrototypeTableValues, 0 };
#endif

const ClassInfo JSSVGTitleElementPrototype::s_info = { "SVGTitleElementPrototype", 0, &JSSVGTitleElementPrototypeTable, 0 };

JSObject* JSSVGTitleElementPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSSVGTitleElement>(exec, globalObject);
}

bool JSSVGTitleElementPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticFunctionSlot<JSObject>(exec, &JSSVGTitleElementPrototypeTable, this, propertyName, slot);
}

bool JSSVGTitleElementPrototype::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticFunctionDescriptor<JSObject>(exec, &JSSVGTitleElementPrototypeTable, this, propertyName, descriptor);
}

const ClassInfo JSSVGTitleElement::s_info = { "SVGTitleElement", &JSSVGElement::s_info, &JSSVGTitleElementTable, 0 };

JSSVGTitleElement::JSSVGTitleElement(NonNullPassRefPtr<Structure> structure, JSDOMGlobalObject* globalObject, PassRefPtr<SVGTitleElement> impl)
    : JSSVGElement(structure, globalObject, impl)
{
}

JSObject* JSSVGTitleElement::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSSVGTitleElementPrototype(JSSVGTitleElementPrototype::createStructure(JSSVGElementPrototype::self(exec, globalObject)));
}

bool JSSVGTitleElement::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSSVGTitleElement, Base>(exec, &JSSVGTitleElementTable, this, propertyName, slot);
}

bool JSSVGTitleElement::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSSVGTitleElement, Base>(exec, &JSSVGTitleElementTable, this, propertyName, descriptor);
}

JSValue jsSVGTitleElementXmllang(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTitleElement* castedThis = static_cast<JSSVGTitleElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmllang());
    return result;
}

JSValue jsSVGTitleElementXmlspace(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTitleElement* castedThis = static_cast<JSSVGTitleElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThis->impl());
    JSValue result = jsString(exec, imp->xmlspace());
    return result;
}

JSValue jsSVGTitleElementClassName(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTitleElement* castedThis = static_cast<JSSVGTitleElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThis->impl());
    RefPtr<SVGAnimatedString> obj = imp->classNameAnimated();
    JSValue result =  toJS(exec, castedThis->globalObject(), obj.get(), imp);
    return result;
}

JSValue jsSVGTitleElementStyle(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTitleElement* castedThis = static_cast<JSSVGTitleElement*>(asObject(slotBase));
    UNUSED_PARAM(exec);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThis->impl());
    JSValue result = toJS(exec, castedThis->globalObject(), WTF::getPtr(imp->style()));
    return result;
}

JSValue jsSVGTitleElementConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSSVGTitleElement* domObject = static_cast<JSSVGTitleElement*>(asObject(slotBase));
    return JSSVGTitleElement::getConstructor(exec, domObject->globalObject());
}
void JSSVGTitleElement::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    lookupPut<JSSVGTitleElement, Base>(exec, propertyName, value, &JSSVGTitleElementTable, this, slot);
}

void setJSSVGTitleElementXmllang(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGTitleElement* castedThisObj = static_cast<JSSVGTitleElement*>(thisObject);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThisObj->impl());
    imp->setXmllang(value.toString(exec));
}

void setJSSVGTitleElementXmlspace(ExecState* exec, JSObject* thisObject, JSValue value)
{
    JSSVGTitleElement* castedThisObj = static_cast<JSSVGTitleElement*>(thisObject);
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThisObj->impl());
    imp->setXmlspace(value.toString(exec));
}

JSValue JSSVGTitleElement::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSSVGTitleElementConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

JSValue JSC_HOST_CALL jsSVGTitleElementPrototypeFunctionGetPresentationAttribute(ExecState* exec, JSObject*, JSValue thisValue, const ArgList& args)
{
    UNUSED_PARAM(args);
    if (!thisValue.inherits(&JSSVGTitleElement::s_info))
        return throwError(exec, TypeError);
    JSSVGTitleElement* castedThisObj = static_cast<JSSVGTitleElement*>(asObject(thisValue));
    SVGTitleElement* imp = static_cast<SVGTitleElement*>(castedThisObj->impl());
    const UString& name = args.at(0).toString(exec);


    JSC::JSValue result = toJS(exec, castedThisObj->globalObject(), WTF::getPtr(imp->getPresentationAttribute(name)));
    return result;
}


}

#endif // ENABLE(SVG)
