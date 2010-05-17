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

#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtCoreQList0101QAbstractState.cpp"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractstate.sip"
#include <qabstractstate.h>
#line 43 "sipQtCoreQList0101QAbstractState.cpp"


extern "C" {static void assign_QList_0101QAbstractState(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QAbstractState(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QAbstractState *> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QAbstractState *> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QAbstractState(SIP_SSIZE_T);}
static void *array_QList_0101QAbstractState(SIP_SSIZE_T sipNrElem)
{
    return new QList<QAbstractState *>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QAbstractState(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QAbstractState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QAbstractState *>(reinterpret_cast<const QList<QAbstractState *> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QAbstractState(void *, int);}
static void release_QList_0101QAbstractState(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QAbstractState *> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QAbstractState(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QAbstractState(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QAbstractState *> **sipCppPtr = reinterpret_cast<QList<QAbstractState *> **>(sipCppPtrV);

#line 154 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QAbstractState, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QAbstractState *> *ql = new QList<QAbstractState *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QAbstractState *t = reinterpret_cast<QAbstractState *>(sipConvertToType(itm, sipType_QAbstractState, sipTransferObj, 0, 0, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            delete ql;
            return 0;
        }

        ql->append(t);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 128 "sipQtCoreQList0101QAbstractState.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QAbstractState(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QAbstractState(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QAbstractState *> *sipCpp = reinterpret_cast<QList<QAbstractState *> *>(sipCppV);

#line 129 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QAbstractState *t = sipCpp->at(i);
        PyObject *tobj;

        if ((tobj = sipConvertFromType(t, sipType_QAbstractState, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 160 "sipQtCoreQList0101QAbstractState.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0101QAbstractState = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_5796,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QAbstractState,
    array_QList_0101QAbstractState,
    copy_QList_0101QAbstractState,
    release_QList_0101QAbstractState,
    convertTo_QList_0101QAbstractState,
    convertFrom_QList_0101QAbstractState
};
