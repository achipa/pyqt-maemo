/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:31 2010
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

#include "sipAPIQtXmlPatterns.h"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qabstractmessagehandler.sip"
#include <qabstractmessagehandler.h>
#line 39 "sipQtXmlPatternsQAbstractMessageHandler.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qurl.sip"
#include <qurl.h>
#line 49 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 39 "/home/maemo/python-qt4-4.7/sip/QtXmlPatterns/qsourcelocation.sip"
#include <qsourcelocation.h>
#line 52 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 64 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 70 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 73 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 76 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 79 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtXmlPatternsQAbstractMessageHandler.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtXmlPatternsQAbstractMessageHandler.cpp"


class sipQAbstractMessageHandler : public QAbstractMessageHandler
{
public:
    sipQAbstractMessageHandler(QObject *);
    virtual ~sipQAbstractMessageHandler();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void handleMessage(QtMsgType,const QString&,const QUrl&,const QSourceLocation&);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractMessageHandler(const sipQAbstractMessageHandler &);
    sipQAbstractMessageHandler &operator = (const sipQAbstractMessageHandler &);

    char sipPyMethods[8];
};

sipQAbstractMessageHandler::sipQAbstractMessageHandler(QObject *a0): QAbstractMessageHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractMessageHandler::~sipQAbstractMessageHandler()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAbstractMessageHandler::metaObject() const
{
    return sip_QtXmlPatterns_qt_metaobject(sipPySelf,sipType_QAbstractMessageHandler);
}

int sipQAbstractMessageHandler::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAbstractMessageHandler::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtXmlPatterns_qt_metacall(sipPySelf,sipType_QAbstractMessageHandler,_c,_id,_a);

    return _id;
}

void *sipQAbstractMessageHandler::qt_metacast(const char *_clname)
{
    return (sip_QtXmlPatterns_qt_metacast && sip_QtXmlPatterns_qt_metacast(sipPySelf,sipType_QAbstractMessageHandler,_clname)) ? this : QAbstractMessageHandler::qt_metacast(_clname);
}

void sipQAbstractMessageHandler::handleMessage(QtMsgType a0,const QString& a1,const QUrl& a2,const QSourceLocation& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractMessageHandler,sipName_handleMessage);

    if (!meth)
        return;

    extern void sipVH_QtXmlPatterns_17(sip_gilstate_t,PyObject *,QtMsgType,const QString&,const QUrl&,const QSourceLocation&);

    sipVH_QtXmlPatterns_17(sipGILState,meth,a0,a1,a2,a3);
}

bool sipQAbstractMessageHandler::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQAbstractMessageHandler::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQAbstractMessageHandler::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQAbstractMessageHandler::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQAbstractMessageHandler::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQAbstractMessageHandler::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQAbstractMessageHandler::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QAbstractMessageHandler_message, "QAbstractMessageHandler.message(QtMsgType, QString, QUrl identifier=QUrl(), QSourceLocation sourceLocation=QSourceLocation())");

extern "C" {static PyObject *meth_QAbstractMessageHandler_message(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_message(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QtMsgType a0;
        const QString * a1;
        int a1State = 0;
        const QUrl& a2def = QUrl();
        const QUrl * a2 = &a2def;
        const QSourceLocation& a3def = QSourceLocation();
        const QSourceLocation * a3 = &a3def;
        QAbstractMessageHandler *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_identifier,
            sipName_sourceLocation,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BEJ1|J9J9", &sipSelf, sipType_QAbstractMessageHandler, &sipCpp, sipType_QtMsgType, &a0, sipType_QString,&a1, &a1State, sipType_QUrl, &a2, sipType_QSourceLocation, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->message(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractMessageHandler, sipName_message, doc_QAbstractMessageHandler_message);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractMessageHandler_handleMessage, "QAbstractMessageHandler.handleMessage(QtMsgType, QString, QUrl, QSourceLocation)");

extern "C" {static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *, PyObject *);}
static PyObject *meth_QAbstractMessageHandler_handleMessage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QtMsgType a0;
        const QString * a1;
        int a1State = 0;
        const QUrl * a2;
        const QSourceLocation * a3;
        QAbstractMessageHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "pEJ1J9J9", &sipSelf, sipType_QAbstractMessageHandler, &sipCpp, sipType_QtMsgType, &a0, sipType_QString,&a1, &a1State, sipType_QUrl, &a2, sipType_QSourceLocation, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractMessageHandler, sipName_handleMessage);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->handleMessage(a0,*a1,*a2,*a3);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractMessageHandler, sipName_handleMessage, doc_QAbstractMessageHandler_handleMessage);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractMessageHandler(void *, const sipTypeDef *);}
static void *cast_QAbstractMessageHandler(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAbstractMessageHandler)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAbstractMessageHandler *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractMessageHandler(void *, int);}
static void release_QAbstractMessageHandler(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractMessageHandler *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractMessageHandler *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *);}
static void dealloc_QAbstractMessageHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractMessageHandler *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractMessageHandler(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAbstractMessageHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QAbstractMessageHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAbstractMessageHandler *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractMessageHandler(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAbstractMessageHandler[] = {{129, 0, 1}};


static PyMethodDef methods_QAbstractMessageHandler[] = {
    {SIP_MLNAME_CAST(sipName_handleMessage), meth_QAbstractMessageHandler_handleMessage, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractMessageHandler_handleMessage)},
    {SIP_MLNAME_CAST(sipName_message), (PyCFunction)meth_QAbstractMessageHandler_message, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAbstractMessageHandler_message)}
};

PyDoc_STRVAR(doc_QAbstractMessageHandler, "\1QAbstractMessageHandler(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractMessageHandler = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QAbstractMessageHandler,
        {0}
    },
    {
        sipNameNr_QAbstractMessageHandler,
        {0, 0, 1},
        2, methods_QAbstractMessageHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractMessageHandler,
    -1,
    -1,
    supers_QAbstractMessageHandler,
    0,
    init_QAbstractMessageHandler,
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
    dealloc_QAbstractMessageHandler,
    0,
    0,
    0,
    release_QAbstractMessageHandler,
    cast_QAbstractMessageHandler,
    0,
    0,
    0
},
    &QAbstractMessageHandler::staticMetaObject,
    0,
    0
};
