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

#line 58 "/home/maemo/python-qt4-4.7/sip/QtGui/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 39 "sipQtGuiQGraphicsScale.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtGuiQGraphicsScale.cpp"
#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 46 "sipQtGuiQGraphicsScale.cpp"
#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 49 "sipQtGuiQGraphicsScale.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtGuiQGraphicsScale.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQGraphicsScale.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtGuiQGraphicsScale.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 61 "sipQtGuiQGraphicsScale.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 64 "sipQtGuiQGraphicsScale.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 67 "sipQtGuiQGraphicsScale.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 70 "sipQtGuiQGraphicsScale.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "sipQtGuiQGraphicsScale.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 76 "sipQtGuiQGraphicsScale.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 79 "sipQtGuiQGraphicsScale.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtGuiQGraphicsScale.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtGuiQGraphicsScale.cpp"


class sipQGraphicsScale : public QGraphicsScale
{
public:
    sipQGraphicsScale(QObject *);
    virtual ~sipQGraphicsScale();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void applyTo(QMatrix4x4 *) const;
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
    sipQGraphicsScale(const sipQGraphicsScale &);
    sipQGraphicsScale &operator = (const sipQGraphicsScale &);

    char sipPyMethods[8];
};

sipQGraphicsScale::sipQGraphicsScale(QObject *a0): QGraphicsScale(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsScale::~sipQGraphicsScale()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGraphicsScale::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QGraphicsScale);
}

int sipQGraphicsScale::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGraphicsScale::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QGraphicsScale,_c,_id,_a);

    return _id;
}

void *sipQGraphicsScale::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QGraphicsScale,_clname)) ? this : QGraphicsScale::qt_metacast(_clname);
}

void sipQGraphicsScale::applyTo(QMatrix4x4 *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_applyTo);

    if (!meth)
    {
        QGraphicsScale::applyTo(a0);
        return;
    }

    extern void sipVH_QtGui_186(sip_gilstate_t,PyObject *,QMatrix4x4 *);

    sipVH_QtGui_186(sipGILState,meth,a0);
}

bool sipQGraphicsScale::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQGraphicsScale::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQGraphicsScale::timerEvent(QTimerEvent *a0)
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

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQGraphicsScale::childEvent(QChildEvent *a0)
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

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQGraphicsScale::customEvent(QEvent *a0)
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

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQGraphicsScale::connectNotify(const char *a0)
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

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQGraphicsScale::disconnectNotify(const char *a0)
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

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QGraphicsScale_origin, "QGraphicsScale.origin() -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsScale_origin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            QVector3D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->origin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_origin, doc_QGraphicsScale_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setOrigin, "QGraphicsScale.setOrigin(QVector3D)");

extern "C" {static PyObject *meth_QGraphicsScale_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D * a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsScale, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOrigin(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setOrigin, doc_QGraphicsScale_setOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_xScale, "QGraphicsScale.xScale() -> float");

extern "C" {static PyObject *meth_QGraphicsScale_xScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_xScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->xScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_xScale, doc_QGraphicsScale_xScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setXScale, "QGraphicsScale.setXScale(float)");

extern "C" {static PyObject *meth_QGraphicsScale_setXScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setXScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setXScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setXScale, doc_QGraphicsScale_setXScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_yScale, "QGraphicsScale.yScale() -> float");

extern "C" {static PyObject *meth_QGraphicsScale_yScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_yScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->yScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_yScale, doc_QGraphicsScale_yScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setYScale, "QGraphicsScale.setYScale(float)");

extern "C" {static PyObject *meth_QGraphicsScale_setYScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setYScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setYScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setYScale, doc_QGraphicsScale_setYScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_zScale, "QGraphicsScale.zScale() -> float");

extern "C" {static PyObject *meth_QGraphicsScale_zScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_zScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsScale, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->zScale();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_zScale, doc_QGraphicsScale_zScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_setZScale, "QGraphicsScale.setZScale(float)");

extern "C" {static PyObject *meth_QGraphicsScale_setZScale(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_setZScale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsScale, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setZScale(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_setZScale, doc_QGraphicsScale_setZScale);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsScale_applyTo, "QGraphicsScale.applyTo(QMatrix4x4)");

extern "C" {static PyObject *meth_QGraphicsScale_applyTo(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsScale_applyTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QMatrix4x4 * a0;
        QGraphicsScale *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsScale, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsScale::applyTo(a0) : sipCpp->applyTo(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsScale, sipName_applyTo, doc_QGraphicsScale_applyTo);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsScale(void *, const sipTypeDef *);}
static void *cast_QGraphicsScale(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsScale)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsTransform)->ctd_cast((QGraphicsTransform *)(QGraphicsScale *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsScale(void *, int);}
static void release_QGraphicsScale(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsScale *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsScale *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsScale(sipSimpleWrapper *);}
static void dealloc_QGraphicsScale(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsScale *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsScale(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsScale(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGraphicsScale(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsScale *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsScale(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsScale[] = {{206, 255, 1}};


static PyMethodDef methods_QGraphicsScale[] = {
    {SIP_MLNAME_CAST(sipName_applyTo), meth_QGraphicsScale_applyTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_applyTo)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QGraphicsScale_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_origin)},
    {SIP_MLNAME_CAST(sipName_setOrigin), meth_QGraphicsScale_setOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setOrigin)},
    {SIP_MLNAME_CAST(sipName_setXScale), meth_QGraphicsScale_setXScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setXScale)},
    {SIP_MLNAME_CAST(sipName_setYScale), meth_QGraphicsScale_setYScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setYScale)},
    {SIP_MLNAME_CAST(sipName_setZScale), meth_QGraphicsScale_setZScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_setZScale)},
    {SIP_MLNAME_CAST(sipName_xScale), meth_QGraphicsScale_xScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_xScale)},
    {SIP_MLNAME_CAST(sipName_yScale), meth_QGraphicsScale_yScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_yScale)},
    {SIP_MLNAME_CAST(sipName_zScale), meth_QGraphicsScale_zScale, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsScale_zScale)}
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QGraphicsScale[] = {
    {"scaleChanged()", "\1QGraphicsScale.scaleChanged()", 0},
    {"originChanged()", "\1QGraphicsScale.originChanged()", 0},
    {0, 0, 0}
};

PyDoc_STRVAR(doc_QGraphicsScale, "\1QGraphicsScale(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsScale = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsScale,
        {0}
    },
    {
        sipNameNr_QGraphicsScale,
        {0, 0, 1},
        9, methods_QGraphicsScale,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsScale,
    -1,
    -1,
    supers_QGraphicsScale,
    0,
    init_QGraphicsScale,
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
    dealloc_QGraphicsScale,
    0,
    0,
    0,
    release_QGraphicsScale,
    cast_QGraphicsScale,
    0,
    0,
    0
},
    &QGraphicsScale::staticMetaObject,
    0,
    pyqt4_signals_QGraphicsScale
};
