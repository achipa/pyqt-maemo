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

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 39 "sipQtCoreQLibrary.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtCoreQLibrary.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtCoreQLibrary.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 49 "sipQtCoreQLibrary.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtCoreQLibrary.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtCoreQLibrary.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtCoreQLibrary.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 61 "sipQtCoreQLibrary.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 64 "sipQtCoreQLibrary.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 67 "sipQtCoreQLibrary.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "sipQtCoreQLibrary.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "sipQtCoreQLibrary.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 76 "sipQtCoreQLibrary.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 79 "sipQtCoreQLibrary.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 82 "sipQtCoreQLibrary.cpp"


class sipQLibrary : public QLibrary
{
public:
    sipQLibrary(QObject *);
    sipQLibrary(const QString&,QObject *);
    sipQLibrary(const QString&,int,QObject *);
    sipQLibrary(const QString&,const QString&,QObject *);
    virtual ~sipQLibrary();

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
    sipQLibrary(const sipQLibrary &);
    sipQLibrary &operator = (const sipQLibrary &);

    char sipPyMethods[7];
};

sipQLibrary::sipQLibrary(QObject *a0): QLibrary(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,QObject *a1): QLibrary(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,int a1,QObject *a2): QLibrary(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::sipQLibrary(const QString& a0,const QString& a1,QObject *a2): QLibrary(a0,a1,a2), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLibrary::~sipQLibrary()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQLibrary::metaObject() const
{
    return sip_QtCore_qt_metaobject(sipPySelf,sipType_QLibrary);
}

int sipQLibrary::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QLibrary::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QLibrary,_c,_id,_a);

    return _id;
}

void *sipQLibrary::qt_metacast(const char *_clname)
{
    return (sip_QtCore_qt_metacast && sip_QtCore_qt_metacast(sipPySelf,sipType_QLibrary,_clname)) ? this : QLibrary::qt_metacast(_clname);
}

bool sipQLibrary::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t,PyObject *,QEvent *);

    return sipVH_QtCore_5(sipGILState,meth,a0);
}

bool sipQLibrary::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    extern bool sipVH_QtCore_18(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return sipVH_QtCore_18(sipGILState,meth,a0,a1);
}

void sipQLibrary::timerEvent(QTimerEvent *a0)
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

void sipQLibrary::childEvent(QChildEvent *a0)
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

void sipQLibrary::customEvent(QEvent *a0)
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

void sipQLibrary::connectNotify(const char *a0)
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

void sipQLibrary::disconnectNotify(const char *a0)
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


PyDoc_STRVAR(doc_QLibrary_errorString, "QLibrary.errorString() -> QString");

extern "C" {static PyObject *meth_QLibrary_errorString(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->errorString());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_errorString, doc_QLibrary_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_fileName, "QLibrary.fileName() -> QString");

extern "C" {static PyObject *meth_QLibrary_fileName(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_fileName, doc_QLibrary_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_isLoaded, "QLibrary.isLoaded() -> bool");

extern "C" {static PyObject *meth_QLibrary_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isLoaded();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_isLoaded, doc_QLibrary_isLoaded);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_load, "QLibrary.load() -> bool");

extern "C" {static PyObject *meth_QLibrary_load(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->load();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_load, doc_QLibrary_load);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_loadHints, "QLibrary.loadHints() -> QLibrary.LoadHints");

extern "C" {static PyObject *meth_QLibrary_loadHints(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_loadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            QLibrary::LoadHints *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QLibrary::LoadHints(sipCpp->loadHints());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_loadHints, doc_QLibrary_loadHints);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_resolve, "QLibrary.resolve(str) -> sip.voidptr\n"
    "QLibrary.resolve(QString, str) -> sip.voidptr\n"
    "QLibrary.resolve(QString, int, str) -> sip.voidptr\n"
    "QLibrary.resolve(QString, QString, str) -> sip.voidptr");

