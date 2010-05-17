/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:07 2010
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

#include "sipAPIQtMaemo5.h"

#line 46 "/home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5listpickselector.sip"
#include <qmaemo5listpickselector.h>
#line 39 "sipQtMaemo5QMaemo5ListPickSelector.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qabstractitemview.sip"
#include <qabstractitemview.h>
#line 49 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 128 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 52 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 58 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 61 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 64 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 67 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 70 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 73 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 76 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 79 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 82 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 85 "sipQtMaemo5QMaemo5ListPickSelector.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 88 "sipQtMaemo5QMaemo5ListPickSelector.cpp"


class sipQMaemo5ListPickSelector : public QMaemo5ListPickSelector
{
public:
    sipQMaemo5ListPickSelector(QObject *);
    virtual ~sipQMaemo5ListPickSelector();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QWidget * widget(QWidget *);
    QString currentValueText() const;
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
    sipQMaemo5ListPickSelector(const sipQMaemo5ListPickSelector &);
    sipQMaemo5ListPickSelector &operator = (const sipQMaemo5ListPickSelector &);

    char sipPyMethods[9];
};

sipQMaemo5ListPickSelector::sipQMaemo5ListPickSelector(QObject *a0): QMaemo5ListPickSelector(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMaemo5ListPickSelector::~sipQMaemo5ListPickSelector()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQMaemo5ListPickSelector::metaObject() const
{
    return sip_QtMaemo5_qt_metaobject(sipPySelf,sipType_QMaemo5ListPickSelector);
}

int sipQMaemo5ListPickSelector::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QMaemo5ListPickSelector::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMaemo5_qt_metacall(sipPySelf,sipType_QMaemo5ListPickSelector,_c,_id,_a);

    return _id;
}

void *sipQMaemo5ListPickSelector::qt_metacast(const char *_clname)
{
    return (sip_QtMaemo5_qt_metacast && sip_QtMaemo5_qt_metacast(sipPySelf,sipType_QMaemo5ListPickSelector,_clname)) ? this : QMaemo5ListPickSelector::qt_metacast(_clname);
}

QWidget * sipQMaemo5ListPickSelector::widget(QWidget *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_widget);

    if (!meth)
        return QMaemo5ListPickSelector::widget(a0);

    extern QWidget * sipVH_QtMaemo5_0(sip_gilstate_t,PyObject *,QWidget *);

    return sipVH_QtMaemo5_0(sipGILState,meth,a0);
}

QString sipQMaemo5ListPickSelector::currentValueText() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_currentValueText);

    if (!meth)
        return QMaemo5ListPickSelector::currentValueText();

    typedef QString (*sipVH_QtCore_62)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_62)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[62]))(sipGILState,meth);
}

