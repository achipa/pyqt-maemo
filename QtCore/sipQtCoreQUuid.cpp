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

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/quuid.sip"
#include <quuid.h>
#line 39 "sipQtCoreQUuid.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtCoreQUuid.cpp"


PyDoc_STRVAR(doc_QUuid_toString, "QUuid.toString() -> QString");

extern "C" {static PyObject *meth_QUuid_toString(PyObject *, PyObject *);}
static PyObject *meth_QUuid_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->toString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_toString, doc_QUuid_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_isNull, "QUuid.isNull() -> bool");

extern "C" {static PyObject *meth_QUuid_isNull(PyObject *, PyObject *);}
static PyObject *meth_QUuid_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_isNull, doc_QUuid_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_createUuid, "QUuid.createUuid() -> QUuid");

extern "C" {static PyObject *meth_QUuid_createUuid(PyObject *, PyObject *);}
static PyObject *meth_QUuid_createUuid(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QUuid *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUuid(QUuid::createUuid());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUuid,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_createUuid, doc_QUuid_createUuid);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_variant, "QUuid.variant() -> QUuid.Variant");

extern "C" {static PyObject *meth_QUuid_variant(PyObject *, PyObject *);}
static PyObject *meth_QUuid_variant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QUuid::Variant sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->variant();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QUuid_Variant);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_variant, doc_QUuid_variant);

    return NULL;
}


PyDoc_STRVAR(doc_QUuid_version, "QUuid.version() -> QUuid.Version");

extern "C" {static PyObject *meth_QUuid_version(PyObject *, PyObject *);}
static PyObject *meth_QUuid_version(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QUuid *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QUuid, &sipCpp))
        {
            QUuid::Version sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->version();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QUuid_Version);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QUuid, sipName_version, doc_QUuid_version);

    return NULL;
}


extern "C" {static PyObject *slot_QUuid___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QUuid::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___le__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___le__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QUuid::operator>(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,le_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___gt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___gt__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QUuid::operator>(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,gt_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QUuid::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QUuid::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QUuid___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUuid * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QUuid, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QUuid::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUuid,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUuid___repr__(PyObject *sipSelf);}
static PyObject *slot_QUuid___repr__(PyObject *sipSelf)
{
    QUuid *sipCpp = reinterpret_cast<QUuid *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUuid));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 67 "/home/maemo/python-qt4-4.7/sip/QtCore/quuid.sip"
        PyObject *uni = qpycore_PyObject_FromQString(sipCpp->toString());
        
        if (uni)
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromFormat("PyQt4.QtCore.QUuid(%R)", uni);
        #else
            sipRes = PyString_FromFormat("PyQt4.QtCore.QUuid(");
            PyString_ConcatAndDel(&sipRes, PyObject_Repr(uni));
            PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
        
            Py_DECREF(uni);
        }
#line 426 "sipQtCoreQUuid.cpp"

            return sipRes;
        }
    }
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUuid(void *, const sipTypeDef *);}
static void *cast_QUuid(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUuid)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUuid(void *, int);}
static void release_QUuid(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QUuid *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QUuid(void *, SIP_SSIZE_T, const void *);}
static void assign_QUuid(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUuid *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUuid *>(sipSrc);
}


extern "C" {static void *array_QUuid(SIP_SSIZE_T);}
static void *array_QUuid(SIP_SSIZE_T sipNrElem)
{
    return new QUuid[sipNrElem];
}


extern "C" {static void *copy_QUuid(const void *, SIP_SSIZE_T);}
static void *copy_QUuid(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUuid(reinterpret_cast<const QUuid *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUuid(sipSimpleWrapper *);}
static void dealloc_QUuid(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUuid(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QUuid(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QUuid(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUuid *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUuid();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        uint a0;
        ushort a1;
        ushort a2;
        uchar a3;
        uchar a4;
        uchar a5;
        uchar a6;
        uchar a7;
        uchar a8;
        uchar a9;
        uchar a10;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "uttcccccccc", &a0, &a1, &a2, &a3, &a4, &a5, &a6, &a7, &a8, &a9, &a10))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUuid(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUuid(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QUuid * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QUuid, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QUuid(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUuid[] = {
    {(void *)slot_QUuid___ge__, ge_slot},
    {(void *)slot_QUuid___le__, le_slot},
    {(void *)slot_QUuid___gt__, gt_slot},
    {(void *)slot_QUuid___lt__, lt_slot},
    {(void *)slot_QUuid___ne__, ne_slot},
    {(void *)slot_QUuid___eq__, eq_slot},
    {(void *)slot_QUuid___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QUuid[] = {
    {SIP_MLNAME_CAST(sipName_createUuid), meth_QUuid_createUuid, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_createUuid)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QUuid_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_isNull)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QUuid_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_toString)},
    {SIP_MLNAME_CAST(sipName_variant), meth_QUuid_variant, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_variant)},
    {SIP_MLNAME_CAST(sipName_version), meth_QUuid_version, METH_VARARGS, SIP_MLDOC_CAST(doc_QUuid_version)}
};

static sipEnumMemberDef enummembers_QUuid[] = {
    {sipName_DCE, QUuid::DCE, 230},
    {sipName_EmbeddedPOSIX, QUuid::EmbeddedPOSIX, 231},
    {sipName_Microsoft, QUuid::Microsoft, 230},
    {sipName_NCS, QUuid::NCS, 230},
    {sipName_Name, QUuid::Name, 231},
    {sipName_Random, QUuid::Random, 231},
    {sipName_Reserved, QUuid::Reserved, 230},
    {sipName_Time, QUuid::Time, 231},
    {sipName_VarUnknown, QUuid::VarUnknown, 230},
    {sipName_VerUnknown, QUuid::VerUnknown, 231},
};

PyDoc_STRVAR(doc_QUuid, "\1QUuid()\n"
    "QUuid(int, int, int, str, str, str, str, str, str, str, str)\n"
    "QUuid(QString)\n"
    "QUuid(QUuid)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QUuid = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QUuid,
        {0}
    },
    {
        sipNameNr_QUuid,
        {0, 0, 1},
        5, methods_QUuid,
        10, enummembers_QUuid,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUuid,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUuid,
    init_QUuid,
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
    dealloc_QUuid,
    assign_QUuid,
    array_QUuid,
    copy_QUuid,
    release_QUuid,
    cast_QUuid,
    0,
    0,
    0
},
    0,
    0,
    0
};