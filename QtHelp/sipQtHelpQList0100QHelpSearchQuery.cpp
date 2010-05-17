/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10-snapshot-20100108 on Tue Feb 16 16:28:37 2010
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

#include "sipAPIQtHelp.h"

#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtHelpQList0100QHelpSearchQuery.cpp"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtHelp/qhelpsearchengine.sip"
#include <qhelpsearchengine.h>
#line 43 "sipQtHelpQList0100QHelpSearchQuery.cpp"


extern "C" {static void assign_QList_0100QHelpSearchQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QHelpSearchQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QHelpSearchQuery> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QHelpSearchQuery> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QHelpSearchQuery(SIP_SSIZE_T);}
static void *array_QList_0100QHelpSearchQuery(SIP_SSIZE_T sipNrElem)
{
    return new QList<QHelpSearchQuery>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QHelpSearchQuery(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QHelpSearchQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QHelpSearchQuery>(reinterpret_cast<const QList<QHelpSearchQuery> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QHelpSearchQuery(void *, int);}
static void release_QList_0100QHelpSearchQuery(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QHelpSearchQuery> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QHelpSearchQuery(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QHelpSearchQuery(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QHelpSearchQuery> **sipCppPtr = reinterpret_cast<QList<QHelpSearchQuery> **>(sipCppPtrV);

#line 69 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    SIP_SSIZE_T len;

    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
    {
        if (!PySequence_Check(sipPy) || (len = PySequence_Size(sipPy)) < 0)
            return 0;

        for (SIP_SSIZE_T i = 0; i < len; ++i)
        {
            PyObject *itm = PySequence_ITEM(sipPy, i);
            bool ok = (itm && sipCanConvertToType(itm, sipType_QHelpSearchQuery, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QHelpSearchQuery> *ql = new QList<QHelpSearchQuery>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QHelpSearchQuery *t = reinterpret_cast<QHelpSearchQuery *>(sipConvertToType(itm, sipType_QHelpSearchQuery, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QHelpSearchQuery, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QHelpSearchQuery, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 133 "sipQtHelpQList0100QHelpSearchQuery.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QHelpSearchQuery(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QHelpSearchQuery(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QHelpSearchQuery> *sipCpp = reinterpret_cast<QList<QHelpSearchQuery> *>(sipCppV);

#line 42 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QHelpSearchQuery *t = new QHelpSearchQuery(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QHelpSearchQuery, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 167 "sipQtHelpQList0100QHelpSearchQuery.cpp"
}


sipMappedTypeDef sipTypeDef_QtHelp_QList_0100QHelpSearchQuery = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_82,
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
    assign_QList_0100QHelpSearchQuery,
    array_QList_0100QHelpSearchQuery,
    copy_QList_0100QHelpSearchQuery,
    release_QList_0100QHelpSearchQuery,
    convertTo_QList_0100QHelpSearchQuery,
    convertFrom_QList_0100QHelpSearchQuery
};
