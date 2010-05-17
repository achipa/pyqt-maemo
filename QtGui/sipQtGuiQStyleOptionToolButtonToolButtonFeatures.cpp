/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:03 2010
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 1330 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"

#line 1330 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"


extern "C" {static int slot_QStyleOptionToolButton_ToolButtonFeatures___bool__(PyObject *sipSelf);}
static int slot_QStyleOptionToolButton_ToolButtonFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyleOptionToolButton_ToolButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyleOptionToolButton_ToolButtonFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___invert__(PyObject *sipSelf);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionToolButton::ToolButtonFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionToolButton::ToolButtonFeatures(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionToolButton::ToolButtonFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;
        QStyleOptionToolButton::ToolButtonFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, sipType_QStyleOptionToolButton_ToolButtonFeatures, &a1, &a1State))
        {
            QStyleOptionToolButton::ToolButtonFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionToolButton_ToolButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;
        QStyleOptionToolButton::ToolButtonFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State, sipType_QStyleOptionToolButton_ToolButtonFeatures, &a1, &a1State))
        {
            QStyleOptionToolButton::ToolButtonFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionToolButton::ToolButtonFeatures((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionToolButton_ToolButtonFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionToolButton_ToolButtonFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___int__(PyObject *sipSelf);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionToolButton_ToolButtonFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionToolButton_ToolButtonFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionToolButton::ToolButtonFeatures::operator&=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionToolButton_ToolButtonFeatures(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolButton_ToolButtonFeatures(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOptionToolButton_ToolButtonFeatures)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolButton_ToolButtonFeatures(void *, int);}
static void release_QStyleOptionToolButton_ToolButtonFeatures(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionToolButton_ToolButtonFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionToolButton_ToolButtonFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionToolButton::ToolButtonFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionToolButton_ToolButtonFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionToolButton_ToolButtonFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionToolButton::ToolButtonFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionToolButton_ToolButtonFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionToolButton_ToolButtonFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionToolButton::ToolButtonFeatures(reinterpret_cast<const QStyleOptionToolButton::ToolButtonFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionToolButton_ToolButtonFeatures(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionToolButton_ToolButtonFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionToolButton::ToolButtonFeatures *sipCpp = 0;

    {
        const QStyleOptionToolButton::ToolButtonFeatures * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionToolButton_ToolButtonFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStyleOptionToolButton::ToolButtonFeatures *>(a0),sipType_QStyleOptionToolButton_ToolButtonFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionToolButton::ToolButtonFeatures();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionToolButton_ToolButtonFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionToolButton_ToolButtonFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionToolButton::ToolButtonFeatures **sipCppPtr = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionToolButton::ToolButtonFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionToolButton_ToolButtonFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionToolButton_ToolButtonFeature)))
{
    *sipCppPtr = new QStyleOptionToolButton::ToolButtonFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionToolButton::ToolButtonFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionToolButton_ToolButtonFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtGuiQStyleOptionToolButtonToolButtonFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionToolButton_ToolButtonFeatures[] = {
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionToolButton_ToolButtonFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionToolButton_ToolButtonFeatures, "\1QStyleOptionToolButton.ToolButtonFeatures(QStyleOptionToolButton.ToolButtonFeatures)\n"
    "QStyleOptionToolButton.ToolButtonFeatures(int)\n"
    "QStyleOptionToolButton.ToolButtonFeatures()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionToolButton_ToolButtonFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolButton__ToolButtonFeatures,
        {0}
    },
    {
        sipNameNr_ToolButtonFeatures,
        {590, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionToolButton_ToolButtonFeatures,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionToolButton_ToolButtonFeatures,
    init_QStyleOptionToolButton_ToolButtonFeatures,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QStyleOptionToolButton_ToolButtonFeatures,
    assign_QStyleOptionToolButton_ToolButtonFeatures,
    array_QStyleOptionToolButton_ToolButtonFeatures,
    copy_QStyleOptionToolButton_ToolButtonFeatures,
    release_QStyleOptionToolButton_ToolButtonFeatures,
    cast_QStyleOptionToolButton_ToolButtonFeatures,
    convertTo_QStyleOptionToolButton_ToolButtonFeatures,
    0,
    0
},
    0,
    1,
    0
};
