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

#line 39 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qxmlresultitems.sip"
#include <qxmlresultitems.h>
#line 39 "sipQtXmlPatternsQXmlResultItems.cpp"

#line 137 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qabstractxmlnodemodel.sip"
#include <qabstractxmlnodemodel.h>
#line 43 "sipQtXmlPatternsQXmlResultItems.cpp"


class sipQXmlResultItems : public QXmlResultItems
{
public:
    sipQXmlResultItems();
    ~sipQXmlResultItems();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlResultItems(const sipQXmlResultItems &);
    sipQXmlResultItems &operator = (const sipQXmlResultItems &);
};

sipQXmlResultItems::sipQXmlResultItems(): QXmlResultItems(), sipPySelf(0)
{
}

sipQXmlResultItems::~sipQXmlResultItems()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QXmlResultItems_hasError, "QXmlResultItems.hasError() -> bool");

extern "C" {static PyObject *meth_QXmlResultItems_hasError(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_hasError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasError();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_hasError, doc_QXmlResultItems_hasError);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlResultItems_next, "QXmlResultItems.next() -> QXmlItem");

extern "C" {static PyObject *meth_QXmlResultItems_next(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            QXmlItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlItem(sipCpp->next());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_next, doc_QXmlResultItems_next);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlResultItems_current, "QXmlResultItems.current() -> QXmlItem");

extern "C" {static PyObject *meth_QXmlResultItems_current(PyObject *, PyObject *);}
static PyObject *meth_QXmlResultItems_current(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QXmlResultItems *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlResultItems, &sipCpp))
        {
            QXmlItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QXmlItem(sipCpp->current());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QXmlItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlResultItems, sipName_current, doc_QXmlResultItems_current);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QXmlResultItems(void *, const sipTypeDef *);}
static void *cast_QXmlResultItems(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QXmlResultItems)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlResultItems(void *, int);}
static void release_QXmlResultItems(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlResultItems *>(sipCppV);
    else
        delete reinterpret_cast<QXmlResultItems *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QXmlResultItems(sipSimpleWrapper *);}
static void dealloc_QXmlResultItems(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQXmlResultItems *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QXmlResultItems(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QXmlResultItems(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QXmlResultItems(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlResultItems *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQXmlResultItems();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlResultItems[] = {
    {SIP_MLNAME_CAST(sipName_current), meth_QXmlResultItems_current, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_current)},
    {SIP_MLNAME_CAST(sipName_hasError), meth_QXmlResultItems_hasError, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_hasError)},
    {SIP_MLNAME_CAST(sipName_next), meth_QXmlResultItems_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlResultItems_next)}
};

PyDoc_STRVAR(doc_QXmlResultItems, "\1QXmlResultItems()");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QXmlResultItems = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QXmlResultItems,
        {0}
    },
    {
        sipNameNr_QXmlResultItems,
        {0, 0, 1},
        3, methods_QXmlResultItems,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlResultItems,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QXmlResultItems,
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
    dealloc_QXmlResultItems,
    0,
    0,
    0,
    release_QXmlResultItems,
    cast_QXmlResultItems,
    0,
    0,
    0
},
    0,
    0,
    0
};
