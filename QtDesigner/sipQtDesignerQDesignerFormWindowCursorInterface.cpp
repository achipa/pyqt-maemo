/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10-snapshot-20100108 on Tue Feb 16 16:32:14 2010
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

#include "sipAPIQtDesigner.h"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtDesigner/abstractformwindowcursor.sip"
#include <abstractformwindowcursor.h>
#line 39 "sipQtDesignerQDesignerFormWindowCursorInterface.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 43 "sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 49 "sipQtDesignerQDesignerFormWindowCursorInterface.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtDesigner/abstractformwindow.sip"
#include <abstractformwindow.h>
#line 52 "sipQtDesignerQDesignerFormWindowCursorInterface.cpp"


class sipQDesignerFormWindowCursorInterface : public QDesignerFormWindowCursorInterface
{
public:
    sipQDesignerFormWindowCursorInterface();
    sipQDesignerFormWindowCursorInterface(const QDesignerFormWindowCursorInterface&);
    virtual ~sipQDesignerFormWindowCursorInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QDesignerFormWindowInterface * formWindow() const;
    bool movePosition(QDesignerFormWindowCursorInterface::MoveOperation,QDesignerFormWindowCursorInterface::MoveMode);
    int position() const;
    void setPosition(int,QDesignerFormWindowCursorInterface::MoveMode);
    QWidget * current() const;
    int widgetCount() const;
    QWidget * widget(int) const;
    bool hasSelection() const;
    int selectedWidgetCount() const;
    QWidget * selectedWidget(int) const;
    void setProperty(const QString&,const QVariant&);
    void setWidgetProperty(QWidget *,const QString&,const QVariant&);
    void resetWidgetProperty(QWidget *,const QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerFormWindowCursorInterface(const sipQDesignerFormWindowCursorInterface &);
    sipQDesignerFormWindowCursorInterface &operator = (const sipQDesignerFormWindowCursorInterface &);

    char sipPyMethods[13];
};

sipQDesignerFormWindowCursorInterface::sipQDesignerFormWindowCursorInterface(): QDesignerFormWindowCursorInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerFormWindowCursorInterface::sipQDesignerFormWindowCursorInterface(const QDesignerFormWindowCursorInterface& a0): QDesignerFormWindowCursorInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerFormWindowCursorInterface::~sipQDesignerFormWindowCursorInterface()
{
    sipCommonDtor(sipPySelf);
}

QDesignerFormWindowInterface * sipQDesignerFormWindowCursorInterface::formWindow() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_formWindow);

    if (!meth)
        return 0;

    extern QDesignerFormWindowInterface * sipVH_QtDesigner_18(sip_gilstate_t,PyObject *);

    return sipVH_QtDesigner_18(sipGILState,meth);
}

bool sipQDesignerFormWindowCursorInterface::movePosition(QDesignerFormWindowCursorInterface::MoveOperation a0,QDesignerFormWindowCursorInterface::MoveMode a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_movePosition);

    if (!meth)
        return 0;

    extern bool sipVH_QtDesigner_24(sip_gilstate_t,PyObject *,QDesignerFormWindowCursorInterface::MoveOperation,QDesignerFormWindowCursorInterface::MoveMode);

    return sipVH_QtDesigner_24(sipGILState,meth,a0,a1);
}

int sipQDesignerFormWindowCursorInterface::position() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_position);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

void sipQDesignerFormWindowCursorInterface::setPosition(int a0,QDesignerFormWindowCursorInterface::MoveMode a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setPosition);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_23(sip_gilstate_t,PyObject *,int,QDesignerFormWindowCursorInterface::MoveMode);

    sipVH_QtDesigner_23(sipGILState,meth,a0,a1);
}

QWidget * sipQDesignerFormWindowCursorInterface::current() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_current);

    if (!meth)
        return 0;

    typedef QWidget * (*sipVH_QtGui_107)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtGui_107)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[107]))(sipGILState,meth);
}

int sipQDesignerFormWindowCursorInterface::widgetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_widgetCount);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

