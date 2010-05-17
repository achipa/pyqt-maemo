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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qstringmatcher.sip"
#include <qstringmatcher.h>
#line 39 "sipQtCoreQStringMatcher_0.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtCoreQStringMatcher_0.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtCoreQStringMatcher_0.cpp"


PyDoc_STRVAR(doc_QStringMatcher_0_setPattern, "QStringMatcher.setPattern(QString)");

extern "C" {static PyObject *meth_QStringMatcher_0_setPattern(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_setPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPattern(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_setPattern, doc_QStringMatcher_0_setPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_setCaseSensitivity, "QStringMatcher.setCaseSensitivity(Qt.CaseSensitivity)");

extern "C" {static PyObject *meth_QStringMatcher_0_setCaseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_setCaseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::CaseSensitivity a0;
        QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_Qt_CaseSensitivity, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCaseSensitivity(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_setCaseSensitivity, doc_QStringMatcher_0_setCaseSensitivity);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_indexIn, "QStringMatcher.indexIn(QString, int from=0) -> int");

extern "C" {static PyObject *meth_QStringMatcher_0_indexIn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_indexIn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        int a1 = 0;
        QStringMatcher *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_from,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|i", &sipSelf, sipType_QStringMatcher, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->indexIn(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_indexIn, doc_QStringMatcher_0_indexIn);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_pattern, "QStringMatcher.pattern() -> QString");

extern "C" {static PyObject *meth_QStringMatcher_0_pattern(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_pattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStringMatcher, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->pattern());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_pattern, doc_QStringMatcher_0_pattern);

    return NULL;
}


PyDoc_STRVAR(doc_QStringMatcher_0_caseSensitivity, "QStringMatcher.caseSensitivity() -> Qt.CaseSensitivity");

extern "C" {static PyObject *meth_QStringMatcher_0_caseSensitivity(PyObject *, PyObject *);}
static PyObject *meth_QStringMatcher_0_caseSensitivity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStringMatcher *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStringMatcher, &sipCpp))
        {
            Qt::CaseSensitivity sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->caseSensitivity();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_CaseSensitivity);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStringMatcher, sipName_caseSensitivity, doc_QStringMatcher_0_caseSensitivity);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStringMatcher_0(void *, const sipTypeDef *);}
static void *cast_QStringMatcher_0(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStringMatcher)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStringMatcher_0(void *, int);}
static void release_QStringMatcher_0(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStringMatcher *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStringMatcher_0(void *, SIP_SSIZE_T, const void *);}
static void assign_QStringMatcher_0(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStringMatcher *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStringMatcher *>(sipSrc);
}


extern "C" {static void *array_QStringMatcher_0(SIP_SSIZE_T);}
static void *array_QStringMatcher_0(SIP_SSIZE_T sipNrElem)
{
    return new QStringMatcher[sipNrElem];
}


extern "C" {static void *copy_QStringMatcher_0(const void *, SIP_SSIZE_T);}
static void *copy_QStringMatcher_0(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStringMatcher(reinterpret_cast<const QStringMatcher *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStringMatcher_0(sipSimpleWrapper *);}
static void dealloc_QStringMatcher_0(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStringMatcher_0(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStringMatcher_0(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStringMatcher_0(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStringMatcher *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStringMatcher();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        Qt::CaseSensitivity a1 = Qt::CaseSensitive;

        static const char *sipKwdList[] = {
            NULL,
            sipName_cs,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_CaseSensitivity, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStringMatcher(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QStringMatcher * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStringMatcher, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStringMatcher(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QStringMatcher_0[] = {
    {SIP_MLNAME_CAST(sipName_caseSensitivity), meth_QStringMatcher_0_caseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_caseSensitivity)},
    {SIP_MLNAME_CAST(sipName_indexIn), (PyCFunction)meth_QStringMatcher_0_indexIn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QStringMatcher_0_indexIn)},
    {SIP_MLNAME_CAST(sipName_pattern), meth_QStringMatcher_0_pattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_pattern)},
    {SIP_MLNAME_CAST(sipName_setCaseSensitivity), meth_QStringMatcher_0_setCaseSensitivity, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_setCaseSensitivity)},
    {SIP_MLNAME_CAST(sipName_setPattern), meth_QStringMatcher_0_setPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QStringMatcher_0_setPattern)}
};

PyDoc_STRVAR(doc_QStringMatcher_0, "\1QStringMatcher()\n"
    "QStringMatcher(QString, Qt.CaseSensitivity cs=Qt.CaseSensitive)\n"
    "QStringMatcher(QStringMatcher)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QStringMatcher_0 = {
{
    {
        0,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QStringMatcher,
        {0}
    },
    {
        sipNameNr_QStringMatcher,
        {0, 0, 1},
        5, methods_QStringMatcher_0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStringMatcher_0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QStringMatcher_0,
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
    dealloc_QStringMatcher_0,
    assign_QStringMatcher_0,
    array_QStringMatcher_0,
    copy_QStringMatcher_0,
    release_QStringMatcher_0,
    cast_QStringMatcher_0,
    0,
    0,
    0
},
    0,
    0,
    0
};