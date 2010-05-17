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

#line 118 "/home/maemo/python-qt4-4.7/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 39 "sipQtCoreQTextEncoder.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 82 "/home/maemo/python-qt4-4.7/sip/QtCore/qtextcodec.sip"
#include <qtextcodec.h>
#line 45 "sipQtCoreQTextEncoder.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 48 "sipQtCoreQTextEncoder.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "sipQtCoreQTextEncoder.cpp"


PyDoc_STRVAR(doc_QTextEncoder_fromUnicode, "QTextEncoder.fromUnicode(QString) -> QByteArray");

extern "C" {static PyObject *meth_QTextEncoder_fromUnicode(PyObject *, PyObject *);}
static PyObject *meth_QTextEncoder_fromUnicode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QTextEncoder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextEncoder, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->fromUnicode(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextEncoder, sipName_fromUnicode, doc_QTextEncoder_fromUnicode);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextEncoder(void *, const sipTypeDef *);}
static void *cast_QTextEncoder(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextEncoder)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextEncoder(void *, int);}
static void release_QTextEncoder(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextEncoder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextEncoder(sipSimpleWrapper *);}
static void dealloc_QTextEncoder(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextEncoder(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextEncoder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextEncoder(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextEncoder *sipCpp = 0;

    {
        const QTextCodec * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextCodec, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextEncoder(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextEncoder[] = {
    {SIP_MLNAME_CAST(sipName_fromUnicode), meth_QTextEncoder_fromUnicode, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextEncoder_fromUnicode)}
};

PyDoc_STRVAR(doc_QTextEncoder, "\1QTextEncoder(QTextCodec)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QTextEncoder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextEncoder,
        {0}
    },
    {
        sipNameNr_QTextEncoder,
        {0, 0, 1},
        1, methods_QTextEncoder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextEncoder,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QTextEncoder,
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
    dealloc_QTextEncoder,
    0,
    0,
    0,
    release_QTextEncoder,
    cast_QTextEncoder,
    0,
    0,
    0
},
    0,
    0,
    0
};