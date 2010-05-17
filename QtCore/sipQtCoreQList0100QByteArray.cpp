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

#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 39 "sipQtCoreQList0100QByteArray.cpp"

#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "sipQtCoreQList0100QByteArray.cpp"


extern "C" {static void assign_QList_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QByteArray(SIP_SSIZE_T);}
static void *array_QList_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QList<QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QByteArray>(reinterpret_cast<const QList<QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QByteArray(void *, int);}
static void release_QList_0100QByteArray(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QList<QByteArray> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QList_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QByteArray> **sipCppPtr = reinterpret_cast<QList<QByteArray> **>(sipCppPtrV);

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
            bool ok = (itm && sipCanConvertToType(itm, sipType_QByteArray, SIP_NOT_NONE));

            Py_XDECREF(itm);

            if (!ok)
                return 0;
        }

        return 1;
    }

    QList<QByteArray> *ql = new QList<QByteArray>;
    len = PySequence_Size(sipPy);
 
    for (SIP_SSIZE_T i = 0; i < len; ++i)
    {
        PyObject *itm = PySequence_ITEM(sipPy, i);
        int state;
        QByteArray *t = reinterpret_cast<QByteArray *>(sipConvertToType(itm, sipType_QByteArray, sipTransferObj, SIP_NOT_NONE, &state, sipIsErr));

        Py_DECREF(itm);
 
        if (*sipIsErr)
        {
            sipReleaseType(t, sipType_QByteArray, state);

            delete ql;
            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QByteArray, state);
    }
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 133 "sipQtCoreQList0100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QByteArray(void *sipCppV,PyObject *sipTransferObj)
{
   QList<QByteArray> *sipCpp = reinterpret_cast<QList<QByteArray> *>(sipCppV);

#line 42 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QByteArray *t = new QByteArray(sipCpp->at(i));
        PyObject *tobj;

        if ((tobj = sipConvertFromNewType(t, sipType_QByteArray, sipTransferObj)) == NULL)
        {
            Py_DECREF(l);
            delete t;

            return NULL;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 167 "sipQtCoreQList0100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_13877,
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
    assign_QList_0100QByteArray,
    array_QList_0100QByteArray,
    copy_QList_0100QByteArray,
    release_QList_0100QByteArray,
    convertTo_QList_0100QByteArray,
    convertFrom_QList_0100QByteArray
};
