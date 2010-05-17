/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:10 2010
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

#include "sipAPIQtNetwork.h"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qnetworkcookie.sip"
#include <qnetworkcookie.h>
#line 39 "sipQtNetworkQNetworkCookie.cpp"

#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 43 "sipQtNetworkQNetworkCookie.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "sipQtNetworkQNetworkCookie.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtNetworkQNetworkCookie.cpp"
#line 346 "/home/maemo/python-qt4-4.7/sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 52 "sipQtNetworkQNetworkCookie.cpp"


PyDoc_STRVAR(doc_QNetworkCookie_isSecure, "QNetworkCookie.isSecure() -> bool");

extern "C" {static PyObject *meth_QNetworkCookie_isSecure(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_isSecure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSecure();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_isSecure, doc_QNetworkCookie_isSecure);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setSecure, "QNetworkCookie.setSecure(bool)");

extern "C" {static PyObject *meth_QNetworkCookie_setSecure(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setSecure(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QNetworkCookie, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSecure(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setSecure, doc_QNetworkCookie_setSecure);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_isSessionCookie, "QNetworkCookie.isSessionCookie() -> bool");

extern "C" {static PyObject *meth_QNetworkCookie_isSessionCookie(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_isSessionCookie(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isSessionCookie();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_isSessionCookie, doc_QNetworkCookie_isSessionCookie);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_expirationDate, "QNetworkCookie.expirationDate() -> QDateTime");

extern "C" {static PyObject *meth_QNetworkCookie_expirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_expirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            QDateTime *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDateTime(sipCpp->expirationDate());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_expirationDate, doc_QNetworkCookie_expirationDate);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setExpirationDate, "QNetworkCookie.setExpirationDate(QDateTime)");

extern "C" {static PyObject *meth_QNetworkCookie_setExpirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setExpirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime * a0;
        int a0State = 0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setExpirationDate(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setExpirationDate, doc_QNetworkCookie_setExpirationDate);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_domain, "QNetworkCookie.domain() -> QString");

extern "C" {static PyObject *meth_QNetworkCookie_domain(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_domain(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->domain());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_domain, doc_QNetworkCookie_domain);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setDomain, "QNetworkCookie.setDomain(QString)");

extern "C" {static PyObject *meth_QNetworkCookie_setDomain(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setDomain(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDomain(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setDomain, doc_QNetworkCookie_setDomain);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_path, "QNetworkCookie.path() -> QString");

extern "C" {static PyObject *meth_QNetworkCookie_path(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->path());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_path, doc_QNetworkCookie_path);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setPath, "QNetworkCookie.setPath(QString)");

extern "C" {static PyObject *meth_QNetworkCookie_setPath(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPath(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setPath, doc_QNetworkCookie_setPath);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_name, "QNetworkCookie.name() -> QByteArray");

extern "C" {static PyObject *meth_QNetworkCookie_name(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_name, doc_QNetworkCookie_name);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setName, "QNetworkCookie.setName(QByteArray)");

extern "C" {static PyObject *meth_QNetworkCookie_setName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setName, doc_QNetworkCookie_setName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_value, "QNetworkCookie.value() -> QByteArray");

extern "C" {static PyObject *meth_QNetworkCookie_value(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_value, doc_QNetworkCookie_value);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setValue, "QNetworkCookie.setValue(QByteArray)");

extern "C" {static PyObject *meth_QNetworkCookie_setValue(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setValue, doc_QNetworkCookie_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_toRawForm, "QNetworkCookie.toRawForm(QNetworkCookie.RawForm form=QNetworkCookie.Full) -> QByteArray");

extern "C" {static PyObject *meth_QNetworkCookie_toRawForm(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_toRawForm(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie::RawForm a0 = QNetworkCookie::Full;
        QNetworkCookie *sipCpp;

        static const char *sipKwdList[] = {
            sipName_form,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QNetworkCookie, &sipCpp, sipType_QNetworkCookie_RawForm, &a0))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->toRawForm(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_toRawForm, doc_QNetworkCookie_toRawForm);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_parseCookies, "QNetworkCookie.parseCookies(QByteArray) -> list-of-QNetworkCookie");

extern "C" {static PyObject *meth_QNetworkCookie_parseCookies(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_parseCookies(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QByteArray, &a0, &a0State))
        {
            QList<QNetworkCookie> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QNetworkCookie>(QNetworkCookie::parseCookies(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QList_0100QNetworkCookie,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_parseCookies, doc_QNetworkCookie_parseCookies);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_isHttpOnly, "QNetworkCookie.isHttpOnly() -> bool");

extern "C" {static PyObject *meth_QNetworkCookie_isHttpOnly(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_isHttpOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCookie, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isHttpOnly();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_isHttpOnly, doc_QNetworkCookie_isHttpOnly);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCookie_setHttpOnly, "QNetworkCookie.setHttpOnly(bool)");

extern "C" {static PyObject *meth_QNetworkCookie_setHttpOnly(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCookie_setHttpOnly(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QNetworkCookie *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QNetworkCookie, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHttpOnly(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCookie, sipName_setHttpOnly, doc_QNetworkCookie_setHttpOnly);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkCookie___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkCookie___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCookie *sipCpp = reinterpret_cast<QNetworkCookie *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCookie));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCookie * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCookie, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkCookie::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkCookie,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkCookie___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkCookie___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCookie *sipCpp = reinterpret_cast<QNetworkCookie *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCookie));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCookie * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCookie, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkCookie::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkCookie,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkCookie(void *, const sipTypeDef *);}
static void *cast_QNetworkCookie(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkCookie)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkCookie(void *, int);}
static void release_QNetworkCookie(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkCookie *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkCookie(sipSimpleWrapper *);}
static void dealloc_QNetworkCookie(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkCookie(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QNetworkCookie(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkCookie(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkCookie *sipCpp = 0;

    {
        const QByteArray& a0def = QByteArray();
        const QByteArray * a0 = &a0def;
        int a0State = 0;
        const QByteArray& a1def = QByteArray();
        const QByteArray * a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_value,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1J1", sipType_QByteArray, &a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkCookie(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            return sipCpp;
        }
    }

    {
        const QNetworkCookie * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkCookie, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkCookie(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkCookie[] = {
    {(void *)slot_QNetworkCookie___ne__, ne_slot},
    {(void *)slot_QNetworkCookie___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkCookie[] = {
    {SIP_MLNAME_CAST(sipName_domain), meth_QNetworkCookie_domain, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_domain)},
    {SIP_MLNAME_CAST(sipName_expirationDate), meth_QNetworkCookie_expirationDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_expirationDate)},
    {SIP_MLNAME_CAST(sipName_isHttpOnly), meth_QNetworkCookie_isHttpOnly, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_isHttpOnly)},
    {SIP_MLNAME_CAST(sipName_isSecure), meth_QNetworkCookie_isSecure, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_isSecure)},
    {SIP_MLNAME_CAST(sipName_isSessionCookie), meth_QNetworkCookie_isSessionCookie, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_isSessionCookie)},
    {SIP_MLNAME_CAST(sipName_name), meth_QNetworkCookie_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_name)},
    {SIP_MLNAME_CAST(sipName_parseCookies), meth_QNetworkCookie_parseCookies, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_parseCookies)},
    {SIP_MLNAME_CAST(sipName_path), meth_QNetworkCookie_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_path)},
    {SIP_MLNAME_CAST(sipName_setDomain), meth_QNetworkCookie_setDomain, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setDomain)},
    {SIP_MLNAME_CAST(sipName_setExpirationDate), meth_QNetworkCookie_setExpirationDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setExpirationDate)},
    {SIP_MLNAME_CAST(sipName_setHttpOnly), meth_QNetworkCookie_setHttpOnly, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setHttpOnly)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QNetworkCookie_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setName)},
    {SIP_MLNAME_CAST(sipName_setPath), meth_QNetworkCookie_setPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setPath)},
    {SIP_MLNAME_CAST(sipName_setSecure), meth_QNetworkCookie_setSecure, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setSecure)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QNetworkCookie_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_setValue)},
    {SIP_MLNAME_CAST(sipName_toRawForm), (PyCFunction)meth_QNetworkCookie_toRawForm, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkCookie_toRawForm)},
    {SIP_MLNAME_CAST(sipName_value), meth_QNetworkCookie_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCookie_value)}
};

static sipEnumMemberDef enummembers_QNetworkCookie[] = {
    {sipName_Full, QNetworkCookie::Full, 44},
    {sipName_NameAndValueOnly, QNetworkCookie::NameAndValueOnly, 44},
};

PyDoc_STRVAR(doc_QNetworkCookie, "\1QNetworkCookie(QByteArray name=QByteArray(), QByteArray value=QByteArray())\n"
    "QNetworkCookie(QNetworkCookie)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkCookie = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkCookie,
        {0}
    },
    {
        sipNameNr_QNetworkCookie,
        {0, 0, 1},
        17, methods_QNetworkCookie,
        2, enummembers_QNetworkCookie,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkCookie,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkCookie,
    init_QNetworkCookie,
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
    dealloc_QNetworkCookie,
    0,
    0,
    0,
    release_QNetworkCookie,
    cast_QNetworkCookie,
    0,
    0,
    0
},
    0,
    0,
    0
};
