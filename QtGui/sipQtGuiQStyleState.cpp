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

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 39 "sipQtGuiQStyleState.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyle.sip"
#include <qstyle.h>
#line 43 "sipQtGuiQStyleState.cpp"


extern "C" {static int slot_QStyle_State___bool__(PyObject *sipSelf);}
static int slot_QStyle_State___bool__(PyObject *sipSelf)
{
    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQStyleState.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QStyle_State___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_State___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyle::State * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_State, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQStyleState.cpp"
            sipReleaseType(const_cast<QStyle::State *>(a0),sipType_QStyle_State,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyle_State,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_State___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_State___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyle::State * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_State, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQStyleState.cpp"
            sipReleaseType(const_cast<QStyle::State *>(a0),sipType_QStyle_State,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyle_State,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyle_State___invert__(PyObject *sipSelf);}
static PyObject *slot_QStyle_State___invert__(PyObject *sipSelf)
{
    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;


    {
        {
            QStyle::State *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::State(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyle_State,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QStyle_State___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_State___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::State * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyle_State, &a0, &a0State, &a1))
        {
            QStyle::State *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::State((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyle_State,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_State,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_State___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_State___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::State * a0;
        int a0State = 0;
        QStyle::State * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyle_State, &a0, &a0State, sipType_QStyle_State, &a1, &a1State))
        {
            QStyle::State *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::State((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyle_State,a0State);
            sipReleaseType(a1,sipType_QStyle_State,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_State,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_State___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyle_State___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyle::State * a0;
        int a0State = 0;
        QStyle::State * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyle_State, &a0, &a0State, sipType_QStyle_State, &a1, &a1State))
        {
            QStyle::State *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyle::State((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyle_State,a0State);
            sipReleaseType(a1,sipType_QStyle_State,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyle_State,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyle_State___int__(PyObject *sipSelf);}
static PyObject *slot_QStyle_State___int__(PyObject *sipSelf)
{
    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

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


extern "C" {static PyObject *slot_QStyle_State___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_State___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_State)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyle::State * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_State, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::State::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyle_State,a0State);

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


extern "C" {static PyObject *slot_QStyle_State___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_State___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_State)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyle::State * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyle_State, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::State::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyle_State,a0State);

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


extern "C" {static PyObject *slot_QStyle_State___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyle_State___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyle_State)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyle::State *sipCpp = reinterpret_cast<QStyle::State *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyle_State));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyle::State::operator&=(a0);
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
extern "C" {static void *cast_QStyle_State(void *, const sipTypeDef *);}
static void *cast_QStyle_State(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyle_State)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyle_State(void *, int);}
static void release_QStyle_State(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyle::State *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyle_State(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyle_State(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyle::State *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyle::State *>(sipSrc);
}


extern "C" {static void *array_QStyle_State(SIP_SSIZE_T);}
static void *array_QStyle_State(SIP_SSIZE_T sipNrElem)
{
    return new QStyle::State[sipNrElem];
}


extern "C" {static void *copy_QStyle_State(const void *, SIP_SSIZE_T);}
static void *copy_QStyle_State(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyle::State(reinterpret_cast<const QStyle::State *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyle_State(sipSimpleWrapper *);}
static void dealloc_QStyle_State(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyle_State(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyle_State(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyle_State(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyle::State *sipCpp = 0;

    {
        const QStyle::State * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyle_State, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::State(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStyle::State *>(a0),sipType_QStyle_State,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::State(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyle::State();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyle_State(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyle_State(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyle::State **sipCppPtr = reinterpret_cast<QStyle::State **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyle::State is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_StateFlag)) ||
            sipCanConvertToType(sipPy, sipType_QStyle_State, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyle_StateFlag)))
{
    *sipCppPtr = new QStyle::State(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyle::State *>(sipConvertToType(sipPy, sipType_QStyle_State, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtGuiQStyleState.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyle_State[] = {
    {(void *)slot_QStyle_State___bool__, bool_slot},
    {(void *)slot_QStyle_State___ne__, ne_slot},
    {(void *)slot_QStyle_State___eq__, eq_slot},
    {(void *)slot_QStyle_State___invert__, invert_slot},
    {(void *)slot_QStyle_State___and__, and_slot},
    {(void *)slot_QStyle_State___xor__, xor_slot},
    {(void *)slot_QStyle_State___or__, or_slot},
    {(void *)slot_QStyle_State___int__, int_slot},
    {(void *)slot_QStyle_State___ixor__, ixor_slot},
    {(void *)slot_QStyle_State___ior__, ior_slot},
    {(void *)slot_QStyle_State___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyle_State, "\1QStyle.State(QStyle.State)\n"
    "QStyle.State(int)\n"
    "QStyle.State()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyle_State = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyle__State,
        {0}
    },
    {
        sipNameNr_State,
        {461, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyle_State,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyle_State,
    init_QStyle_State,
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
    dealloc_QStyle_State,
    assign_QStyle_State,
    array_QStyle_State,
    copy_QStyle_State,
    release_QStyle_State,
    cast_QStyle_State,
    convertTo_QStyle_State,
    0,
    0
},
    0,
    1,
    0
};
