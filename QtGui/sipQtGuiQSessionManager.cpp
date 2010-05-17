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

#line 39 "/home/maemo/python-qt4-4.7/sip/QtGui/qsessionmanager.sip"
#include <qsessionmanager.h>
#line 39 "sipQtGuiQSessionManager.cpp"

#line 118 "/home/maemo/python-qt4-4.7/sip/QtGui/qapplication.sip"
#include <qapplication.h>
#line 43 "sipQtGuiQSessionManager.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtGuiQSessionManager.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 49 "sipQtGuiQSessionManager.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtGuiQSessionManager.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQSessionManager.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtGuiQSessionManager.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 61 "sipQtGuiQSessionManager.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 64 "sipQtGuiQSessionManager.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtGuiQSessionManager.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 70 "sipQtGuiQSessionManager.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 73 "sipQtGuiQSessionManager.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 76 "sipQtGuiQSessionManager.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 79 "sipQtGuiQSessionManager.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtGuiQSessionManager.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtGuiQSessionManager.cpp"


PyDoc_STRVAR(doc_QSessionManager_sessionId, "QSessionManager.sessionId() -> QString");

extern "C" {static PyObject *meth_QSessionManager_sessionId(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_sessionId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->sessionId());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_sessionId, doc_QSessionManager_sessionId);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_sessionKey, "QSessionManager.sessionKey() -> QString");

extern "C" {static PyObject *meth_QSessionManager_sessionKey(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_sessionKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->sessionKey());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_sessionKey, doc_QSessionManager_sessionKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_allowsInteraction, "QSessionManager.allowsInteraction() -> bool");

extern "C" {static PyObject *meth_QSessionManager_allowsInteraction(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_allowsInteraction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->allowsInteraction();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_allowsInteraction, doc_QSessionManager_allowsInteraction);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_allowsErrorInteraction, "QSessionManager.allowsErrorInteraction() -> bool");

extern "C" {static PyObject *meth_QSessionManager_allowsErrorInteraction(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_allowsErrorInteraction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->allowsErrorInteraction();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_allowsErrorInteraction, doc_QSessionManager_allowsErrorInteraction);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_release, "QSessionManager.release()");

extern "C" {static PyObject *meth_QSessionManager_release(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->release();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_release, doc_QSessionManager_release);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_cancel, "QSessionManager.cancel()");

extern "C" {static PyObject *meth_QSessionManager_cancel(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_cancel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->cancel();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_cancel, doc_QSessionManager_cancel);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setRestartHint, "QSessionManager.setRestartHint(QSessionManager.RestartHint)");

