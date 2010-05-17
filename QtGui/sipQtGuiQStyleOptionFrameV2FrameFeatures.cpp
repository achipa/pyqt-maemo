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

#line 424 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"

#line 424 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 43 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"


extern "C" {static int slot_QStyleOptionFrameV2_FrameFeatures___bool__(PyObject *sipSelf);}
static int slot_QStyleOptionFrameV2_FrameFeatures___bool__(PyObject *sipSelf)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionFrameV2::FrameFeatures *>(a0),sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStyleOptionFrameV2_FrameFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"
            sipReleaseType(const_cast<QStyleOptionFrameV2::FrameFeatures *>(a0),sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStyleOptionFrameV2_FrameFeatures,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___invert__(PyObject *sipSelf);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___invert__(PyObject *sipSelf)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;


    {
        {
            QStyleOptionFrameV2::FrameFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionFrameV2::FrameFeatures(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrameV2_FrameFeatures,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State, &a1))
        {
            QStyleOptionFrameV2::FrameFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionFrameV2::FrameFeatures((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrameV2_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;
        QStyleOptionFrameV2::FrameFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State, sipType_QStyleOptionFrameV2_FrameFeatures, &a1, &a1State))
        {
            QStyleOptionFrameV2::FrameFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionFrameV2::FrameFeatures((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionFrameV2_FrameFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionFrameV2_FrameFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrameV2_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;
        QStyleOptionFrameV2::FrameFeatures * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State, sipType_QStyleOptionFrameV2_FrameFeatures, &a1, &a1State))
        {
            QStyleOptionFrameV2::FrameFeatures *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStyleOptionFrameV2::FrameFeatures((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionFrameV2_FrameFeatures,a0State);
            sipReleaseType(a1,sipType_QStyleOptionFrameV2_FrameFeatures,a1State);

            return sipConvertFromNewType(sipRes,sipType_QStyleOptionFrameV2_FrameFeatures,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___int__(PyObject *sipSelf);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___int__(PyObject *sipSelf)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

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


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrameV2_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionFrameV2::FrameFeatures::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrameV2_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionFrameV2::FrameFeatures::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

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


extern "C" {static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QStyleOptionFrameV2_FrameFeatures___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QStyleOptionFrameV2_FrameFeatures)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QStyleOptionFrameV2::FrameFeatures *sipCpp = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStyleOptionFrameV2_FrameFeatures));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QStyleOptionFrameV2::FrameFeatures::operator&=(a0);
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
extern "C" {static void *cast_QStyleOptionFrameV2_FrameFeatures(void *, const sipTypeDef *);}
static void *cast_QStyleOptionFrameV2_FrameFeatures(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStyleOptionFrameV2_FrameFeatures)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionFrameV2_FrameFeatures(void *, int);}
static void release_QStyleOptionFrameV2_FrameFeatures(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionFrameV2_FrameFeatures(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionFrameV2_FrameFeatures(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionFrameV2::FrameFeatures *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionFrameV2_FrameFeatures(SIP_SSIZE_T);}
static void *array_QStyleOptionFrameV2_FrameFeatures(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionFrameV2::FrameFeatures[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionFrameV2_FrameFeatures(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionFrameV2_FrameFeatures(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionFrameV2::FrameFeatures(reinterpret_cast<const QStyleOptionFrameV2::FrameFeatures *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionFrameV2_FrameFeatures(sipSimpleWrapper *);}
static void dealloc_QStyleOptionFrameV2_FrameFeatures(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionFrameV2_FrameFeatures(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionFrameV2_FrameFeatures(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionFrameV2_FrameFeatures(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionFrameV2::FrameFeatures *sipCpp = 0;

    {
        const QStyleOptionFrameV2::FrameFeatures * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QStyleOptionFrameV2_FrameFeatures, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2::FrameFeatures(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStyleOptionFrameV2::FrameFeatures *>(a0),sipType_QStyleOptionFrameV2_FrameFeatures,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2::FrameFeatures(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionFrameV2::FrameFeatures();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QStyleOptionFrameV2_FrameFeatures(PyObject *, void **, int *, PyObject *);}
static int convertTo_QStyleOptionFrameV2_FrameFeatures(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QStyleOptionFrameV2::FrameFeatures **sipCppPtr = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QStyleOptionFrameV2::FrameFeatures is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionFrameV2_FrameFeature)) ||
            sipCanConvertToType(sipPy, sipType_QStyleOptionFrameV2_FrameFeatures, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QStyleOptionFrameV2_FrameFeature)))
{
    *sipCppPtr = new QStyleOptionFrameV2::FrameFeatures(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QStyleOptionFrameV2::FrameFeatures *>(sipConvertToType(sipPy, sipType_QStyleOptionFrameV2_FrameFeatures, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtGuiQStyleOptionFrameV2FrameFeatures.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStyleOptionFrameV2_FrameFeatures[] = {
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___bool__, bool_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___ne__, ne_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___eq__, eq_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___invert__, invert_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___and__, and_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___xor__, xor_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___or__, or_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___int__, int_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___ixor__, ixor_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___ior__, ior_slot},
    {(void *)slot_QStyleOptionFrameV2_FrameFeatures___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QStyleOptionFrameV2_FrameFeatures, "\1QStyleOptionFrameV2.FrameFeatures(QStyleOptionFrameV2.FrameFeatures)\n"
    "QStyleOptionFrameV2.FrameFeatures(int)\n"
    "QStyleOptionFrameV2.FrameFeatures()");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionFrameV2_FrameFeatures = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionFrameV2__FrameFeatures,
        {0}
    },
    {
        sipNameNr_FrameFeatures,
        {512, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionFrameV2_FrameFeatures,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStyleOptionFrameV2_FrameFeatures,
    init_QStyleOptionFrameV2_FrameFeatures,
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
    dealloc_QStyleOptionFrameV2_FrameFeatures,
    assign_QStyleOptionFrameV2_FrameFeatures,
    array_QStyleOptionFrameV2_FrameFeatures,
    copy_QStyleOptionFrameV2_FrameFeatures,
    release_QStyleOptionFrameV2_FrameFeatures,
    cast_QStyleOptionFrameV2_FrameFeatures,
    convertTo_QStyleOptionFrameV2_FrameFeatures,
    0,
    0
},
    0,
    1,
    0
};
