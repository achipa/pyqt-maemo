/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:31 2010
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

#include "sipAPIQtXmlPatterns.h"

#line 137 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 39 "sipQtXmlPatternsQXmlItem.cpp"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 43 "sipQtXmlPatternsQXmlItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 46 "sipQtXmlPatternsQXmlItem.cpp"


PyDoc_STRVAR(doc_QXmlItem_isNull, "QXmlItem.isNull() -> bool");

extern "C" {static PyObject *meth_QXmlItem_isNull(PyObject *, PyObject *);}
static PyObject *meth_QXmlItem_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNull();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlItem, sipName_isNull, doc_QXmlItem_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlItem_isNode, "QXmlItem.isNode() -> bool");

extern "C" {static PyObject *meth_QXmlItem_isNode(PyObject *, PyObject *);}
static PyObject *meth_QXmlItem_isNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isNode();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlItem, sipName_isNode, doc_QXmlItem_isNode);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlItem_isAtomicValue, "QXmlItem.isAtomicValue() -> bool");

extern "C" {static PyObject *meth_QXmlItem_isAtomicValue(PyObject *, PyObject *);}
static PyObject *meth_QXmlItem_isAtomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAtomicValue();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlItem, sipName_isAtomicValue, doc_QXmlItem_isAtomicValue);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlItem_toAtomicValue, "QXmlItem.toAtomicValue() -> QVariant");

extern "C" {static PyObject *meth_QXmlItem_toAtomicValue(PyObject *, PyObject *);}
static PyObject *meth_QXmlItem_toAtomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlItem, &sipCpp))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->toAtomicValue());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlItem, sipName_toAtomicValue, doc_QXmlItem_toAtomicValue);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlItem_toNodeModelIndex, "QXmlItem.toNodeModelIndex() -> QXmlNodeModelIndex");

extern "C" {static PyObject *meth_QXmlItem_toNodeModelIndex(PyObject *, PyObject *);}
static PyObject *meth_QXmlItem_toNodeModelIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlItem, &sipCpp))
        {
            QXmlNodeModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlNodeModelIndex(sipCpp->toNodeModelIndex());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlNodeModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlItem, sipName_toNodeModelIndex, doc_QXmlItem_toNodeModelIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlItem(void *, const sipTypeDef *);}
static void *cast_QXmlItem(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlItem)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlItem(void *, int);}
static void release_QXmlItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QXmlItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QXmlItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QXmlItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QXmlItem *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QXmlItem *>(sipSrc);
}


extern "C" {static void *array_QXmlItem(SIP_SSIZE_T);}
static void *array_QXmlItem(SIP_SSIZE_T sipNrElem)
{
    return new QXmlItem[sipNrElem];
}


extern "C" {static void *copy_QXmlItem(const void *, SIP_SSIZE_T);}
static void *copy_QXmlItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QXmlItem(reinterpret_cast<const QXmlItem *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QXmlItem(sipSimpleWrapper *);}
static void dealloc_QXmlItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlItem(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QXmlItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QXmlItem *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlItem();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlItem * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QXmlNodeModelIndex * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlNodeModelIndex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVariant * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QXmlItem(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlItem[] = {
    {SIP_MLNAME_CAST(sipName_isAtomicValue), meth_QXmlItem_isAtomicValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlItem_isAtomicValue)},
    {SIP_MLNAME_CAST(sipName_isNode), meth_QXmlItem_isNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlItem_isNode)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QXmlItem_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlItem_isNull)},
    {SIP_MLNAME_CAST(sipName_toAtomicValue), meth_QXmlItem_toAtomicValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlItem_toAtomicValue)},
    {SIP_MLNAME_CAST(sipName_toNodeModelIndex), meth_QXmlItem_toNodeModelIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlItem_toNodeModelIndex)}
};

PyDoc_STRVAR(doc_QXmlItem, "\1QXmlItem()\n"
    "QXmlItem(QXmlItem)\n"
    "QXmlItem(QXmlNodeModelIndex)\n"
    "QXmlItem(QVariant)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlItem,
        {0}
    },
    {
        sipNameNr_QXmlItem,
        {0, 0, 1},
        5, methods_QXmlItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlItem,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QXmlItem,
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
    dealloc_QXmlItem,
    assign_QXmlItem,
    array_QXmlItem,
    copy_QXmlItem,
    release_QXmlItem,
    cast_QXmlItem,
    0,
    0,
    0
},
    0,
    0,
    0
};