QWidget * sipQDesignerFormWindowCursorInterface::widget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_widget);

    if (!meth)
        return 0;

    extern QWidget * sipVH_QtDesigner_11(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_11(sipGILState,meth,a0);
}

bool sipQDesignerFormWindowCursorInterface::hasSelection() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_hasSelection);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_1)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_1)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[1]))(sipGILState,meth);
}

int sipQDesignerFormWindowCursorInterface::selectedWidgetCount() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_selectedWidgetCount);

    if (!meth)
        return 0;

    typedef int (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

QWidget * sipQDesignerFormWindowCursorInterface::selectedWidget(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_selectedWidget);

    if (!meth)
        return 0;

    extern QWidget * sipVH_QtDesigner_11(sip_gilstate_t,PyObject *,int);

    return sipVH_QtDesigner_11(sipGILState,meth,a0);
}

void sipQDesignerFormWindowCursorInterface::setProperty(const QString& a0,const QVariant& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setProperty);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_22(sip_gilstate_t,PyObject *,const QString&,const QVariant&);

    sipVH_QtDesigner_22(sipGILState,meth,a0,a1);
}

void sipQDesignerFormWindowCursorInterface::setWidgetProperty(QWidget *a0,const QString& a1,const QVariant& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_setWidgetProperty);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_21(sip_gilstate_t,PyObject *,QWidget *,const QString&,const QVariant&);

    sipVH_QtDesigner_21(sipGILState,meth,a0,a1,a2);
}

