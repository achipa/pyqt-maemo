/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:30 2010
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

#include "sipAPIQtWebKit.h"

#line 45 "/home/maemo/python-qt4-4.7/sip/QtWebKit/qwebhistory.sip"
#include <qwebhistory.h>
#line 39 "sipQtWebKitQWebHistoryItem.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 43 "sipQtWebKitQWebHistoryItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 46 "sipQtWebKitQWebHistoryItem.cpp"
#line 346 "/home/maemo/python-qt4-4.7/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 49 "sipQtWebKitQWebHistoryItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtWebKitQWebHistoryItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 55 "sipQtWebKitQWebHistoryItem.cpp"


PyDoc_STRVAR(doc_QWebHistoryItem_originalUrl, "QWebHistoryItem.originalUrl() -> QUrl");

extern "C" {static PyObject *meth_QWebHistoryItem_originalUrl(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_originalUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->originalUrl());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_originalUrl, doc_QWebHistoryItem_originalUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_url, "QWebHistoryItem.url() -> QUrl");

extern "C" {static PyObject *meth_QWebHistoryItem_url(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_url, doc_QWebHistoryItem_url);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_title, "QWebHistoryItem.title() -> QString");

extern "C" {static PyObject *meth_QWebHistoryItem_title(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->title());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_title, doc_QWebHistoryItem_title);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_lastVisited, "QWebHistoryItem.lastVisited() -> QDateTime");

extern "C" {static PyObject *meth_QWebHistoryItem_lastVisited(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_lastVisited(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->lastVisited());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_lastVisited, doc_QWebHistoryItem_lastVisited);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_icon, "QWebHistoryItem.icon() -> QIcon");

extern "C" {static PyObject *meth_QWebHistoryItem_icon(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QIcon *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QIcon(sipCpp->icon());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_icon, doc_QWebHistoryItem_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_userData, "QWebHistoryItem.userData() -> QVariant");

extern "C" {static PyObject *meth_QWebHistoryItem_userData(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_userData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->userData());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_userData, doc_QWebHistoryItem_userData);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_setUserData, "QWebHistoryItem.setUserData(QVariant)");

extern "C" {static PyObject *meth_QWebHistoryItem_setUserData(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_setUserData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariant * a0;
        int a0State = 0;
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWebHistoryItem, &sipCpp, sipType_QVariant,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUserData(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_setUserData, doc_QWebHistoryItem_setUserData);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistoryItem_isValid, "QWebHistoryItem.isValid() -> bool");

extern "C" {static PyObject *meth_QWebHistoryItem_isValid(PyObject *, PyObject *);}
static PyObject *meth_QWebHistoryItem_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistoryItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistoryItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistoryItem, sipName_isValid, doc_QWebHistoryItem_isValid);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebHistoryItem(void *, const sipTypeDef *);}
static void *cast_QWebHistoryItem(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebHistoryItem)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHistoryItem(void *, int);}
static void release_QWebHistoryItem(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QWebHistoryItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QWebHistoryItem(sipSimpleWrapper *);}
static void dealloc_QWebHistoryItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebHistoryItem(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QWebHistoryItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QWebHistoryItem(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebHistoryItem *sipCpp = 0;

    {
        const QWebHistoryItem * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebHistoryItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QWebHistoryItem(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWebHistoryItem[] = {
    {SIP_MLNAME_CAST(sipName_icon), meth_QWebHistoryItem_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_icon)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QWebHistoryItem_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_isValid)},
    {SIP_MLNAME_CAST(sipName_lastVisited), meth_QWebHistoryItem_lastVisited, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_lastVisited)},
    {SIP_MLNAME_CAST(sipName_originalUrl), meth_QWebHistoryItem_originalUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_originalUrl)},
    {SIP_MLNAME_CAST(sipName_setUserData), meth_QWebHistoryItem_setUserData, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_setUserData)},
    {SIP_MLNAME_CAST(sipName_title), meth_QWebHistoryItem_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_title)},
    {SIP_MLNAME_CAST(sipName_url), meth_QWebHistoryItem_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_url)},
    {SIP_MLNAME_CAST(sipName_userData), meth_QWebHistoryItem_userData, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistoryItem_userData)}
};

PyDoc_STRVAR(doc_QWebHistoryItem, "\1QWebHistoryItem(QWebHistoryItem)");


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebHistoryItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebHistoryItem,
        {0}
    },
    {
        sipNameNr_QWebHistoryItem,
        {0, 0, 1},
        8, methods_QWebHistoryItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebHistoryItem,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QWebHistoryItem,
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
    dealloc_QWebHistoryItem,
    0,
    0,
    0,
    release_QWebHistoryItem,
    cast_QWebHistoryItem,
    0,
    0,
    0
},
    0,
    0,
    0
};
