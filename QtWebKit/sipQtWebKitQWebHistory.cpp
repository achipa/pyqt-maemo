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

#line 74 "/home/maemo/python-qt4-4.7/sip/QtWebKit/qwebhistory.sip"
#include <qwebhistory.h>
#line 39 "sipQtWebKitQWebHistory.cpp"

#line 45 "/home/maemo/python-qt4-4.7/sip/QtWebKit/qwebhistory.sip"
#include <qwebhistory.h>
#line 43 "sipQtWebKitQWebHistory.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "sipQtWebKitQWebHistory.cpp"


PyDoc_STRVAR(doc_QWebHistory_clear, "QWebHistory.clear()");

extern "C" {static PyObject *meth_QWebHistory_clear(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->clear();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_clear, doc_QWebHistory_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_items, "QWebHistory.items() -> list-of-QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_items(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_items(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QList<QWebHistoryItem> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->items());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_items, doc_QWebHistory_items);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_backItems, "QWebHistory.backItems(int) -> list-of-QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_backItems(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_backItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QList<QWebHistoryItem> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->backItems(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_backItems, doc_QWebHistory_backItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forwardItems, "QWebHistory.forwardItems(int) -> list-of-QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_forwardItems(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forwardItems(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QList<QWebHistoryItem> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QWebHistoryItem>(sipCpp->forwardItems(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forwardItems, doc_QWebHistory_forwardItems);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_canGoBack, "QWebHistory.canGoBack() -> bool");

extern "C" {static PyObject *meth_QWebHistory_canGoBack(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_canGoBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canGoBack();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_canGoBack, doc_QWebHistory_canGoBack);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_canGoForward, "QWebHistory.canGoForward() -> bool");

extern "C" {static PyObject *meth_QWebHistory_canGoForward(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_canGoForward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->canGoForward();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_canGoForward, doc_QWebHistory_canGoForward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_back, "QWebHistory.back()");

extern "C" {static PyObject *meth_QWebHistory_back(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_back(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->back();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_back, doc_QWebHistory_back);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forward, "QWebHistory.forward()");

extern "C" {static PyObject *meth_QWebHistory_forward(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forward(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->forward();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forward, doc_QWebHistory_forward);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_goToItem, "QWebHistory.goToItem(QWebHistoryItem)");

extern "C" {static PyObject *meth_QWebHistory_goToItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_goToItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWebHistoryItem * a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QWebHistory, &sipCpp, sipType_QWebHistoryItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->goToItem(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_goToItem, doc_QWebHistory_goToItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_backItem, "QWebHistory.backItem() -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_backItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_backItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->backItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_backItem, doc_QWebHistory_backItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_currentItem, "QWebHistory.currentItem() -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_currentItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_currentItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->currentItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_currentItem, doc_QWebHistory_currentItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_forwardItem, "QWebHistory.forwardItem() -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_forwardItem(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_forwardItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            QWebHistoryItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->forwardItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_forwardItem, doc_QWebHistory_forwardItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_itemAt, "QWebHistory.itemAt(int) -> QWebHistoryItem");

extern "C" {static PyObject *meth_QWebHistory_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            QWebHistoryItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QWebHistoryItem(sipCpp->itemAt(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWebHistoryItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_itemAt, doc_QWebHistory_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_count, "QWebHistory.count() -> int");

extern "C" {static PyObject *meth_QWebHistory_count(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_count, doc_QWebHistory_count);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_currentItemIndex, "QWebHistory.currentItemIndex() -> int");

extern "C" {static PyObject *meth_QWebHistory_currentItemIndex(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_currentItemIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->currentItemIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_currentItemIndex, doc_QWebHistory_currentItemIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_maximumItemCount, "QWebHistory.maximumItemCount() -> int");

extern "C" {static PyObject *meth_QWebHistory_maximumItemCount(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_maximumItemCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWebHistory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->maximumItemCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_maximumItemCount, doc_QWebHistory_maximumItemCount);

    return NULL;
}


PyDoc_STRVAR(doc_QWebHistory_setMaximumItemCount, "QWebHistory.setMaximumItemCount(int)");

extern "C" {static PyObject *meth_QWebHistory_setMaximumItemCount(PyObject *, PyObject *);}
static PyObject *meth_QWebHistory_setMaximumItemCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QWebHistory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QWebHistory, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMaximumItemCount(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWebHistory, sipName_setMaximumItemCount, doc_QWebHistory_setMaximumItemCount);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebHistory(void *, const sipTypeDef *);}
static void *cast_QWebHistory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebHistory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebHistory(void *, int);}
static void release_QWebHistory(void *,int)
{
}


static PyMethodDef methods_QWebHistory[] = {
    {SIP_MLNAME_CAST(sipName_back), meth_QWebHistory_back, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_back)},
    {SIP_MLNAME_CAST(sipName_backItem), meth_QWebHistory_backItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_backItem)},
    {SIP_MLNAME_CAST(sipName_backItems), meth_QWebHistory_backItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_backItems)},
    {SIP_MLNAME_CAST(sipName_canGoBack), meth_QWebHistory_canGoBack, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_canGoBack)},
    {SIP_MLNAME_CAST(sipName_canGoForward), meth_QWebHistory_canGoForward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_canGoForward)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QWebHistory_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWebHistory_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_count)},
    {SIP_MLNAME_CAST(sipName_currentItem), meth_QWebHistory_currentItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_currentItem)},
    {SIP_MLNAME_CAST(sipName_currentItemIndex), meth_QWebHistory_currentItemIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_currentItemIndex)},
    {SIP_MLNAME_CAST(sipName_forward), meth_QWebHistory_forward, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forward)},
    {SIP_MLNAME_CAST(sipName_forwardItem), meth_QWebHistory_forwardItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forwardItem)},
    {SIP_MLNAME_CAST(sipName_forwardItems), meth_QWebHistory_forwardItems, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_forwardItems)},
    {SIP_MLNAME_CAST(sipName_goToItem), meth_QWebHistory_goToItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_goToItem)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QWebHistory_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_itemAt)},
    {SIP_MLNAME_CAST(sipName_items), meth_QWebHistory_items, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_items)},
    {SIP_MLNAME_CAST(sipName_maximumItemCount), meth_QWebHistory_maximumItemCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_maximumItemCount)},
    {SIP_MLNAME_CAST(sipName_setMaximumItemCount), meth_QWebHistory_setMaximumItemCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QWebHistory_setMaximumItemCount)}
};


pyqt4ClassTypeDef sipTypeDef_QtWebKit_QWebHistory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QWebHistory,
        {0}
    },
    {
        sipNameNr_QWebHistory,
        {0, 0, 1},
        17, methods_QWebHistory,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    release_QWebHistory,
    cast_QWebHistory,
    0,
    0,
    0
},
    0,
    0,
    0
};