void sipQDesignerFormWindowCursorInterface::resetWidgetProperty(QWidget *a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,sipName_QDesignerFormWindowCursorInterface,sipName_resetWidgetProperty);

    if (!meth)
        return;

    extern void sipVH_QtDesigner_20(sip_gilstate_t,PyObject *,QWidget *,const QString&);

    sipVH_QtDesigner_20(sipGILState,meth,a0,a1);
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_formWindow, "QDesignerFormWindowCursorInterface.formWindow() -> QDesignerFormWindowInterface");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_formWindow(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_formWindow(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            QDesignerFormWindowInterface *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_formWindow);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->formWindow();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QDesignerFormWindowInterface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_formWindow, doc_QDesignerFormWindowCursorInterface_formWindow);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_movePosition, "QDesignerFormWindowCursorInterface.movePosition(QDesignerFormWindowCursorInterface.MoveOperation, QDesignerFormWindowCursorInterface.MoveMode mode=QDesignerFormWindowCursorInterface.MoveAnchor) -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_movePosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_movePosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface::MoveOperation a0;
        QDesignerFormWindowCursorInterface::MoveMode a1 = QDesignerFormWindowCursorInterface::MoveAnchor;
        QDesignerFormWindowCursorInterface *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|E", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QDesignerFormWindowCursorInterface_MoveOperation, &a0, sipType_QDesignerFormWindowCursorInterface_MoveMode, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_movePosition);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->movePosition(a0,a1);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_movePosition, doc_QDesignerFormWindowCursorInterface_movePosition);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_position, "QDesignerFormWindowCursorInterface.position() -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_position(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_position);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_position, doc_QDesignerFormWindowCursorInterface_position);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setPosition, "QDesignerFormWindowCursorInterface.setPosition(int, QDesignerFormWindowCursorInterface.MoveMode mode=QDesignerFormWindowCursorInterface.MoveAnchor)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setPosition(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setPosition(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerFormWindowCursorInterface::MoveMode a1 = QDesignerFormWindowCursorInterface::MoveAnchor;
        QDesignerFormWindowCursorInterface *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|E", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0, sipType_QDesignerFormWindowCursorInterface_MoveMode, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setPosition);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(a0,a1);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setPosition, doc_QDesignerFormWindowCursorInterface_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_current, "QDesignerFormWindowCursorInterface.current() -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_current(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_current(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            QWidget *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_current);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->current();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_current, doc_QDesignerFormWindowCursorInterface_current);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_widgetCount, "QDesignerFormWindowCursorInterface.widgetCount() -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_widgetCount(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_widgetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_widgetCount);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widgetCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_widgetCount, doc_QDesignerFormWindowCursorInterface_widgetCount);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_widget, "QDesignerFormWindowCursorInterface.widget(int) -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_widget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0))
        {
            QWidget *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_widget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->widget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_widget, doc_QDesignerFormWindowCursorInterface_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_hasSelection, "QDesignerFormWindowCursorInterface.hasSelection() -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_hasSelection(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_hasSelection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_hasSelection);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasSelection();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_hasSelection, doc_QDesignerFormWindowCursorInterface_hasSelection);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_selectedWidgetCount, "QDesignerFormWindowCursorInterface.selectedWidgetCount() -> int");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidgetCount(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidgetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidgetCount);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->selectedWidgetCount();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidgetCount, doc_QDesignerFormWindowCursorInterface_selectedWidgetCount);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_selectedWidget, "QDesignerFormWindowCursorInterface.selectedWidget(int) -> QWidget");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidget(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_selectedWidget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, &a0))
        {
            QWidget *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidget);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->selectedWidget(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_selectedWidget, doc_QDesignerFormWindowCursorInterface_selectedWidget);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setProperty, "QDesignerFormWindowCursorInterface.setProperty(QString, QVariant)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString * a0;
        int a0State = 0;
        const QVariant * a1;
        int a1State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QString,&a0, &a0State, sipType_QVariant,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setProperty(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setProperty, doc_QDesignerFormWindowCursorInterface_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_setWidgetProperty, "QDesignerFormWindowCursorInterface.setWidgetProperty(QWidget, QString, QVariant)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_setWidgetProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_setWidgetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget * a0;
        const QString * a1;
        int a1State = 0;
        const QVariant * a2;
        int a2State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0, sipType_QString,&a1, &a1State, sipType_QVariant,&a2, &a2State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_setWidgetProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidgetProperty(a0,*a1,*a2);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_setWidgetProperty, doc_QDesignerFormWindowCursorInterface_setWidgetProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_resetWidgetProperty, "QDesignerFormWindowCursorInterface.resetWidgetProperty(QWidget, QString)");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_resetWidgetProperty(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_resetWidgetProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QWidget * a0;
        const QString * a1;
        int a1State = 0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J1", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerFormWindowCursorInterface, sipName_resetWidgetProperty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->resetWidgetProperty(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_resetWidgetProperty, doc_QDesignerFormWindowCursorInterface_resetWidgetProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface_isWidgetSelected, "QDesignerFormWindowCursorInterface.isWidgetSelected(QWidget) -> bool");

extern "C" {static PyObject *meth_QDesignerFormWindowCursorInterface_isWidgetSelected(PyObject *, PyObject *);}
static PyObject *meth_QDesignerFormWindowCursorInterface_isWidgetSelected(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget * a0;
        QDesignerFormWindowCursorInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QDesignerFormWindowCursorInterface, &sipCpp, sipType_QWidget, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isWidgetSelected(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerFormWindowCursorInterface, sipName_isWidgetSelected, doc_QDesignerFormWindowCursorInterface_isWidgetSelected);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerFormWindowCursorInterface(void *, const sipTypeDef *);}
static void *cast_QDesignerFormWindowCursorInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerFormWindowCursorInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerFormWindowCursorInterface(void *, int);}
static void release_QDesignerFormWindowCursorInterface(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerFormWindowCursorInterface *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerFormWindowCursorInterface *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerFormWindowCursorInterface(sipSimpleWrapper *);}
static void dealloc_QDesignerFormWindowCursorInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerFormWindowCursorInterface *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerFormWindowCursorInterface(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QDesignerFormWindowCursorInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDesignerFormWindowCursorInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerFormWindowCursorInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerFormWindowCursorInterface();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerFormWindowCursorInterface * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerFormWindowCursorInterface, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerFormWindowCursorInterface(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerFormWindowCursorInterface[] = {
    {SIP_MLNAME_CAST(sipName_current), meth_QDesignerFormWindowCursorInterface_current, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_current)},
    {SIP_MLNAME_CAST(sipName_formWindow), meth_QDesignerFormWindowCursorInterface_formWindow, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_formWindow)},
    {SIP_MLNAME_CAST(sipName_hasSelection), meth_QDesignerFormWindowCursorInterface_hasSelection, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_hasSelection)},
    {SIP_MLNAME_CAST(sipName_isWidgetSelected), meth_QDesignerFormWindowCursorInterface_isWidgetSelected, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_isWidgetSelected)},
    {SIP_MLNAME_CAST(sipName_movePosition), (PyCFunction)meth_QDesignerFormWindowCursorInterface_movePosition, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_movePosition)},
    {SIP_MLNAME_CAST(sipName_position), meth_QDesignerFormWindowCursorInterface_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_position)},
    {SIP_MLNAME_CAST(sipName_resetWidgetProperty), meth_QDesignerFormWindowCursorInterface_resetWidgetProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_resetWidgetProperty)},
    {SIP_MLNAME_CAST(sipName_selectedWidget), meth_QDesignerFormWindowCursorInterface_selectedWidget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_selectedWidget)},
    {SIP_MLNAME_CAST(sipName_selectedWidgetCount), meth_QDesignerFormWindowCursorInterface_selectedWidgetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_selectedWidgetCount)},
    {SIP_MLNAME_CAST(sipName_setPosition), (PyCFunction)meth_QDesignerFormWindowCursorInterface_setPosition, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setPosition)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QDesignerFormWindowCursorInterface_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setProperty)},
    {SIP_MLNAME_CAST(sipName_setWidgetProperty), meth_QDesignerFormWindowCursorInterface_setWidgetProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_setWidgetProperty)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QDesignerFormWindowCursorInterface_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_widget)},
    {SIP_MLNAME_CAST(sipName_widgetCount), meth_QDesignerFormWindowCursorInterface_widgetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerFormWindowCursorInterface_widgetCount)}
};

