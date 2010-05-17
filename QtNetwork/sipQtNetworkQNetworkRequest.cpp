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

#line 39 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 39 "sipQtNetworkQNetworkRequest.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 43 "sipQtNetworkQNetworkRequest.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 46 "sipQtNetworkQNetworkRequest.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qsslconfiguration.sip"
#include <qsslconfiguration.h>
#line 49 "sipQtNetworkQNetworkRequest.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 52 "sipQtNetworkQNetworkRequest.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 55 "sipQtNetworkQNetworkRequest.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtNetworkQNetworkRequest.cpp"


PyDoc_STRVAR(doc_QNetworkRequest_url, "QNetworkRequest.url() -> QUrl");

extern "C" {static PyObject *meth_QNetworkRequest_url(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkRequest, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_url, doc_QNetworkRequest_url);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setUrl, "QNetworkRequest.setUrl(QUrl)");

extern "C" {static PyObject *meth_QNetworkRequest_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl * a0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUrl(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setUrl, doc_QNetworkRequest_setUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_header, "QNetworkRequest.header(QNetworkRequest.KnownHeaders) -> QVariant");

extern "C" {static PyObject *meth_QNetworkRequest_header(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_header(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest::KnownHeaders a0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->header(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_header, doc_QNetworkRequest_header);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setHeader, "QNetworkRequest.setHeader(QNetworkRequest.KnownHeaders, QVariant)");

extern "C" {static PyObject *meth_QNetworkRequest_setHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest::KnownHeaders a0;
        const QVariant * a1;
        int a1State = 0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QNetworkRequest_KnownHeaders, &a0, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeader(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setHeader, doc_QNetworkRequest_setHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_hasRawHeader, "QNetworkRequest.hasRawHeader(QByteArray) -> bool");

extern "C" {static PyObject *meth_QNetworkRequest_hasRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_hasRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasRawHeader(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_hasRawHeader, doc_QNetworkRequest_hasRawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_rawHeaderList, "QNetworkRequest.rawHeaderList() -> list-of-QByteArray");

extern "C" {static PyObject *meth_QNetworkRequest_rawHeaderList(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_rawHeaderList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkRequest, &sipCpp))
        {
            QList<QByteArray> *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QByteArray>(sipCpp->rawHeaderList());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_rawHeaderList, doc_QNetworkRequest_rawHeaderList);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_rawHeader, "QNetworkRequest.rawHeader(QByteArray) -> QByteArray");

extern "C" {static PyObject *meth_QNetworkRequest_rawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_rawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            QByteArray *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QByteArray(sipCpp->rawHeader(*a0));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_rawHeader, doc_QNetworkRequest_rawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setRawHeader, "QNetworkRequest.setRawHeader(QByteArray, QByteArray)");

extern "C" {static PyObject *meth_QNetworkRequest_setRawHeader(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setRawHeader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray * a0;
        int a0State = 0;
        const QByteArray * a1;
        int a1State = 0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QByteArray, &a0, &a0State, sipType_QByteArray, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRawHeader(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);
            sipReleaseType(const_cast<QByteArray *>(a1),sipType_QByteArray,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setRawHeader, doc_QNetworkRequest_setRawHeader);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_attribute, "QNetworkRequest.attribute(QNetworkRequest.Attribute, QVariant defaultValue=QVariant()) -> QVariant");

extern "C" {static PyObject *meth_QNetworkRequest_attribute(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_attribute(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest::Attribute a0;
        const QVariant& a1def = QVariant();
        const QVariant * a1 = &a1def;
        int a1State = 0;
        QNetworkRequest *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QNetworkRequest_Attribute, &a0, sipType_QVariant,&a1, &a1State))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->attribute(a0,*a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_attribute, doc_QNetworkRequest_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setAttribute, "QNetworkRequest.setAttribute(QNetworkRequest.Attribute, QVariant)");

extern "C" {static PyObject *meth_QNetworkRequest_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest::Attribute a0;
        const QVariant * a1;
        int a1State = 0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEJ1", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QNetworkRequest_Attribute, &a0, sipType_QVariant,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAttribute(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setAttribute, doc_QNetworkRequest_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_sslConfiguration, "QNetworkRequest.sslConfiguration() -> QSslConfiguration");

extern "C" {static PyObject *meth_QNetworkRequest_sslConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_sslConfiguration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkRequest, &sipCpp))
        {
            QSslConfiguration *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSslConfiguration(sipCpp->sslConfiguration());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSslConfiguration,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_sslConfiguration, doc_QNetworkRequest_sslConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setSslConfiguration, "QNetworkRequest.setSslConfiguration(QSslConfiguration)");

extern "C" {static PyObject *meth_QNetworkRequest_setSslConfiguration(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setSslConfiguration(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSslConfiguration * a0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QSslConfiguration, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setSslConfiguration(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setSslConfiguration, doc_QNetworkRequest_setSslConfiguration);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_setOriginatingObject, "QNetworkRequest.setOriginatingObject(QObject)");

extern "C" {static PyObject *meth_QNetworkRequest_setOriginatingObject(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_setOriginatingObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject * a0;
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QNetworkRequest, &sipCpp, sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOriginatingObject(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_setOriginatingObject, doc_QNetworkRequest_setOriginatingObject);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkRequest_originatingObject, "QNetworkRequest.originatingObject() -> QObject");

extern "C" {static PyObject *meth_QNetworkRequest_originatingObject(PyObject *, PyObject *);}
static PyObject *meth_QNetworkRequest_originatingObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkRequest *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkRequest, &sipCpp))
        {
            QObject *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->originatingObject();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkRequest, sipName_originatingObject, doc_QNetworkRequest_originatingObject);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkRequest___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkRequest___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkRequest *sipCpp = reinterpret_cast<QNetworkRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkRequest * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkRequest, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkRequest::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkRequest,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkRequest___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkRequest___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkRequest *sipCpp = reinterpret_cast<QNetworkRequest *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkRequest));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkRequest * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkRequest, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkRequest::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkRequest,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkRequest(void *, const sipTypeDef *);}
static void *cast_QNetworkRequest(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkRequest)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkRequest(void *, int);}
static void release_QNetworkRequest(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkRequest *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QNetworkRequest(sipSimpleWrapper *);}
static void dealloc_QNetworkRequest(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkRequest(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QNetworkRequest(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkRequest(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkRequest *sipCpp = 0;

    {
        const QUrl& a0def = QUrl();
        const QUrl * a0 = &a0def;

        static const char *sipKwdList[] = {
            sipName_url,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J9", sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkRequest(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QNetworkRequest * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkRequest, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkRequest(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkRequest[] = {
    {(void *)slot_QNetworkRequest___ne__, ne_slot},
    {(void *)slot_QNetworkRequest___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkRequest[] = {
    {SIP_MLNAME_CAST(sipName_attribute), (PyCFunction)meth_QNetworkRequest_attribute, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QNetworkRequest_attribute)},
    {SIP_MLNAME_CAST(sipName_hasRawHeader), meth_QNetworkRequest_hasRawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_hasRawHeader)},
    {SIP_MLNAME_CAST(sipName_header), meth_QNetworkRequest_header, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_header)},
    {SIP_MLNAME_CAST(sipName_originatingObject), meth_QNetworkRequest_originatingObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_originatingObject)},
    {SIP_MLNAME_CAST(sipName_rawHeader), meth_QNetworkRequest_rawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_rawHeader)},
    {SIP_MLNAME_CAST(sipName_rawHeaderList), meth_QNetworkRequest_rawHeaderList, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_rawHeaderList)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QNetworkRequest_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setAttribute)},
    {SIP_MLNAME_CAST(sipName_setHeader), meth_QNetworkRequest_setHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setHeader)},
    {SIP_MLNAME_CAST(sipName_setOriginatingObject), meth_QNetworkRequest_setOriginatingObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setOriginatingObject)},
    {SIP_MLNAME_CAST(sipName_setRawHeader), meth_QNetworkRequest_setRawHeader, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setRawHeader)},
    {SIP_MLNAME_CAST(sipName_setSslConfiguration), meth_QNetworkRequest_setSslConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setSslConfiguration)},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QNetworkRequest_setUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_setUrl)},
    {SIP_MLNAME_CAST(sipName_sslConfiguration), meth_QNetworkRequest_sslConfiguration, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_sslConfiguration)},
    {SIP_MLNAME_CAST(sipName_url), meth_QNetworkRequest_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkRequest_url)}
};