extern "C" {static PyObject *meth_QLibrary_resolve(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_resolve(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char * a0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QLibrary, &sipCpp, &a0))
        {
            void *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->resolve(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const char * a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1s", sipType_QString,&a0, &a0State, &a1))
        {
            void *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        const char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1is", sipType_QString,&a0, &a0State, &a1, &a2))
        {
            void *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        const char * a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1J1s", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            void *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::resolve(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_resolve, doc_QLibrary_resolve);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_unload, "QLibrary.unload() -> bool");

extern "C" {static PyObject *meth_QLibrary_unload(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLibrary, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->unload();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_unload, doc_QLibrary_unload);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_isLibrary, "QLibrary.isLibrary(QString) -> bool");

extern "C" {static PyObject *meth_QLibrary_isLibrary(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_isLibrary(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QLibrary::isLibrary(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_isLibrary, doc_QLibrary_isLibrary);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setFileName, "QLibrary.setFileName(QString)");

extern "C" {static PyObject *meth_QLibrary_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileName(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setFileName, doc_QLibrary_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setFileNameAndVersion, "QLibrary.setFileNameAndVersion(QString, int)\n"
    "QLibrary.setFileNameAndVersion(QString, QString)");

extern "C" {static PyObject *meth_QLibrary_setFileNameAndVersion(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setFileNameAndVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileNameAndVersion(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFileNameAndVersion(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setFileNameAndVersion, doc_QLibrary_setFileNameAndVersion);

    return NULL;
}


PyDoc_STRVAR(doc_QLibrary_setLoadHints, "QLibrary.setLoadHints(QLibrary.LoadHints)");

extern "C" {static PyObject *meth_QLibrary_setLoadHints(PyObject *, PyObject *);}
static PyObject *meth_QLibrary_setLoadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints * a0;
        int a0State = 0;
        QLibrary *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLibrary, &sipCpp, sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLoadHints(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLibrary, sipName_setLoadHints, doc_QLibrary_setLoadHints);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLibrary(void *, const sipTypeDef *);}
static void *cast_QLibrary(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QLibrary)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QLibrary *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLibrary(void *, int);}
static void release_QLibrary(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLibrary *>(sipCppV);
    else
        delete reinterpret_cast<QLibrary *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLibrary(sipSimpleWrapper *);}
static void dealloc_QLibrary(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLibrary *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLibrary(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QLibrary(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLibrary(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQLibrary *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(a0);
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
            sipCpp = new sipQLibrary(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        int a1;
        QObject * a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1i|JH", sipType_QString,&a0, &a0State, &a1, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(*a0,a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString * a0;
        int a0State = 0;
        const QString * a1;
        int a1State = 0;
        QObject * a2 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1J1|JH", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QObject, &a2, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLibrary(*a0,*a1,a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QLibrary[] = {{129, 255, 1}};


static PyMethodDef methods_QLibrary[] = {
    {SIP_MLNAME_CAST(sipName_errorString), meth_QLibrary_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_errorString)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QLibrary_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_fileName)},
    {SIP_MLNAME_CAST(sipName_isLibrary), meth_QLibrary_isLibrary, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_isLibrary)},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QLibrary_isLoaded, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_isLoaded)},
    {SIP_MLNAME_CAST(sipName_load), meth_QLibrary_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_load)},
    {SIP_MLNAME_CAST(sipName_loadHints), meth_QLibrary_loadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_loadHints)},
    {SIP_MLNAME_CAST(sipName_resolve), meth_QLibrary_resolve, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_resolve)},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QLibrary_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setFileName)},
    {SIP_MLNAME_CAST(sipName_setFileNameAndVersion), meth_QLibrary_setFileNameAndVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setFileNameAndVersion)},
    {SIP_MLNAME_CAST(sipName_setLoadHints), meth_QLibrary_setLoadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_setLoadHints)},
    {SIP_MLNAME_CAST(sipName_unload), meth_QLibrary_unload, METH_VARARGS, SIP_MLDOC_CAST(doc_QLibrary_unload)}
};

static sipEnumMemberDef enummembers_QLibrary[] = {
    {sipName_ExportExternalSymbolsHint, QLibrary::ExportExternalSymbolsHint, 83},
    {sipName_LoadArchiveMemberHint, QLibrary::LoadArchiveMemberHint, 83},
    {sipName_ResolveAllSymbolsHint, QLibrary::ResolveAllSymbolsHint, 83},
};

PyDoc_STRVAR(doc_QLibrary, "\1QLibrary(QObject parent=None)\n"
    "QLibrary(QString, QObject parent=None)\n"
    "QLibrary(QString, int, QObject parent=None)\n"
    "QLibrary(QString, QString, QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QLibrary = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QLibrary,
        {0}
    },
    {
        sipNameNr_QLibrary,
        {0, 0, 1},
        11, methods_QLibrary,
        3, enummembers_QLibrary,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLibrary,
    -1,
    -1,
    supers_QLibrary,
    0,
    init_QLibrary,
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
    dealloc_QLibrary,
    0,
    0,
    0,
    release_QLibrary,
    cast_QLibrary,
    0,
    0,
    0
},
    &QLibrary::staticMetaObject,
    0,
    0
};
