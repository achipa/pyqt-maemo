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

#line 39 "/home/maemo/python-qt4-4.7/sip/QtCore/qsharedmemory.sip"
#include <qsharedmemory.h>
#line 39 "sipQtCoreQSharedMemory.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQSharedMemory.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtCoreQSharedMemory.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtCoreQSharedMemory.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQSharedMemory.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtCoreQSharedMemory.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtCoreQSharedMemory.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtCoreQSharedMemory.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "sipQtCoreQSharedMemory.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtCoreQSharedMemory.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtCoreQSharedMemory.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "sipQtCoreQSharedMemory.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtCoreQSharedMemory.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtCoreQSharedMemory.cpp"


class sipQSharedMemory : public QSharedMemory
{
public:
    sipQSharedMemory(QObject *);
    sipQSharedMemory(const QString&,QObject *);
    virtual ~sipQSharedMemory();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
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
    sipQSharedMemory(const sipQSharedMemory &);
    sipQSharedMemory &operator = (const sipQSharedMemory &);

    char sipPyMethods[7];
};

sipQSharedMemory::sipQSharedMemory(QObject *a0): QSharedMemory(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::sipQSharedMemory(const QString& a0,QObject *a1): QSharedMemory(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSharedMemory::~sipQSharedMemory()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSharedMemory::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QSharedMemory);
}

int sipQSharedMemory::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSharedMemory::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QSharedMemory,_c,_id,_a);

    return _id;
}

void *sipQSharedMemory::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QSharedMemory,_clname)) ? this : QSharedMemory::qt_metacast(_clname);
}

bool sipQSharedMemory::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_QtCore_5(sipGILState,meth,a0);
}

bool sipQSharedMemory::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_QtCore_18(sipGILState,meth,a0,a1);
}

void sipQSharedMemory::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t,PyObject *,QTimerEvent *);

    sipVH_QtCore_9(sipGILState,meth,a0);
}

void sipQSharedMemory::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t,PyObject *,QChildEvent *);

    sipVH_QtCore_25(sipGILState,meth,a0);
}

void sipQSharedMemory::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_17(sip_gilstate_t,PyObject *,QEvent *);

    sipVH_QtCore_17(sipGILState,meth,a0);
}

void sipQSharedMemory::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}

void sipQSharedMemory::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_24(sip_gilstate_t,PyObject *,const char *);

    sipVH_QtCore_24(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QSharedMemory_setKey, "QSharedMemory.setKey(QString)");

