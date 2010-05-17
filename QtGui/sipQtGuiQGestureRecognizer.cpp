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

#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qgesturerecognizer.sip"
#include <qgesturerecognizer.h>
#line 39 "sipQtGuiQGestureRecognizer.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQGestureRecognizer.cpp"
#line 39 "/home/maemo/python-qt4-4.7/sip/QtGui/qgesture.sip"
#include <qgesture.h>
#line 46 "sipQtGuiQGestureRecognizer.cpp"
#line 45 "/home/maemo/python-qt4-4.7/sip/QtGui/qgesturerecognizer.sip"
#include <qgesturerecognizer.h>
#line 49 "sipQtGuiQGestureRecognizer.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 52 "sipQtGuiQGestureRecognizer.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 55 "sipQtGuiQGestureRecognizer.cpp"


class sipQGestureRecognizer : public QGestureRecognizer
{
public:
    sipQGestureRecognizer();
    sipQGestureRecognizer(const QGestureRecognizer&);
    virtual ~sipQGestureRecognizer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QGesture * create(QObject *);
    QGestureRecognizer::Result recognize(QGesture *,QObject *,QEvent *);
    void reset(QGesture *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGestureRecognizer(const sipQGestureRecognizer &);
    sipQGestureRecognizer &operator = (const sipQGestureRecognizer &);

    char sipPyMethods[3];
};

sipQGestureRecognizer::sipQGestureRecognizer(): QGestureRecognizer(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGestureRecognizer::sipQGestureRecognizer(const QGestureRecognizer& a0): QGestureRecognizer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGestureRecognizer::~sipQGestureRecognizer()
{
    sipCommonDtor(sipPySelf);
}

QGesture * sipQGestureRecognizer::create(QObject *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_create);

    if (!meth)
        return QGestureRecognizer::create(a0);

    extern QGesture * sipVH_QtGui_215(sip_gilstate_t,PyObject *,QObject *);

    return sipVH_QtGui_215(sipGILState,meth,a0);
}

QGestureRecognizer::Result sipQGestureRecognizer::recognize(QGesture *a0,QObject *a1,QEvent *a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QGestureRecognizer,sipName_recognize);

    if (!meth)
        return QGestureRecognizer::Result();

    extern QGestureRecognizer::Result sipVH_QtGui_214(sip_gilstate_t,PyObject *,QGesture *,QObject *,QEvent *);

    return sipVH_QtGui_214(sipGILState,meth,a0,a1,a2);
}

void sipQGestureRecognizer::reset(QGesture *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_reset);

    if (!meth)
    {
        QGestureRecognizer::reset(a0);
        return;
    }

    extern void sipVH_QtGui_213(sip_gilstate_t,PyObject *,QGesture *);

    sipVH_QtGui_213(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QGestureRecognizer_create, "QGestureRecognizer.create(QObject) -> QGesture");

extern "C" {static PyObject *meth_QGestureRecognizer_create(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QObject * a0;
        QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QObject, &a0))
        {
            QGesture *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QGestureRecognizer::create(a0) : sipCpp->create(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QGesture,sipSelf);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_create, doc_QGestureRecognizer_create);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_recognize, "QGestureRecognizer.recognize(QGesture, QObject, QEvent) -> QGestureRecognizer.Result");

extern "C" {static PyObject *meth_QGestureRecognizer_recognize(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_recognize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QGesture * a0;
        QObject * a1;
        QEvent * a2;
        QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8J8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QGesture, &a0, sipType_QObject, &a1, sipType_QEvent, &a2))
        {
            QGestureRecognizer::Result *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGestureRecognizer, sipName_recognize);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QGestureRecognizer::Result(sipCpp->recognize(a0,a1,a2));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_recognize, doc_QGestureRecognizer_recognize);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_reset, "QGestureRecognizer.reset(QGesture)");

