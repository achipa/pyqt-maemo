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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qsound.sip"
#include <qsound.h>
#line 39 "sipQtGuiQSound.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 43 "sipQtGuiQSound.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 46 "sipQtGuiQSound.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtGuiQSound.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtGuiQSound.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQSound.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtGuiQSound.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 61 "sipQtGuiQSound.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 64 "sipQtGuiQSound.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtGuiQSound.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtGuiQSound.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 73 "sipQtGuiQSound.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtGuiQSound.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtGuiQSound.cpp"


class sipQSound : public QSound
{
public:
    sipQSound(const QString&,QObject *);
    virtual ~sipQSound();

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
    sipQSound(const sipQSound &);
    sipQSound &operator = (const sipQSound &);

    char sipPyMethods[7];
};

sipQSound::sipQSound(const QString& a0,QObject *a1): QSound(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSound::~sipQSound()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQSound::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QSound);
}

int sipQSound::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QSound::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QSound,_c,_id,_a);

    return _id;
}

void *sipQSound::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QSound,_clname)) ? this : QSound::qt_metacast(_clname);
}

bool sipQSound::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQSound::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQSound::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQSound::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQSound::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQSound::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQSound::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QSound_isAvailable, "QSound.isAvailable() -> bool");

extern "C" {static PyObject *meth_QSound_isAvailable(PyObject *, PyObject *);}
static PyObject *meth_QSound_isAvailable(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QSound::isAvailable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_isAvailable, doc_QSound_isAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_play, "QSound.play(QString)\n"
    "QSound.play()");

extern "C" {static PyObject *meth_QSound_play(PyObject *, PyObject *);}
static PyObject *meth_QSound_play(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            QSound::play(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->play();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_play, doc_QSound_play);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loops, "QSound.loops() -> int");

extern "C" {static PyObject *meth_QSound_loops(PyObject *, PyObject *);}
static PyObject *meth_QSound_loops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->loops();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loops, doc_QSound_loops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_loopsRemaining, "QSound.loopsRemaining() -> int");

extern "C" {static PyObject *meth_QSound_loopsRemaining(PyObject *, PyObject *);}
static PyObject *meth_QSound_loopsRemaining(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->loopsRemaining();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_loopsRemaining, doc_QSound_loopsRemaining);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_setLoops, "QSound.setLoops(int)");

extern "C" {static PyObject *meth_QSound_setLoops(PyObject *, PyObject *);}
static PyObject *meth_QSound_setLoops(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSound, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLoops(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_setLoops, doc_QSound_setLoops);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_fileName, "QSound.fileName() -> QString");

extern "C" {static PyObject *meth_QSound_fileName(PyObject *, PyObject *);}
static PyObject *meth_QSound_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->fileName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_fileName, doc_QSound_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_isFinished, "QSound.isFinished() -> bool");

extern "C" {static PyObject *meth_QSound_isFinished(PyObject *, PyObject *);}
static PyObject *meth_QSound_isFinished(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isFinished();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_isFinished, doc_QSound_isFinished);

    return NULL;
}


PyDoc_STRVAR(doc_QSound_stop, "QSound.stop()");

extern "C" {static PyObject *meth_QSound_stop(PyObject *, PyObject *);}
static PyObject *meth_QSound_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSound *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSound, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->stop();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSound, sipName_stop, doc_QSound_stop);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSound(void *, const sipTypeDef *);}
static void *cast_QSound(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSound)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QSound *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSound(void *, int);}
static void release_QSound(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSound *>(sipCppV);
    else
        delete reinterpret_cast<QSound *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QSound(sipSimpleWrapper *);}
static void dealloc_QSound(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSound *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSound(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QSound(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QSound(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQSound *sipCpp = 0;

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
            sipCpp = new sipQSound(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSound[] = {{129, 0, 1}};


static PyMethodDef methods_QSound[] = {
    {SIP_MLNAME_CAST(sipName_fileName), meth_QSound_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_fileName)},
    {SIP_MLNAME_CAST(sipName_isAvailable), meth_QSound_isAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_isAvailable)},
    {SIP_MLNAME_CAST(sipName_isFinished), meth_QSound_isFinished, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_isFinished)},
    {SIP_MLNAME_CAST(sipName_loops), meth_QSound_loops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loops)},
    {SIP_MLNAME_CAST(sipName_loopsRemaining), meth_QSound_loopsRemaining, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_loopsRemaining)},
    {SIP_MLNAME_CAST(sipName_play), meth_QSound_play, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_play)},
    {SIP_MLNAME_CAST(sipName_setLoops), meth_QSound_setLoops, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_setLoops)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QSound_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QSound_stop)}
};

PyDoc_STRVAR(doc_QSound, "\1QSound(QString, QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QSound = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QSound,
        {0}
    },
    {
        sipNameNr_QSound,
        {0, 0, 1},
        8, methods_QSound,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSound,
    -1,
    -1,
    supers_QSound,
    0,
    init_QSound,
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
    dealloc_QSound,
    0,
    0,
    0,
    release_QSound,
    cast_QSound,
    0,
    0,
    0
},
    &QSound::staticMetaObject,
    0,
    0
};