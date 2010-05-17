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

#line 111 "/home/maemo/python-qt4-4.7/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 39 "sipQtCoreQVector1900.cpp"



extern "C" {static void assign_QVector_1900(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_1900(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<unsigned> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<unsigned> *>(sipSrc);
}


extern "C" {static void *array_QVector_1900(SIP_SSIZE_T);}
static void *array_QVector_1900(SIP_SSIZE_T sipNrElem)
{
    return new QVector<unsigned>[sipNrElem];
}


extern "C" {static void *copy_QVector_1900(const void *, SIP_SSIZE_T);}
static void *copy_QVector_1900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<unsigned>(reinterpret_cast<const QVector<unsigned> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_1900(void *, int);}
static void release_QVector_1900(void *ptr, int)
{
    Py_BEGIN_ALLOW_THREADS
    delete reinterpret_cast<QVector<unsigned> *>(ptr);
    Py_END_ALLOW_THREADS
}



extern "C" {static int convertTo_QVector_1900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_1900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<unsigned> **sipCppPtr = reinterpret_cast<QVector<unsigned> **>(sipCppPtrV);

#line 142 "/home/maemo/python-qt4-4.7/sip/QtCore/qvector.sip"
    // Check the type if that is all that is required.
    if (sipIsErr == NULL)
        return PyList_Check(sipPy);

    QVector<unsigned> *qv = new QVector<unsigned>;
 
    for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(sipPy); ++i)
        qv->append(PyLong_AsUnsignedLong(PyList_GET_ITEM(sipPy, i)));
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 93 "sipQtCoreQVector1900.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_1900(void *, PyObject *);}
static PyObject *convertFrom_QVector_1900(void *sipCppV,PyObject *)
{
   QVector<unsigned> *sipCpp = reinterpret_cast<QVector<unsigned> *>(sipCppV);

#line 115 "/home/maemo/python-qt4-4.7/sip/QtCore/qvector.sip"
    // Create the list.
    PyObject *l;

    if ((l = PyList_New(sipCpp->size())) == NULL)
        return NULL;

    // Set the list elements.
    for (int i = 0; i < sipCpp->size(); ++i)
    {
        PyObject *pobj;

        // Convert to a Python long to make sure it doesn't get interpreted as
        // a signed value.
        if ((pobj = PyLong_FromUnsignedLong(sipCpp->value(i))) == NULL)
        {
            Py_DECREF(l);

            return NULL;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 127 "sipQtCoreQVector1900.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_1900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_7057,
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
    assign_QVector_1900,
    array_QVector_1900,
    copy_QVector_1900,
    release_QVector_1900,
    convertTo_QVector_1900,
    convertFrom_QVector_1900
};