static sipEnumMemberDef enummembers_QNetworkRequest[] = {
    {sipName_AlwaysCache, QNetworkRequest::AlwaysCache, 61},
    {sipName_AlwaysNetwork, QNetworkRequest::AlwaysNetwork, 61},
    {sipName_CacheLoadControlAttribute, QNetworkRequest::CacheLoadControlAttribute, 60},
    {sipName_CacheSaveControlAttribute, QNetworkRequest::CacheSaveControlAttribute, 60},
    {sipName_ConnectionEncryptedAttribute, QNetworkRequest::ConnectionEncryptedAttribute, 60},
    {sipName_ContentLengthHeader, QNetworkRequest::ContentLengthHeader, 62},
    {sipName_ContentTypeHeader, QNetworkRequest::ContentTypeHeader, 62},
    {sipName_CookieHeader, QNetworkRequest::CookieHeader, 62},
    {sipName_DoNotBufferUploadDataAttribute, QNetworkRequest::DoNotBufferUploadDataAttribute, 60},
    {sipName_HttpPipeliningAllowedAttribute, QNetworkRequest::HttpPipeliningAllowedAttribute, 60},
    {sipName_HttpPipeliningWasUsedAttribute, QNetworkRequest::HttpPipeliningWasUsedAttribute, 60},
    {sipName_HttpReasonPhraseAttribute, QNetworkRequest::HttpReasonPhraseAttribute, 60},
    {sipName_HttpStatusCodeAttribute, QNetworkRequest::HttpStatusCodeAttribute, 60},
    {sipName_LastModifiedHeader, QNetworkRequest::LastModifiedHeader, 62},
    {sipName_LocationHeader, QNetworkRequest::LocationHeader, 62},
    {sipName_PreferCache, QNetworkRequest::PreferCache, 61},
    {sipName_PreferNetwork, QNetworkRequest::PreferNetwork, 61},
    {sipName_RedirectionTargetAttribute, QNetworkRequest::RedirectionTargetAttribute, 60},
    {sipName_SetCookieHeader, QNetworkRequest::SetCookieHeader, 62},
    {sipName_SourceIsFromCacheAttribute, QNetworkRequest::SourceIsFromCacheAttribute, 60},
    {sipName_User, QNetworkRequest::User, 60},
    {sipName_UserMax, QNetworkRequest::UserMax, 60},
};

PyDoc_STRVAR(doc_QNetworkRequest, "\1QNetworkRequest(QUrl url=QUrl())\n"
    "QNetworkRequest(QNetworkRequest)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkRequest = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkRequest,
        {0}
    },
    {
        sipNameNr_QNetworkRequest,
        {0, 0, 1},
        14, methods_QNetworkRequest,
        22, enummembers_QNetworkRequest,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkRequest,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkRequest,
    init_QNetworkRequest,
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
    dealloc_QNetworkRequest,
    0,
    0,
    0,
    release_QNetworkRequest,
    cast_QNetworkRequest,
    0,
    0,
    0
},
    0,
    0,
    0
};