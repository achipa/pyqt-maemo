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

#line 114 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 39 "sipQtNetworkQNetworkProxyQuery.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 43 "sipQtNetworkQNetworkProxyQuery.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtNetworkQNetworkProxyQuery.cpp"


PyDoc_STRVAR(doc_QNetworkProxyQuery_queryType, "QNetworkProxyQuery.queryType() -> QNetworkProxyQuery.QueryType");

extern "C" {static PyObject *meth_QNetworkProxyQuery_queryType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_queryType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QNetworkProxyQuery::QueryType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->queryType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QNetworkProxyQuery_QueryType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_queryType, doc_QNetworkProxyQuery_queryType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setQueryType, "QNetworkProxyQuery.setQueryType(QNetworkProxyQuery.QueryType)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setQueryType(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setQueryType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery::QueryType a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QNetworkProxyQuery_QueryType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setQueryType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setQueryType, doc_QNetworkProxyQuery_setQueryType);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_peerPort, "QNetworkProxyQuery.peerPort() -> int");

extern "C" {static PyObject *meth_QNetworkProxyQuery_peerPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_peerPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->peerPort();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_peerPort, doc_QNetworkProxyQuery_peerPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setPeerPort, "QNetworkProxyQuery.setPeerPort(int)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setPeerPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setPeerPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerPort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setPeerPort, doc_QNetworkProxyQuery_setPeerPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_peerHostName, "QNetworkProxyQuery.peerHostName() -> QString");

extern "C" {static PyObject *meth_QNetworkProxyQuery_peerHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_peerHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->peerHostName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_peerHostName, doc_QNetworkProxyQuery_peerHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setPeerHostName, "QNetworkProxyQuery.setPeerHostName(QString)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setPeerHostName(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setPeerHostName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPeerHostName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setPeerHostName, doc_QNetworkProxyQuery_setPeerHostName);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_localPort, "QNetworkProxyQuery.localPort() -> int");

extern "C" {static PyObject *meth_QNetworkProxyQuery_localPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_localPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->localPort();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_localPort, doc_QNetworkProxyQuery_localPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setLocalPort, "QNetworkProxyQuery.setLocalPort(int)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setLocalPort(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setLocalPort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLocalPort(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setLocalPort, doc_QNetworkProxyQuery_setLocalPort);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_protocolTag, "QNetworkProxyQuery.protocolTag() -> QString");

extern "C" {static PyObject *meth_QNetworkProxyQuery_protocolTag(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_protocolTag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->protocolTag());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_protocolTag, doc_QNetworkProxyQuery_protocolTag);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setProtocolTag, "QNetworkProxyQuery.setProtocolTag(QString)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setProtocolTag(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setProtocolTag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProtocolTag(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setProtocolTag, doc_QNetworkProxyQuery_setProtocolTag);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_url, "QNetworkProxyQuery.url() -> QUrl");

extern "C" {static PyObject *meth_QNetworkProxyQuery_url(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp))
        {
            QUrl *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QUrl(sipCpp->url());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_url, doc_QNetworkProxyQuery_url);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkProxyQuery_setUrl, "QNetworkProxyQuery.setUrl(QUrl)");

extern "C" {static PyObject *meth_QNetworkProxyQuery_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkProxyQuery_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl * a0;
        QNetworkProxyQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkProxyQuery, &sipCpp, sipType_QUrl, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setUrl(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkProxyQuery, sipName_setUrl, doc_QNetworkProxyQuery_setUrl);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkProxyQuery___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxyQuery___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxyQuery *sipCpp = reinterpret_cast<QNetworkProxyQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxyQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxyQuery, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxyQuery::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkProxyQuery,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxyQuery___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxyQuery___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxyQuery *sipCpp = reinterpret_cast<QNetworkProxyQuery *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxyQuery));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxyQuery * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkProxyQuery, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QNetworkProxyQuery::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkProxyQuery,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkProxyQuery(void *, const sipTypeDef *);}
static void *cast_QNetworkProxyQuery(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkProxyQuery)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxyQuery(void *, int);}
static void release_QNetworkProxyQuery(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkProxyQuery *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkProxyQuery(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkProxyQuery(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkProxyQuery *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkProxyQuery *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxyQuery(SIP_SSIZE_T);}
static void *array_QNetworkProxyQuery(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkProxyQuery[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxyQuery(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxyQuery(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkProxyQuery(reinterpret_cast<const QNetworkProxyQuery *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxyQuery(sipSimpleWrapper *);}
static void dealloc_QNetworkProxyQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxyQuery(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QNetworkProxyQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkProxyQuery(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkProxyQuery *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QUrl * a0;
        QNetworkProxyQuery::QueryType a1 = QNetworkProxyQuery::UrlRequest;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|E", sipType_QUrl, &a0, sipType_QNetworkProxyQuery_QueryType, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        const QString& a2def = QString();
        const QString * a2 = &a2def;
        int a2State = 0;
        QNetworkProxyQuery::QueryType a3 = QNetworkProxyQuery::TcpSocket;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|J1E", sipType_QString,&a0, &a0State, &a1, sipType_QString,&a2, &a2State, sipType_QNetworkProxyQuery_QueryType, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0,a1,*a2,a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);

            return sipCpp;
        }
    }

    {
        quint16 a0;
        const QString& a1def = QString();
        const QString * a1 = &a1def;
        int a1State = 0;
        QNetworkProxyQuery::QueryType a2 = QNetworkProxyQuery::TcpServer;

        static const char *sipKwdList[] = {
            NULL,
            sipName_protocolTag,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "t|J1E", &a0, sipType_QString,&a1, &a1State, sipType_QNetworkProxyQuery_QueryType, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QNetworkProxyQuery * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkProxyQuery, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxyQuery(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxyQuery[] = {
    {(void *)slot_QNetworkProxyQuery___ne__, ne_slot},
    {(void *)slot_QNetworkProxyQuery___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkProxyQuery[] = {
    {SIP_MLNAME_CAST(sipName_localPort), meth_QNetworkProxyQuery_localPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_localPort)},
    {SIP_MLNAME_CAST(sipName_peerHostName), meth_QNetworkProxyQuery_peerHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_peerHostName)},
    {SIP_MLNAME_CAST(sipName_peerPort), meth_QNetworkProxyQuery_peerPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_peerPort)},
    {SIP_MLNAME_CAST(sipName_protocolTag), meth_QNetworkProxyQuery_protocolTag, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_protocolTag)},
    {SIP_MLNAME_CAST(sipName_queryType), meth_QNetworkProxyQuery_queryType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_queryType)},
    {SIP_MLNAME_CAST(sipName_setLocalPort), meth_QNetworkProxyQuery_setLocalPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setLocalPort)},
    {SIP_MLNAME_CAST(sipName_setPeerHostName), meth_QNetworkProxyQuery_setPeerHostName, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setPeerHostName)},
    {SIP_MLNAME_CAST(sipName_setPeerPort), meth_QNetworkProxyQuery_setPeerPort, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setPeerPort)},
    {SIP_MLNAME_CAST(sipName_setProtocolTag), meth_QNetworkProxyQuery_setProtocolTag, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setProtocolTag)},
    {SIP_MLNAME_CAST(sipName_setQueryType), meth_QNetworkProxyQuery_setQueryType, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setQueryType)},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QNetworkProxyQuery_setUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_setUrl)},
    {SIP_MLNAME_CAST(sipName_url), meth_QNetworkProxyQuery_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkProxyQuery_url)}
};