static sipEnumMemberDef enummembers_QDesignerFormWindowCursorInterface[] = {
    {sipName_Down, QDesignerFormWindowCursorInterface::Down, 10},
    {sipName_End, QDesignerFormWindowCursorInterface::End, 10},
    {sipName_KeepAnchor, QDesignerFormWindowCursorInterface::KeepAnchor, 9},
    {sipName_Left, QDesignerFormWindowCursorInterface::Left, 10},
    {sipName_MoveAnchor, QDesignerFormWindowCursorInterface::MoveAnchor, 9},
    {sipName_Next, QDesignerFormWindowCursorInterface::Next, 10},
    {sipName_NoMove, QDesignerFormWindowCursorInterface::NoMove, 10},
    {sipName_Prev, QDesignerFormWindowCursorInterface::Prev, 10},
    {sipName_Right, QDesignerFormWindowCursorInterface::Right, 10},
    {sipName_Start, QDesignerFormWindowCursorInterface::Start, 10},
    {sipName_Up, QDesignerFormWindowCursorInterface::Up, 10},
};

PyDoc_STRVAR(doc_QDesignerFormWindowCursorInterface, "\1QDesignerFormWindowCursorInterface()\n"
    "QDesignerFormWindowCursorInterface(QDesignerFormWindowCursorInterface)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerFormWindowCursorInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerFormWindowCursorInterface,
        {0}
    },
    {
        sipNameNr_QDesignerFormWindowCursorInterface,
        {0, 0, 1},
        14, methods_QDesignerFormWindowCursorInterface,
        11, enummembers_QDesignerFormWindowCursorInterface,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerFormWindowCursorInterface,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QDesignerFormWindowCursorInterface,
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
    dealloc_QDesignerFormWindowCursorInterface,
    0,
    0,
    0,
    release_QDesignerFormWindowCursorInterface,
    cast_QDesignerFormWindowCursorInterface,
    0,
    0,
    0
},
    0,
    0,
    0
};