extern "C" {static PyObject *meth_QSessionManager_setRestartHint(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setRestartHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager::RestartHint a0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QSessionManager_RestartHint, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRestartHint(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setRestartHint, doc_QSessionManager_setRestartHint);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_restartHint, "QSessionManager.restartHint() -> QSessionManager.RestartHint");

extern "C" {static PyObject *meth_QSessionManager_restartHint(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_restartHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QSessionManager::RestartHint sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->restartHint();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSessionManager_RestartHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_restartHint, doc_QSessionManager_restartHint);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setRestartCommand, "QSessionManager.setRestartCommand(QStringList)");

extern "C" {static PyObject *meth_QSessionManager_setRestartCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setRestartCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList * a0;
        int a0State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRestartCommand(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setRestartCommand, doc_QSessionManager_setRestartCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_restartCommand, "QSessionManager.restartCommand() -> QStringList");

extern "C" {static PyObject *meth_QSessionManager_restartCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_restartCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->restartCommand());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_restartCommand, doc_QSessionManager_restartCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setDiscardCommand, "QSessionManager.setDiscardCommand(QStringList)");

extern "C" {static PyObject *meth_QSessionManager_setDiscardCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setDiscardCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList * a0;
        int a0State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setDiscardCommand(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setDiscardCommand, doc_QSessionManager_setDiscardCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_discardCommand, "QSessionManager.discardCommand() -> QStringList");

extern "C" {static PyObject *meth_QSessionManager_discardCommand(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_discardCommand(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            QStringList *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QStringList(sipCpp->discardCommand());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_discardCommand, doc_QSessionManager_discardCommand);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_setManagerProperty, "QSessionManager.setManagerProperty(QString, QString)\n"
    "QSessionManager.setManagerProperty(QString, QStringList)");

extern "C" {static PyObject *meth_QSessionManager_setManagerProperty(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_setManagerProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setManagerProperty(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QStringList * a1;
        int a1State = 0;
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QSessionManager, &sipCpp, sipType_QString,&a0, &a0State, sipType_QStringList,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setManagerProperty(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QStringList *>(a1),sipType_QStringList,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_setManagerProperty, doc_QSessionManager_setManagerProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_isPhase2, "QSessionManager.isPhase2() -> bool");

extern "C" {static PyObject *meth_QSessionManager_isPhase2(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_isPhase2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isPhase2();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_isPhase2, doc_QSessionManager_isPhase2);

    return NULL;
}


PyDoc_STRVAR(doc_QSessionManager_requestPhase2, "QSessionManager.requestPhase2()");

extern "C" {static PyObject *meth_QSessionManager_requestPhase2(PyObject *, PyObject *);}
static PyObject *meth_QSessionManager_requestPhase2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSessionManager *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSessionManager, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->requestPhase2();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSessionManager, sipName_requestPhase2, doc_QSessionManager_requestPhase2);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSessionManager(void *, const sipTypeDef *);}
static void *cast_QSessionManager(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSessionManager)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSessionManager *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSessionManager(void *, int);}
static void release_QSessionManager(void *,int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSessionManager[] = {{129, 0, 1}};


static PyMethodDef methods_QSessionManager[] = {
    {SIP_MLNAME_CAST(sipName_allowsErrorInteraction), meth_QSessionManager_allowsErrorInteraction, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_allowsErrorInteraction)},
    {SIP_MLNAME_CAST(sipName_allowsInteraction), meth_QSessionManager_allowsInteraction, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_allowsInteraction)},
    {SIP_MLNAME_CAST(sipName_cancel), meth_QSessionManager_cancel, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_cancel)},
    {SIP_MLNAME_CAST(sipName_discardCommand), meth_QSessionManager_discardCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_discardCommand)},
    {SIP_MLNAME_CAST(sipName_isPhase2), meth_QSessionManager_isPhase2, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_isPhase2)},
    {SIP_MLNAME_CAST(sipName_release), meth_QSessionManager_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_release)},
    {SIP_MLNAME_CAST(sipName_requestPhase2), meth_QSessionManager_requestPhase2, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_requestPhase2)},
    {SIP_MLNAME_CAST(sipName_restartCommand), meth_QSessionManager_restartCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_restartCommand)},
    {SIP_MLNAME_CAST(sipName_restartHint), meth_QSessionManager_restartHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_restartHint)},
    {SIP_MLNAME_CAST(sipName_sessionId), meth_QSessionManager_sessionId, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_sessionId)},
    {SIP_MLNAME_CAST(sipName_sessionKey), meth_QSessionManager_sessionKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_sessionKey)},
    {SIP_MLNAME_CAST(sipName_setDiscardCommand), meth_QSessionManager_setDiscardCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setDiscardCommand)},
    {SIP_MLNAME_CAST(sipName_setManagerProperty), meth_QSessionManager_setManagerProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setManagerProperty)},
    {SIP_MLNAME_CAST(sipName_setRestartCommand), meth_QSessionManager_setRestartCommand, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setRestartCommand)},
    {SIP_MLNAME_CAST(sipName_setRestartHint), meth_QSessionManager_setRestartHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QSessionManager_setRestartHint)}
};

static sipEnumMemberDef enummembers_QSessionManager[] = {
    {sipName_RestartAnyway, QSessionManager::RestartAnyway, 433},
    {sipName_RestartIfRunning, QSessionManager::RestartIfRunning, 433},
    {sipName_RestartImmediately, QSessionManager::RestartImmediately, 433},
    {sipName_RestartNever, QSessionManager::RestartNever, 433},
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QSessionManager = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSessionManager,
        {0}
    },
    {
        sipNameNr_QSessionManager,
        {0, 0, 1},
        15, methods_QSessionManager,
        4, enummembers_QSessionManager,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QSessionManager,
    0,
    0,
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
    0,
    0,
    0,
    0,
    release_QSessionManager,
    cast_QSessionManager,
    0,
    0,
    0
},
    &QSessionManager::staticMetaObject,
    0,
    0
};