bool sipQMaemo5ListPickSelector::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQMaemo5ListPickSelector::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQMaemo5ListPickSelector::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQMaemo5ListPickSelector::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQMaemo5ListPickSelector::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQMaemo5ListPickSelector::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQMaemo5ListPickSelector::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtMaemo5_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_widget, "QMaemo5ListPickSelector.widget(QWidget) -> QWidget");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_widget(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_widget(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QWidget * a0;
        QMaemo5ListPickSelector *sipCpp;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp, sipType_QWidget, &a0))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QMaemo5ListPickSelector::widget(a0) : sipCpp->widget(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_widget, doc_QMaemo5ListPickSelector_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_model, "QMaemo5ListPickSelector.model() -> QAbstractItemModel");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_model(PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMaemo5ListPickSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp))
        {
            QAbstractItemModel *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->model();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractItemModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_model, doc_QMaemo5ListPickSelector_model);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_setModel, "QMaemo5ListPickSelector.setModel(QAbstractItemModel)");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_setModel(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_setModel(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractItemModel * a0;
        QMaemo5ListPickSelector *sipCpp;

        static const char *sipKwdList[] = {
            sipName_model,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp, sipType_QAbstractItemModel, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setModel(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_setModel, doc_QMaemo5ListPickSelector_setModel);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_view, "QMaemo5ListPickSelector.view() -> QAbstractItemView");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_view(PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_view(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMaemo5ListPickSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp))
        {
            QAbstractItemView *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->view();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAbstractItemView,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_view, doc_QMaemo5ListPickSelector_view);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_setView, "QMaemo5ListPickSelector.setView(QAbstractItemView)");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_setView(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_setView(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractItemView * a0;
        QMaemo5ListPickSelector *sipCpp;

        static const char *sipKwdList[] = {
            sipName_itemView,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp, sipType_QAbstractItemView, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setView(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_setView, doc_QMaemo5ListPickSelector_setView);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_modelColumn, "QMaemo5ListPickSelector.modelColumn() -> int");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_modelColumn(PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_modelColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMaemo5ListPickSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->modelColumn();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_modelColumn, doc_QMaemo5ListPickSelector_modelColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_setModelColumn, "QMaemo5ListPickSelector.setModelColumn(int)");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_setModelColumn(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_setModelColumn(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMaemo5ListPickSelector *sipCpp;

        static const char *sipKwdList[] = {
            sipName_column,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setModelColumn(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_setModelColumn, doc_QMaemo5ListPickSelector_setModelColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_currentValueText, "QMaemo5ListPickSelector.currentValueText() -> QString");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_currentValueText(PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_currentValueText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QMaemo5ListPickSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString((sipSelfWasArg ? sipCpp->QMaemo5ListPickSelector::currentValueText() : sipCpp->currentValueText()));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_currentValueText, doc_QMaemo5ListPickSelector_currentValueText);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_currentIndex, "QMaemo5ListPickSelector.currentIndex() -> int");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_currentIndex(PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_currentIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMaemo5ListPickSelector *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->currentIndex();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_currentIndex, doc_QMaemo5ListPickSelector_currentIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QMaemo5ListPickSelector_setCurrentIndex, "QMaemo5ListPickSelector.setCurrentIndex(int)");

extern "C" {static PyObject *meth_QMaemo5ListPickSelector_setCurrentIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMaemo5ListPickSelector_setCurrentIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QMaemo5ListPickSelector *sipCpp;

        static const char *sipKwdList[] = {
            sipName_index,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi", &sipSelf, sipType_QMaemo5ListPickSelector, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setCurrentIndex(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMaemo5ListPickSelector, sipName_setCurrentIndex, doc_QMaemo5ListPickSelector_setCurrentIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMaemo5ListPickSelector(void *, const sipTypeDef *);}
static void *cast_QMaemo5ListPickSelector(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMaemo5ListPickSelector)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QMaemo5AbstractPickSelector)->ctd_cast((QMaemo5AbstractPickSelector *)(QMaemo5ListPickSelector *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMaemo5ListPickSelector(void *, int);}
static void release_QMaemo5ListPickSelector(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMaemo5ListPickSelector *>(sipCppV);
    else
        delete reinterpret_cast<QMaemo5ListPickSelector *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMaemo5ListPickSelector(sipSimpleWrapper *);}
static void dealloc_QMaemo5ListPickSelector(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMaemo5ListPickSelector *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMaemo5ListPickSelector(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QMaemo5ListPickSelector(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMaemo5ListPickSelector(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMaemo5ListPickSelector *sipCpp = 0;

    {
        QObject * a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J8", sipType_QObject, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMaemo5ListPickSelector(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMaemo5ListPickSelector[] = {{0, 255, 1}};


static PyMethodDef methods_QMaemo5ListPickSelector[] = {
    {SIP_MLNAME_CAST(sipName_currentIndex), meth_QMaemo5ListPickSelector_currentIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_currentIndex)},
    {SIP_MLNAME_CAST(sipName_currentValueText), meth_QMaemo5ListPickSelector_currentValueText, METH_VARARGS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_currentValueText)},
    {SIP_MLNAME_CAST(sipName_model), meth_QMaemo5ListPickSelector_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_model)},
    {SIP_MLNAME_CAST(sipName_modelColumn), meth_QMaemo5ListPickSelector_modelColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_modelColumn)},
    {SIP_MLNAME_CAST(sipName_setCurrentIndex), (PyCFunction)meth_QMaemo5ListPickSelector_setCurrentIndex, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_setCurrentIndex)},
    {SIP_MLNAME_CAST(sipName_setModel), (PyCFunction)meth_QMaemo5ListPickSelector_setModel, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_setModel)},
    {SIP_MLNAME_CAST(sipName_setModelColumn), (PyCFunction)meth_QMaemo5ListPickSelector_setModelColumn, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_setModelColumn)},
    {SIP_MLNAME_CAST(sipName_setView), (PyCFunction)meth_QMaemo5ListPickSelector_setView, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_setView)},
    {SIP_MLNAME_CAST(sipName_view), meth_QMaemo5ListPickSelector_view, METH_VARARGS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_view)},
    {SIP_MLNAME_CAST(sipName_widget), (PyCFunction)meth_QMaemo5ListPickSelector_widget, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMaemo5ListPickSelector_widget)}
};

PyDoc_STRVAR(doc_QMaemo5ListPickSelector, "\1QMaemo5ListPickSelector(QObject parent=None)");


pyqt4ClassTypeDef sipTypeDef_QtMaemo5_QMaemo5ListPickSelector = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QMaemo5ListPickSelector,
        {0}
    },
    {
        sipNameNr_QMaemo5ListPickSelector,
        {0, 0, 1},
        10, methods_QMaemo5ListPickSelector,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMaemo5ListPickSelector,
    -1,
    -1,
    supers_QMaemo5ListPickSelector,
    0,
    init_QMaemo5ListPickSelector,
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
    dealloc_QMaemo5ListPickSelector,
    0,
    0,
    0,
    release_QMaemo5ListPickSelector,
    cast_QMaemo5ListPickSelector,
    0,
    0,
    0
},
    &QMaemo5ListPickSelector::staticMetaObject,
    0,
    0
};