extern "C" {static PyObject *meth_QGestureRecognizer_reset(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGesture * a0;
        QGestureRecognizer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGestureRecognizer, &sipCpp, sipType_QGesture, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QGestureRecognizer::reset(a0) : sipCpp->reset(a0));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_reset, doc_QGestureRecognizer_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_registerRecognizer, "QGestureRecognizer.registerRecognizer(QGestureRecognizer) -> Qt.GestureType");

extern "C" {static PyObject *meth_QGestureRecognizer_registerRecognizer(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_registerRecognizer(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGestureRecognizer * a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J:", sipType_QGestureRecognizer, &a0))
        {
            Qt::GestureType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QGestureRecognizer::registerRecognizer(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_GestureType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_registerRecognizer, doc_QGestureRecognizer_registerRecognizer);

    return NULL;
}


PyDoc_STRVAR(doc_QGestureRecognizer_unregisterRecognizer, "QGestureRecognizer.unregisterRecognizer(Qt.GestureType)");

extern "C" {static PyObject *meth_QGestureRecognizer_unregisterRecognizer(PyObject *, PyObject *);}
static PyObject *meth_QGestureRecognizer_unregisterRecognizer(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::GestureType a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_Qt_GestureType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            QGestureRecognizer::unregisterRecognizer(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGestureRecognizer, sipName_unregisterRecognizer, doc_QGestureRecognizer_unregisterRecognizer);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGestureRecognizer(void *, const sipTypeDef *);}
static void *cast_QGestureRecognizer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGestureRecognizer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGestureRecognizer(void *, int);}
static void release_QGestureRecognizer(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGestureRecognizer *>(sipCppV);
    else
        delete reinterpret_cast<QGestureRecognizer *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QGestureRecognizer(sipSimpleWrapper *);}
static void dealloc_QGestureRecognizer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGestureRecognizer *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGestureRecognizer(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QGestureRecognizer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QGestureRecognizer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGestureRecognizer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGestureRecognizer();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QGestureRecognizer * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGestureRecognizer, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQGestureRecognizer(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QGestureRecognizer[] = {
    {SIP_MLNAME_CAST(sipName_create), meth_QGestureRecognizer_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_create)},
    {SIP_MLNAME_CAST(sipName_recognize), meth_QGestureRecognizer_recognize, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_recognize)},
    {SIP_MLNAME_CAST(sipName_registerRecognizer), meth_QGestureRecognizer_registerRecognizer, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_registerRecognizer)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QGestureRecognizer_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_reset)},
    {SIP_MLNAME_CAST(sipName_unregisterRecognizer), meth_QGestureRecognizer_unregisterRecognizer, METH_VARARGS, SIP_MLDOC_CAST(doc_QGestureRecognizer_unregisterRecognizer)}
};

static sipEnumMemberDef enummembers_QGestureRecognizer[] = {
    {sipName_CancelGesture, QGestureRecognizer::CancelGesture, 150},
    {sipName_ConsumeEventHint, QGestureRecognizer::ConsumeEventHint, 150},
    {sipName_FinishGesture, QGestureRecognizer::FinishGesture, 150},
    {sipName_Ignore, QGestureRecognizer::Ignore, 150},
    {sipName_MayBeGesture, QGestureRecognizer::MayBeGesture, 150},
    {sipName_TriggerGesture, QGestureRecognizer::TriggerGesture, 150},
};

PyDoc_STRVAR(doc_QGestureRecognizer, "\1QGestureRecognizer()\n"
    "QGestureRecognizer(QGestureRecognizer)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QGestureRecognizer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QGestureRecognizer,
        {0}
    },
    {
        sipNameNr_QGestureRecognizer,
        {0, 0, 1},
        5, methods_QGestureRecognizer,
        6, enummembers_QGestureRecognizer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGestureRecognizer,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QGestureRecognizer,
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
    dealloc_QGestureRecognizer,
    0,
    0,
    0,
    release_QGestureRecognizer,
    cast_QGestureRecognizer,
    0,
    0,
    0
},
    0,
    0,
    0
};