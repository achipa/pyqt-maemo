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

#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qmdiarea.sip"
#include <qmdiarea.h>
#line 39 "sipQtGuiQMdiAreaAreaOptions.cpp"

#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qmdiarea.sip"
#include <qmdiarea.h>
#line 43 "sipQtGuiQMdiAreaAreaOptions.cpp"


extern "C" {static int slot_QMdiArea_AreaOptions___bool__(PyObject *sipSelf);}
static int slot_QMdiArea_AreaOptions___bool__(PyObject *sipSelf)
{
    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQMdiAreaAreaOptions.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QMdiArea_AreaOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMdiArea::AreaOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQMdiAreaAreaOptions.cpp"
            sipReleaseType(const_cast<QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QMdiArea_AreaOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QMdiArea_AreaOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QMdiArea::AreaOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQMdiAreaAreaOptions.cpp"
            sipReleaseType(const_cast<QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QMdiArea_AreaOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___invert__(PyObject *sipSelf);}
static PyObject *slot_QMdiArea_AreaOptions___invert__(PyObject *sipSelf)
{
    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QMdiArea::AreaOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiArea::AreaOptions(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QMdiArea_AreaOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiArea::AreaOptions * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiArea_AreaOptions, &a0, &a0State, &a1))
        {
            QMdiArea::AreaOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiArea::AreaOptions((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QMdiArea_AreaOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiArea::AreaOptions * a0;
        int a0State = 0;
        QMdiArea::AreaOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State, sipType_QMdiArea_AreaOptions, &a1, &a1State))
        {
            QMdiArea::AreaOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiArea::AreaOptions((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);
            sipReleaseType(a1,sipType_QMdiArea_AreaOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QMdiArea_AreaOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QMdiArea::AreaOptions * a0;
        int a0State = 0;
        QMdiArea::AreaOptions * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State, sipType_QMdiArea_AreaOptions, &a1, &a1State))
        {
            QMdiArea::AreaOptions *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMdiArea::AreaOptions((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);
            sipReleaseType(a1,sipType_QMdiArea_AreaOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___int__(PyObject *sipSelf);}
static PyObject *slot_QMdiArea_AreaOptions___int__(PyObject *sipSelf)
{
    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QMdiArea_AreaOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMdiArea::AreaOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiArea::AreaOptions::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QMdiArea_AreaOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QMdiArea::AreaOptions * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiArea::AreaOptions::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QMdiArea_AreaOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QMdiArea::AreaOptions *sipCpp = reinterpret_cast<QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QMdiArea::AreaOptions::operator&=(a0);
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
extern "C" {static void *cast_QMdiArea_AreaOptions(void *, const sipTypeDef *);}
static void *cast_QMdiArea_AreaOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMdiArea_AreaOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMdiArea_AreaOptions(void *, int);}
static void release_QMdiArea_AreaOptions(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QMdiArea::AreaOptions *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QMdiArea_AreaOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QMdiArea_AreaOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QMdiArea::AreaOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QMdiArea::AreaOptions *>(sipSrc);
}


extern "C" {static void *array_QMdiArea_AreaOptions(SIP_SSIZE_T);}
static void *array_QMdiArea_AreaOptions(SIP_SSIZE_T sipNrElem)
{
    return new QMdiArea::AreaOptions[sipNrElem];
}


extern "C" {static void *copy_QMdiArea_AreaOptions(const void *, SIP_SSIZE_T);}
static void *copy_QMdiArea_AreaOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QMdiArea::AreaOptions(reinterpret_cast<const QMdiArea::AreaOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMdiArea_AreaOptions(sipSimpleWrapper *);}
static void dealloc_QMdiArea_AreaOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QMdiArea_AreaOptions(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QMdiArea_AreaOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMdiArea_AreaOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QMdiArea::AreaOptions *sipCpp = 0;

    {
        const QMdiArea::AreaOptions * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiArea::AreaOptions(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiArea::AreaOptions(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QMdiArea::AreaOptions();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMdiArea_AreaOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMdiArea_AreaOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QMdiArea::AreaOptions **sipCppPtr = reinterpret_cast<QMdiArea::AreaOptions **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QMdiArea::AreaOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOption)) ||
            sipCanConvertToType(sipPy, sipType_QMdiArea_AreaOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOption)))
{
    *sipCppPtr = new QMdiArea::AreaOptions(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMdiArea::AreaOptions *>(sipConvertToType(sipPy, sipType_QMdiArea_AreaOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtGuiQMdiAreaAreaOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMdiArea_AreaOptions[] = {
    {(void *)slot_QMdiArea_AreaOptions___bool__, bool_slot},
    {(void *)slot_QMdiArea_AreaOptions___ne__, ne_slot},
    {(void *)slot_QMdiArea_AreaOptions___eq__, eq_slot},
    {(void *)slot_QMdiArea_AreaOptions___invert__, invert_slot},
    {(void *)slot_QMdiArea_AreaOptions___and__, and_slot},
    {(void *)slot_QMdiArea_AreaOptions___xor__, xor_slot},
    {(void *)slot_QMdiArea_AreaOptions___or__, or_slot},
    {(void *)slot_QMdiArea_AreaOptions___int__, int_slot},
    {(void *)slot_QMdiArea_AreaOptions___ixor__, ixor_slot},
    {(void *)slot_QMdiArea_AreaOptions___ior__, ior_slot},
    {(void *)slot_QMdiArea_AreaOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMdiArea_AreaOptions, "\1QMdiArea.AreaOptions(QMdiArea.AreaOptions)\n"
    "QMdiArea.AreaOptions(int)\n"
    "QMdiArea.AreaOptions()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMdiArea_AreaOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QMdiArea__AreaOptions,
        {0}
    },
    {
        sipNameNr_AreaOptions,
        {332, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMdiArea_AreaOptions,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMdiArea_AreaOptions,
    init_QMdiArea_AreaOptions,
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
    dealloc_QMdiArea_AreaOptions,
    assign_QMdiArea_AreaOptions,
    array_QMdiArea_AreaOptions,
    copy_QMdiArea_AreaOptions,
    release_QMdiArea_AreaOptions,
    cast_QMdiArea_AreaOptions,
    convertTo_QMdiArea_AreaOptions,
    0,
    0
},
    0,
    1,
    0
};
