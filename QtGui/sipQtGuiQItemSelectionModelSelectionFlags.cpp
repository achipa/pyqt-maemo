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

#line 82 "/home/maemo/python-qt4-4.7/sip/QtGui/qitemselectionmodel.sip"
#include <qitemselectionmodel.h>
#line 39 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"

#line 82 "/home/maemo/python-qt4-4.7/sip/QtGui/qitemselectionmodel.sip"
#include <qitemselectionmodel.h>
#line 43 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"


extern "C" {static int slot_QItemSelectionModel_SelectionFlags___bool__(PyObject *sipSelf);}
static int slot_QItemSelectionModel_SelectionFlags___bool__(PyObject *sipSelf)
{
    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"
            sipReleaseType(const_cast<QItemSelectionModel::SelectionFlags *>(a0),sipType_QItemSelectionModel_SelectionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QItemSelectionModel_SelectionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"
            sipReleaseType(const_cast<QItemSelectionModel::SelectionFlags *>(a0),sipType_QItemSelectionModel_SelectionFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QItemSelectionModel_SelectionFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___invert__(PyObject *sipSelf);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___invert__(PyObject *sipSelf)
{
    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QItemSelectionModel::SelectionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QItemSelectionModel::SelectionFlags(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QItemSelectionModel_SelectionFlags,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State, &a1))
        {
            QItemSelectionModel::SelectionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QItemSelectionModel::SelectionFlags((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QItemSelectionModel_SelectionFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QItemSelectionModel_SelectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;
        QItemSelectionModel::SelectionFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State, sipType_QItemSelectionModel_SelectionFlags, &a1, &a1State))
        {
            QItemSelectionModel::SelectionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QItemSelectionModel::SelectionFlags((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QItemSelectionModel_SelectionFlags,a0State);
            sipReleaseType(a1,sipType_QItemSelectionModel_SelectionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QItemSelectionModel_SelectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;
        QItemSelectionModel::SelectionFlags * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State, sipType_QItemSelectionModel_SelectionFlags, &a1, &a1State))
        {
            QItemSelectionModel::SelectionFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QItemSelectionModel::SelectionFlags((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QItemSelectionModel_SelectionFlags,a0State);
            sipReleaseType(a1,sipType_QItemSelectionModel_SelectionFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QItemSelectionModel_SelectionFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___int__(PyObject *sipSelf);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___int__(PyObject *sipSelf)
{
    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

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


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QItemSelectionModel_SelectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QItemSelectionModel::SelectionFlags::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QItemSelectionModel_SelectionFlags,a0State);

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


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QItemSelectionModel_SelectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QItemSelectionModel::SelectionFlags::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QItemSelectionModel_SelectionFlags,a0State);

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


extern "C" {static PyObject *slot_QItemSelectionModel_SelectionFlags___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QItemSelectionModel_SelectionFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QItemSelectionModel_SelectionFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QItemSelectionModel::SelectionFlags *sipCpp = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionModel_SelectionFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QItemSelectionModel::SelectionFlags::operator&=(a0);
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
extern "C" {static void *cast_QItemSelectionModel_SelectionFlags(void *, const sipTypeDef *);}
static void *cast_QItemSelectionModel_SelectionFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QItemSelectionModel_SelectionFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QItemSelectionModel_SelectionFlags(void *, int);}
static void release_QItemSelectionModel_SelectionFlags(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QItemSelectionModel_SelectionFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QItemSelectionModel_SelectionFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QItemSelectionModel::SelectionFlags *>(sipSrc);
}


extern "C" {static void *array_QItemSelectionModel_SelectionFlags(SIP_SSIZE_T);}
static void *array_QItemSelectionModel_SelectionFlags(SIP_SSIZE_T sipNrElem)
{
    return new QItemSelectionModel::SelectionFlags[sipNrElem];
}


extern "C" {static void *copy_QItemSelectionModel_SelectionFlags(const void *, SIP_SSIZE_T);}
static void *copy_QItemSelectionModel_SelectionFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QItemSelectionModel::SelectionFlags(reinterpret_cast<const QItemSelectionModel::SelectionFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QItemSelectionModel_SelectionFlags(sipSimpleWrapper *);}
static void dealloc_QItemSelectionModel_SelectionFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QItemSelectionModel_SelectionFlags(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QItemSelectionModel_SelectionFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QItemSelectionModel_SelectionFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QItemSelectionModel::SelectionFlags *sipCpp = 0;

    {
        const QItemSelectionModel::SelectionFlags * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QItemSelectionModel_SelectionFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QItemSelectionModel::SelectionFlags(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QItemSelectionModel::SelectionFlags *>(a0),sipType_QItemSelectionModel_SelectionFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QItemSelectionModel::SelectionFlags(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QItemSelectionModel::SelectionFlags();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QItemSelectionModel_SelectionFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QItemSelectionModel_SelectionFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QItemSelectionModel::SelectionFlags **sipCppPtr = reinterpret_cast<QItemSelectionModel::SelectionFlags **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QItemSelectionModel::SelectionFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QItemSelectionModel_SelectionFlag)) ||
            sipCanConvertToType(sipPy, sipType_QItemSelectionModel_SelectionFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QItemSelectionModel_SelectionFlag)))
{
    *sipCppPtr = new QItemSelectionModel::SelectionFlags(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QItemSelectionModel::SelectionFlags *>(sipConvertToType(sipPy, sipType_QItemSelectionModel_SelectionFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtGuiQItemSelectionModelSelectionFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QItemSelectionModel_SelectionFlags[] = {
    {(void *)slot_QItemSelectionModel_SelectionFlags___bool__, bool_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___ne__, ne_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___eq__, eq_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___invert__, invert_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___and__, and_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___xor__, xor_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___or__, or_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___int__, int_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___ixor__, ixor_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___ior__, ior_slot},
    {(void *)slot_QItemSelectionModel_SelectionFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QItemSelectionModel_SelectionFlags, "\1QItemSelectionModel.SelectionFlags(QItemSelectionModel.SelectionFlags)\n"
    "QItemSelectionModel.SelectionFlags(int)\n"
    "QItemSelectionModel.SelectionFlags()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QItemSelectionModel_SelectionFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QItemSelectionModel__SelectionFlags,
        {0}
    },
    {
        sipNameNr_SelectionFlags,
        {257, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QItemSelectionModel_SelectionFlags,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QItemSelectionModel_SelectionFlags,
    init_QItemSelectionModel_SelectionFlags,
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
    dealloc_QItemSelectionModel_SelectionFlags,
    assign_QItemSelectionModel_SelectionFlags,
    array_QItemSelectionModel_SelectionFlags,
    copy_QItemSelectionModel_SelectionFlags,
    release_QItemSelectionModel_SelectionFlags,
    cast_QItemSelectionModel_SelectionFlags,
    convertTo_QItemSelectionModel_SelectionFlags,
    0,
    0
},
    0,
    1,
    0
};