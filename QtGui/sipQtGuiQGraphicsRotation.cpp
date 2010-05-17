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

#line 86 "/home/maemo/python-qt4-4.7/sip/QtGui/qgraphicstransform.sip"
#include <qgraphicstransform.h>
#line 39 "sipQtGuiQGraphicsRotation.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtGuiQGraphicsRotation.cpp"
#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qmatrix4x4.sip"
#include <qmatrix4x4.h>
#line 46 "sipQtGuiQGraphicsRotation.cpp"
#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qvector3d.sip"
#include <qvector3d.h>
#line 49 "sipQtGuiQGraphicsRotation.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQGraphicsRotation.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQGraphicsRotation.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtGuiQGraphicsRotation.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtGuiQGraphicsRotation.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 64 "sipQtGuiQGraphicsRotation.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtGuiQGraphicsRotation.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 70 "sipQtGuiQGraphicsRotation.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 73 "sipQtGuiQGraphicsRotation.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 76 "sipQtGuiQGraphicsRotation.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 79 "sipQtGuiQGraphicsRotation.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 82 "sipQtGuiQGraphicsRotation.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 85 "sipQtGuiQGraphicsRotation.cpp"


class sipQGraphicsRotation : public QGraphicsRotation
{
public:
    sipQGraphicsRotation(QObject *);
    virtual ~sipQGraphicsRotation();

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
    sipQGraphicsRotation(const sipQGraphicsRotation &);
    sipQGraphicsRotation &operator = (const sipQGraphicsRotation &);

    char sipPyMethods[8];
};

sipQGraphicsRotation::sipQGraphicsRotation(QObject *a0): QGraphicsRotation(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsRotation::~sipQGraphicsRotation()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQGraphicsRotation::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QGraphicsRotation);
}

int sipQGraphicsRotation::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QGraphicsRotation::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QGraphicsRotation,_c,_id,_a);

    return _id;
}

void *sipQGraphicsRotation::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QGraphicsRotation,_clname)) ? this : QGraphicsRotation::qt_metacast(_clname);
}

void sipQGraphicsRotation::applyTo(QMatrix4x4 *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_applyTo);

    if (!meth)
    {
        QGraphicsRotation::applyTo(a0);
        return;
    }

    extern void sipVH_QtGui_186(sip_gilstate_t,PyObject *,QMatrix4x4 *);

    sipVH_QtGui_186(sipGILState,meth,a0);
}

bool sipQGraphicsRotation::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQGraphicsRotation::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQGraphicsRotation::timerEvent(QTimerEvent *a0)
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

void sipQGraphicsRotation::childEvent(QChildEvent *a0)
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

void sipQGraphicsRotation::customEvent(QEvent *a0)
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

void sipQGraphicsRotation::connectNotify(const char *a0)
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

void sipQGraphicsRotation::disconnectNotify(const char *a0)
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


PyDoc_STRVAR(doc_QGraphicsRotation_origin, "QGraphicsRotation.origin() -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsRotation_origin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_origin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            QVector3D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->origin());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_origin, doc_QGraphicsRotation_origin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setOrigin, "QGraphicsRotation.setOrigin(QVector3D)");

extern "C" {static PyObject *meth_QGraphicsRotation_setOrigin(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D * a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setOrigin(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setOrigin, doc_QGraphicsRotation_setOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_angle, "QGraphicsRotation.angle() -> float");

extern "C" {static PyObject *meth_QGraphicsRotation_angle(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_angle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->angle();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_angle, doc_QGraphicsRotation_angle);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setAngle, "QGraphicsRotation.setAngle(float)");

extern "C" {static PyObject *meth_QGraphicsRotation_setAngle(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setAngle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QGraphicsRotation, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAngle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setAngle, doc_QGraphicsRotation_setAngle);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_axis, "QGraphicsRotation.axis() -> QVector3D");

extern "C" {static PyObject *meth_QGraphicsRotation_axis(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_axis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsRotation, &sipCpp))
        {
            QVector3D *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVector3D(sipCpp->axis());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector3D,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_axis, doc_QGraphicsRotation_axis);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_setAxis, "QGraphicsRotation.setAxis(QVector3D)\n"
    "QGraphicsRotation.setAxis(Qt.Axis)");

extern "C" {static PyObject *meth_QGraphicsRotation_setAxis(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_setAxis(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector3D * a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QVector3D, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAxis(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::Axis a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_Qt_Axis, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAxis(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_setAxis, doc_QGraphicsRotation_setAxis);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsRotation_applyTo, "QGraphicsRotation.applyTo(QMatrix4x4)");

extern "C" {static PyObject *meth_QGraphicsRotation_applyTo(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsRotation_applyTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QMatrix4x4 * a0;
        QGraphicsRotation *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsRotation, &sipCpp, sipType_QMatrix4x4, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGraphicsRotation::applyTo(a0) : sipCpp->applyTo(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsRotation, sipName_applyTo, doc_QGraphicsRotation_applyTo);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsRotation(void *, const sipTypeDef *);}
static void *cast_QGraphicsRotation(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsRotation)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsTransform)->ctd_cast((QGraphicsTransform *)(QGraphicsRotation *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsRotation(void *, int);}
static void release_QGraphicsRotation(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsRotation *>(sipCppV);
    else
        delete reinterpret_cast<QGraphicsRotation *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGraphicsRotation(sipSimpleWrapper *);}
static void dealloc_QGraphicsRotation(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGraphicsRotation *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsRotation(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QGraphicsRotation(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGraphicsRotation(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsRotation *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGraphicsRotation(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsRotation[] = {{206, 255, 1}};


static PyMethodDef methods_QGraphicsRotation[] = {
    {SIP_MLNAME_CAST(sipName_angle), meth_QGraphicsRotation_angle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_angle)},
    {SIP_MLNAME_CAST(sipName_applyTo), meth_QGraphicsRotation_applyTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_applyTo)},
    {SIP_MLNAME_CAST(sipName_axis), meth_QGraphicsRotation_axis, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_axis)},
    {SIP_MLNAME_CAST(sipName_origin), meth_QGraphicsRotation_origin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_origin)},
    {SIP_MLNAME_CAST(sipName_setAngle), meth_QGraphicsRotation_setAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setAngle)},
    {SIP_MLNAME_CAST(sipName_setAxis), meth_QGraphicsRotation_setAxis, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setAxis)},
    {SIP_MLNAME_CAST(sipName_setOrigin), meth_QGraphicsRotation_setOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsRotation_setOrigin)}
};


/* Define this type's PyQt4 signals. */
static const pyqt4QtSignal pyqt4_signals_QGraphicsRotation[] = {
    {"axisChanged()", "\1QGraphicsRotation.axisChanged()", 0},
    {"angleChanged()", "\1QGraphicsRotation.angleChanged()", 0},
    {"originChanged()", "\1QGraphicsRotation.originChanged()", 0},
    {0, 0, 0}
};

PyDoc_STRVAR(doc_QGraphicsRotation, "\1QGraphicsRotation(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGraphicsRotation = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsRotation,
        {0}
    },
    {
        sipNameNr_QGraphicsRotation,
        {0, 0, 1},
        7, methods_QGraphicsRotation,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsRotation,
    -1,
    -1,
    supers_QGraphicsRotation,
    0,
    init_QGraphicsRotation,
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
    dealloc_QGraphicsRotation,
    0,
    0,
    0,
    release_QGraphicsRotation,
    cast_QGraphicsRotation,
    0,
    0,
    0
},
    &QGraphicsRotation::staticMetaObject,
    0,
    pyqt4_signals_QGraphicsRotation
};
