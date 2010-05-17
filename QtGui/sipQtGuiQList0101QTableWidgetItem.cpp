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

#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtGuiQList0101QTableWidgetItem.cpp"

#line 61 "/home/maemo/python-qt4-4.7/sip/QtGui/qtablewidget.sip"
#include <qtablewidget.h>
#line 43 "sipQtGuiQList0101QTableWidgetItem.cpp"


extern "C" {static void assign_QList_0101QTableWidgetItem(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QTableWidgetItem(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QTableWidgetItem *> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QTableWidgetItem *> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QTableWidgetItem(SIP_SSIZE_T);}
static void *array_QList_0101QTableWidgetItem(SIP_SSIZE_T sipNrElem)
{
    return new QList<QTableWidgetItem *>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QTableWidgetItem(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QTableWidgetItem(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QTableWidgetItem *>(reinterpret_cast<const QList<QTableWidgetItem *> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QTableWidgetItem(void *, int);}
static void release_QList_0101QTableWidgetItem(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QTableWidgetItem *> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0101QTableWidgetItem(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QTableWidgetItem(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QTableWidgetItem *> **sipCppPtr = reinterpret_cast<QList<QTableWidgetItem *> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QTableWidgetItem, 0));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QTableWidgetItem *> *ql = new QList<QTableWidgetItem *>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        QTableWidgetItem *t = reinterpret_cast<QTableWidgetItem *>(sipConvertToType(itm, sipType_QTableWidgetItem, sipTransferObj, 0, 0, sipIsErr));

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
#line 128 "sipQtGuiQList0101QTableWidgetItem.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QTableWidgetItem(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QTableWidgetItem(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QTableWidgetItem *> *sipCpp = reinterpret_cast<QList<QTableWidgetItem *> *>(sipCppV);

#line 129 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTableWidgetItem *t = sipCpp->at(i);
        PyObject *tobj;

        if ((tobj = sipConvertFromType(t, sipType_QTableWidgetItem, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 160 "sipQtGuiQList0101QTableWidgetItem.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QList_0101QTableWidgetItem = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_14989,
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
    assign_QList_0101QTableWidgetItem,
    array_QList_0101QTableWidgetItem,
    copy_QList_0101QTableWidgetItem,
    release_QList_0101QTableWidgetItem,
    convertTo_QList_0101QTableWidgetItem,
    convertFrom_QList_0101QTableWidgetItem
};
