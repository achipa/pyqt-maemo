/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:00:59 2010
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

#include "sipAPIQtCore.h"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 39 "sipQtCoreQLocaleNumberOptions.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qlocale.sip"
#include <qlocale.h>
#line 43 "sipQtCoreQLocaleNumberOptions.cpp"


extern "C" {static int slot_QLocale_NumberOptions___bool__(PyObject *sipSelf);}
static int slot_QLocale_NumberOptions___bool__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtCoreQLocaleNumberOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QLocale_NumberOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocale::NumberOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtCoreQLocaleNumberOptions.cpp"
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLocale_NumberOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QLocale_NumberOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLocale::NumberOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtCoreQLocaleNumberOptions.cpp"
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLocale_NumberOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___invert__(PyObject *sipSelf);}
static PyObject *slot_QLocale_NumberOptions___invert__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QLocale::NumberOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale::NumberOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QLocale_NumberOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QLocale_NumberOptions, &a0, &a0State, &a1))
        {
            QLocale::NumberOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale::NumberOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QLocale_NumberOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions * a0;
        int a0State = 0;
        QLocale::NumberOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QLocale_NumberOptions, &a0, &a0State, sipType_QLocale_NumberOptions, &a1, &a1State))
        {
            QLocale::NumberOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale::NumberOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);
            sipReleaseType(a1,sipType_QLocale_NumberOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QLocale_NumberOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions * a0;
        int a0State = 0;
        QLocale::NumberOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QLocale_NumberOptions, &a0, &a0State, sipType_QLocale_NumberOptions, &a1, &a1State))
        {
            QLocale::NumberOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLocale::NumberOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);
            sipReleaseType(a1,sipType_QLocale_NumberOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QLocale_NumberOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QLocale_NumberOptions___int__(PyObject *sipSelf);}
static PyObject *slot_QLocale_NumberOptions___int__(PyObject *sipSelf)
{
    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QLocale_NumberOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLocale::NumberOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QLocale_NumberOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QLocale::NumberOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLocale::NumberOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLocale_NumberOptions,a0State);

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


extern "C" {static PyObject *slot_QLocale_NumberOptions___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QLocale_NumberOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QLocale_NumberOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QLocale::NumberOptions *sipCpp = reinterpret_cast<QLocale::NumberOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLocale_NumberOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QLocale::NumberOptions::operator&=(a0);
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
extern "C" {static void *cast_QLocale_NumberOptions(void *, const sipTypeDef *);}
static void *cast_QLocale_NumberOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLocale_NumberOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLocale_NumberOptions(void *, int);}
static void release_QLocale_NumberOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QLocale::NumberOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QLocale_NumberOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QLocale_NumberOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLocale::NumberOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLocale::NumberOptions *>(sipSrc);
}


extern "C" {static void *array_QLocale_NumberOptions(SIP_SSIZE_T);}
static void *array_QLocale_NumberOptions(SIP_SSIZE_T sipNrElem)
{
    return new QLocale::NumberOptions[sipNrElem];
}


extern "C" {static void *copy_QLocale_NumberOptions(const void *, SIP_SSIZE_T);}
static void *copy_QLocale_NumberOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLocale::NumberOptions(reinterpret_cast<const QLocale::NumberOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLocale_NumberOptions(sipSimpleWrapper *);}
static void dealloc_QLocale_NumberOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLocale_NumberOptions(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QLocale_NumberOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLocale_NumberOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLocale::NumberOptions *sipCpp = 0;

    {
        const QLocale::NumberOptions * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QLocale_NumberOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLocale::NumberOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QLocale::NumberOptions *>(a0),sipType_QLocale_NumberOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLocale::NumberOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QLocale::NumberOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QLocale_NumberOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QLocale_NumberOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QLocale::NumberOptions **sipCppPtr = reinterpret_cast<QLocale::NumberOptions **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QLocale::NumberOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocale_NumberOption)) ||
            sipCanConvertToType(sipPy, sipType_QLocale_NumberOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QLocale_NumberOption)))
{
    *sipCppPtr = new QLocale::NumberOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QLocale::NumberOptions *>(sipConvertToType(sipPy, sipType_QLocale_NumberOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtCoreQLocaleNumberOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLocale_NumberOptions[] = {
    {(void *)slot_QLocale_NumberOptions___bool__, bool_slot},
    {(void *)slot_QLocale_NumberOptions___ne__, ne_slot},
    {(void *)slot_QLocale_NumberOptions___eq__, eq_slot},
    {(void *)slot_QLocale_NumberOptions___invert__, invert_slot},
    {(void *)slot_QLocale_NumberOptions___and__, and_slot},
    {(void *)slot_QLocale_NumberOptions___xor__, xor_slot},
    {(void *)slot_QLocale_NumberOptions___or__, or_slot},
    {(void *)slot_QLocale_NumberOptions___int__, int_slot},
    {(void *)slot_QLocale_NumberOptions___ixor__, ixor_slot},
    {(void *)slot_QLocale_NumberOptions___ior__, ior_slot},
    {(void *)slot_QLocale_NumberOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QLocale_NumberOptions, "\1QLocale.NumberOptions(QLocale.NumberOptions)\n"
    "QLocale.NumberOptions(int)\n"
    "QLocale.NumberOptions()");


pyqt4ClassTypeDef sipTypeDef_QtCore_QLocale_NumberOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QLocale__NumberOptions,
        {0}
    },
    {
        sipNameNr_NumberOptions,
        {105, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLocale_NumberOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLocale_NumberOptions,
    init_QLocale_NumberOptions,
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
    dealloc_QLocale_NumberOptions,
    assign_QLocale_NumberOptions,
    array_QLocale_NumberOptions,
    copy_QLocale_NumberOptions,
    release_QLocale_NumberOptions,
    cast_QLocale_NumberOptions,
    convertTo_QLocale_NumberOptions,
    0,
    0
},
    0,
    1,
    0
};