static sipEnumMemberDef enummembers_QNetworkProxyQuery[] = {
    {sipName_TcpServer, QNetworkProxyQuery::TcpServer, 56},
    {sipName_TcpSocket, QNetworkProxyQuery::TcpSocket, 56},
    {sipName_UdpSocket, QNetworkProxyQuery::UdpSocket, 56},
    {sipName_UrlRequest, QNetworkProxyQuery::UrlRequest, 56},
};

PyDoc_STRVAR(doc_QNetworkProxyQuery, "\1QNetworkProxyQuery()\n"
    "QNetworkProxyQuery(QUrl, QNetworkProxyQuery.QueryType type=QNetworkProxyQuery.UrlRequest)\n"
    "QNetworkProxyQuery(QString, int, QString protocolTag=QString(), QNetworkProxyQuery.QueryType type=QNetworkProxyQuery.TcpSocket)\n"
    "QNetworkProxyQuery(int, QString protocolTag=QString(), QNetworkProxyQuery.QueryType type=QNetworkProxyQuery.TcpServer)\n"
    "QNetworkProxyQuery(QNetworkProxyQuery)");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxyQuery = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxyQuery,
        {0}
    },
    {
        sipNameNr_QNetworkProxyQuery,
        {0, 0, 1},
        12, methods_QNetworkProxyQuery,
        4, enummembers_QNetworkProxyQuery,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxyQuery,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxyQuery,
    init_QNetworkProxyQuery,
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
    dealloc_QNetworkProxyQuery,
    assign_QNetworkProxyQuery,
    array_QNetworkProxyQuery,
    copy_QNetworkProxyQuery,
    release_QNetworkProxyQuery,
    cast_QNetworkProxyQuery,
    0,
    0,
    0
},
    0,
    0,
    0
};