extern "C" {static PyObject *meth_QSharedMemory_setKey(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_setKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSharedMemory, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setKey(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_setKey, doc_QSharedMemory_setKey);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_key, "QSharedMemory.key() -> QString");

extern "C" {static PyObject *meth_QSharedMemory_key(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->key());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_key, doc_QSharedMemory_key);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_create, "QSharedMemory.create(int, QSharedMemory.AccessMode mode=QSharedMemory.ReadWrite) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSharedMemory::AccessMode a1 = QSharedMemory::ReadWrite;
        QSharedMemory *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|E", &sipSelf, sipType_QSharedMemory, &sipCpp, &a0, sipType_QSharedMemory_AccessMode, &a1))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->create(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_create, doc_QSharedMemory_create);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_size, "QSharedMemory.size() -> int");

extern "C" {static PyObject *meth_QSharedMemory_size(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->size();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_size, doc_QSharedMemory_size);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_attach, "QSharedMemory.attach(QSharedMemory.AccessMode mode=QSharedMemory.ReadWrite) -> bool");

extern "C" {static PyObject *meth_QSharedMemory_attach(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_attach(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory::AccessMode a0 = QSharedMemory::ReadWrite;
        QSharedMemory *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|E", &sipSelf, sipType_QSharedMemory, &sipCpp, sipType_QSharedMemory_AccessMode, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->attach(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_attach, doc_QSharedMemory_attach);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_isAttached, "QSharedMemory.isAttached() -> bool");

extern "C" {static PyObject *meth_QSharedMemory_isAttached(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_isAttached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAttached();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_isAttached, doc_QSharedMemory_isAttached);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_detach, "QSharedMemory.detach() -> bool");

extern "C" {static PyObject *meth_QSharedMemory_detach(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_detach(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->detach();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_detach, doc_QSharedMemory_detach);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_data, "QSharedMemory.data() -> sip.voidptr");

extern "C" {static PyObject *meth_QSharedMemory_data(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_data(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 74 "/home/maemo/python-qt4-4.7/sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromVoidPtrAndSize(sipCpp->data(), sipCpp->size());
#line 513 "sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_data, doc_QSharedMemory_data);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_constData, "QSharedMemory.constData() -> sip.voidptr");

extern "C" {static PyObject *meth_QSharedMemory_constData(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_constData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 79 "/home/maemo/python-qt4-4.7/sip/QtCore/qsharedmemory.sip"
        sipRes = sipConvertFromConstVoidPtrAndSize(sipCpp->constData(), sipCpp->size());
#line 543 "sipQtCoreQSharedMemory.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_constData, doc_QSharedMemory_constData);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_lock, "QSharedMemory.lock() -> bool");

extern "C" {static PyObject *meth_QSharedMemory_lock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_lock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->lock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_lock, doc_QSharedMemory_lock);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_unlock, "QSharedMemory.unlock() -> bool");

extern "C" {static PyObject *meth_QSharedMemory_unlock(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_unlock(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unlock();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_unlock, doc_QSharedMemory_unlock);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_error, "QSharedMemory.error() -> QSharedMemory.SharedMemoryError");

extern "C" {static PyObject *meth_QSharedMemory_error(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            QSharedMemory::SharedMemoryError sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->error();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QSharedMemory_SharedMemoryError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_error, doc_QSharedMemory_error);

    return NULL;
}


PyDoc_STRVAR(doc_QSharedMemory_errorString, "QSharedMemory.errorString() -> QString");

extern "C" {static PyObject *meth_QSharedMemory_errorString(PyObject *, PyObject *);}
static PyObject *meth_QSharedMemory_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSharedMemory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSharedMemory, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSharedMemory, sipName_errorString, doc_QSharedMemory_errorString);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSharedMemory(void *, const sipTypeDef *);}
static void *cast_QSharedMemory(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSharedMemory)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSharedMemory *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSharedMemory(void *, int);}
static void release_QSharedMemory(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSharedMemory *>(sipCppV);
    else
        delete reinterpret_cast<QSharedMemory *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSharedMemory(sipSimpleWrapper *);}
static void dealloc_QSharedMemory(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSharedMemory *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSharedMemory(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QSharedMemory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSharedMemory(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSharedMemory *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        QObject * a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQSharedMemory(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSharedMemory[] = {{129, 255, 1}};


static PyMethodDef methods_QSharedMemory[] = {
    {SIP_MLNAME_CAST(sipName_attach), (PyCFunction)meth_QSharedMemory_attach, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSharedMemory_attach)},
    {SIP_MLNAME_CAST(sipName_constData), meth_QSharedMemory_constData, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_constData)},
    {SIP_MLNAME_CAST(sipName_create), (PyCFunction)meth_QSharedMemory_create, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSharedMemory_create)},
    {SIP_MLNAME_CAST(sipName_data), meth_QSharedMemory_data, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_data)},
    {SIP_MLNAME_CAST(sipName_detach), meth_QSharedMemory_detach, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_detach)},
    {SIP_MLNAME_CAST(sipName_error), meth_QSharedMemory_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_error)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QSharedMemory_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_errorString)},
    {SIP_MLNAME_CAST(sipName_isAttached), meth_QSharedMemory_isAttached, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_isAttached)},
    {SIP_MLNAME_CAST(sipName_key), meth_QSharedMemory_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_key)},
    {SIP_MLNAME_CAST(sipName_lock), meth_QSharedMemory_lock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_lock)},
    {SIP_MLNAME_CAST(sipName_setKey), meth_QSharedMemory_setKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_setKey)},
    {SIP_MLNAME_CAST(sipName_size), meth_QSharedMemory_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_size)},
    {SIP_MLNAME_CAST(sipName_unlock), meth_QSharedMemory_unlock, METH_VARARGS, SIP_MLDOC_CAST(doc_QSharedMemory_unlock)}
};

static sipEnumMemberDef enummembers_QSharedMemory[] = {
    {sipName_AlreadyExists, QSharedMemory::AlreadyExists, 165},
    {sipName_InvalidSize, QSharedMemory::InvalidSize, 165},
    {sipName_KeyError, QSharedMemory::KeyError, 165},
    {sipName_LockError, QSharedMemory::LockError, 165},
    {sipName_NoError, QSharedMemory::NoError, 165},
    {sipName_NotFound, QSharedMemory::NotFound, 165},
    {sipName_OutOfResources, QSharedMemory::OutOfResources, 165},
    {sipName_PermissionDenied, QSharedMemory::PermissionDenied, 165},
    {sipName_ReadOnly, QSharedMemory::ReadOnly, 164},
    {sipName_ReadWrite, QSharedMemory::ReadWrite, 164},
    {sipName_UnknownError, QSharedMemory::UnknownError, 165},
};

PyDoc_STRVAR(doc_QSharedMemory, "\1QSharedMemory(QObject parent=None)\n"
    "QSharedMemory(QString, QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QSharedMemory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSharedMemory,
        {0}
    },
    {
        sipNameNr_QSharedMemory,
        {0, 0, 1},
        13, methods_QSharedMemory,
        11, enummembers_QSharedMemory,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSharedMemory,
    -1,
    -1,
    supers_QSharedMemory,
    0,
    init_QSharedMemory,
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
    dealloc_QSharedMemory,
    0,
    0,
    0,
    release_QSharedMemory,
    cast_QSharedMemory,
    0,
    0,
    0
},
    &QSharedMemory::staticMetaObject,
    0,
    0
};
