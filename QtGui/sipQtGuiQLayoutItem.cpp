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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 39 "sipQtGuiQLayoutItem.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQLayoutItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 46 "sipQtGuiQLayoutItem.cpp"
#line 79 "/home/maemo/python-qt4-4.7/sip/QtGui/qlayoutitem.sip"
#include <qlayoutitem.h>
#line 49 "sipQtGuiQLayoutItem.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qlayout.sip"
#include <qlayout.h>
#line 52 "sipQtGuiQLayoutItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtGuiQLayoutItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 58 "sipQtGuiQLayoutItem.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 61 "sipQtGuiQLayoutItem.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 64 "sipQtGuiQLayoutItem.cpp"


class sipQLayoutItem : public QLayoutItem
{
public:
    sipQLayoutItem(Qt::Alignment);
    sipQLayoutItem(const QLayoutItem&);
    virtual ~sipQLayoutItem();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QSize sizeHint() const;
    QSize minimumSize() const;
    QSize maximumSize() const;
    Qt::Orientations expandingDirections() const;
    void setGeometry(const QRect&);
    QRect geometry() const;
    bool isEmpty() const;
    bool hasHeightForWidth() const;
    int heightForWidth(int) const;
    int minimumHeightForWidth(int) const;
    void invalidate();
    QWidget * widget();
    QLayout * layout();
    QSpacerItem * spacerItem();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQLayoutItem(const sipQLayoutItem &);
    sipQLayoutItem &operator = (const sipQLayoutItem &);

    char sipPyMethods[14];
};

sipQLayoutItem::sipQLayoutItem(Qt::Alignment a0): QLayoutItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLayoutItem::sipQLayoutItem(const QLayoutItem& a0): QLayoutItem(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQLayoutItem::~sipQLayoutItem()
{
    sipCommonDtor(sipPySelf);
}

QSize sipQLayoutItem::sizeHint() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QLayoutItem,sipName_sizeHint);

    if (!meth)
        return QSize();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_4(sipGILState,meth);
}

QSize sipQLayoutItem::minimumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QLayoutItem,sipName_minimumSize);

    if (!meth)
        return QSize();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_4(sipGILState,meth);
}

QSize sipQLayoutItem::maximumSize() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QLayoutItem,sipName_maximumSize);

    if (!meth)
        return QSize();

    extern QSize sipVH_QtGui_4(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_4(sipGILState,meth);
}

Qt::Orientations sipQLayoutItem::expandingDirections() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,sipName_QLayoutItem,sipName_expandingDirections);

    if (!meth)
        return Qt::Orientations();

    extern Qt::Orientations sipVH_QtGui_155(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_155(sipGILState,meth);
}

void sipQLayoutItem::setGeometry(const QRect& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QLayoutItem,sipName_setGeometry);

    if (!meth)
        return;

    extern void sipVH_QtGui_102(sip_gilstate_t,PyObject *,const QRect&);

    sipVH_QtGui_102(sipGILState,meth,a0);
}

QRect sipQLayoutItem::geometry() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,sipName_QLayoutItem,sipName_geometry);

    if (!meth)
        return QRect();

    extern QRect sipVH_QtGui_154(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_154(sipGILState,meth);
}

bool sipQLayoutItem::isEmpty() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QLayoutItem,sipName_isEmpty);

    if (!meth)
        return 0;

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

bool sipQLayoutItem::hasHeightForWidth() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_hasHeightForWidth);

    if (!meth)
        return QLayoutItem::hasHeightForWidth();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtGui_QtCore->em_virthandlers[7]))(sipGILState,meth);
}

int sipQLayoutItem::heightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_heightForWidth);

    if (!meth)
        return QLayoutItem::heightForWidth(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_28(sipGILState,meth,a0);
}

int sipQLayoutItem::minimumHeightForWidth(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[9]),sipPySelf,NULL,sipName_minimumHeightForWidth);

    if (!meth)
        return QLayoutItem::minimumHeightForWidth(a0);

    extern int sipVH_QtGui_28(sip_gilstate_t,PyObject *,int);

    return sipVH_QtGui_28(sipGILState,meth,a0);
}

void sipQLayoutItem::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_invalidate);

    if (!meth)
    {
        QLayoutItem::invalidate();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t,PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtGui_QtCore->em_virthandlers[11]))(sipGILState,meth);
}

QWidget * sipQLayoutItem::widget()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,NULL,sipName_widget);

    if (!meth)
        return QLayoutItem::widget();

    extern QWidget * sipVH_QtGui_106(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_106(sipGILState,meth);
}

QLayout * sipQLayoutItem::layout()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[12],sipPySelf,NULL,sipName_layout);

    if (!meth)
        return QLayoutItem::layout();

    extern QLayout * sipVH_QtGui_157(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_157(sipGILState,meth);
}

QSpacerItem * sipQLayoutItem::spacerItem()
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,NULL,sipName_spacerItem);

    if (!meth)
        return QLayoutItem::spacerItem();

    extern QSpacerItem * sipVH_QtGui_156(sip_gilstate_t,PyObject *);

    return sipVH_QtGui_156(sipGILState,meth);
}


PyDoc_STRVAR(doc_QLayoutItem_sizeHint, "QLayoutItem.sizeHint() -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_sizeHint(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_sizeHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QSize *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_sizeHint);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->sizeHint());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_sizeHint, doc_QLayoutItem_sizeHint);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_minimumSize, "QLayoutItem.minimumSize() -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_minimumSize(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_minimumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QSize *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_minimumSize);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->minimumSize());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_minimumSize, doc_QLayoutItem_minimumSize);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_maximumSize, "QLayoutItem.maximumSize() -> QSize");

extern "C" {static PyObject *meth_QLayoutItem_maximumSize(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_maximumSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QSize *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_maximumSize);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->maximumSize());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_maximumSize, doc_QLayoutItem_maximumSize);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_expandingDirections, "QLayoutItem.expandingDirections() -> Qt.Orientations");

extern "C" {static PyObject *meth_QLayoutItem_expandingDirections(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_expandingDirections(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            Qt::Orientations *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_expandingDirections);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Orientations(sipCpp->expandingDirections());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Orientations,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_expandingDirections, doc_QLayoutItem_expandingDirections);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_setGeometry, "QLayoutItem.setGeometry(QRect)");

extern "C" {static PyObject *meth_QLayoutItem_setGeometry(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_setGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QRect * a0;
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLayoutItem, &sipCpp, sipType_QRect, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_setGeometry);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipCpp->setGeometry(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_setGeometry, doc_QLayoutItem_setGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_geometry, "QLayoutItem.geometry() -> QRect");

extern "C" {static PyObject *meth_QLayoutItem_geometry(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_geometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QRect *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_geometry);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QRect(sipCpp->geometry());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_geometry, doc_QLayoutItem_geometry);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_isEmpty, "QLayoutItem.isEmpty() -> bool");

extern "C" {static PyObject *meth_QLayoutItem_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QLayoutItem, sipName_isEmpty);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_isEmpty, doc_QLayoutItem_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_hasHeightForWidth, "QLayoutItem.hasHeightForWidth() -> bool");

extern "C" {static PyObject *meth_QLayoutItem_hasHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_hasHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::hasHeightForWidth() : sipCpp->hasHeightForWidth());
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_hasHeightForWidth, doc_QLayoutItem_hasHeightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_heightForWidth, "QLayoutItem.heightForWidth(int) -> int");

extern "C" {static PyObject *meth_QLayoutItem_heightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_heightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLayoutItem, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::heightForWidth(a0) : sipCpp->heightForWidth(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_heightForWidth, doc_QLayoutItem_heightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_minimumHeightForWidth, "QLayoutItem.minimumHeightForWidth(int) -> int");

extern "C" {static PyObject *meth_QLayoutItem_minimumHeightForWidth(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_minimumHeightForWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QLayoutItem, &sipCpp, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::minimumHeightForWidth(a0) : sipCpp->minimumHeightForWidth(a0));
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_minimumHeightForWidth, doc_QLayoutItem_minimumHeightForWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_invalidate, "QLayoutItem.invalidate()");

extern "C" {static PyObject *meth_QLayoutItem_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QLayoutItem::invalidate() : sipCpp->invalidate());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_invalidate, doc_QLayoutItem_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_widget, "QLayoutItem.widget() -> QWidget");

extern "C" {static PyObject *meth_QLayoutItem_widget(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::widget() : sipCpp->widget());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_widget, doc_QLayoutItem_widget);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_layout, "QLayoutItem.layout() -> QLayout");

extern "C" {static PyObject *meth_QLayoutItem_layout(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_layout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QLayout *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::layout() : sipCpp->layout());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QLayout,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_layout, doc_QLayoutItem_layout);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_spacerItem, "QLayoutItem.spacerItem() -> QSpacerItem");

extern "C" {static PyObject *meth_QLayoutItem_spacerItem(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_spacerItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QSpacerItem *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QLayoutItem::spacerItem() : sipCpp->spacerItem());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QSpacerItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_spacerItem, doc_QLayoutItem_spacerItem);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_alignment, "QLayoutItem.alignment() -> Qt.Alignment");

extern "C" {static PyObject *meth_QLayoutItem_alignment(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            Qt::Alignment *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::Alignment(sipCpp->alignment());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_Alignment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_alignment, doc_QLayoutItem_alignment);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_setAlignment, "QLayoutItem.setAlignment(Qt.Alignment)");

extern "C" {static PyObject *meth_QLayoutItem_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::Alignment * a0;
        int a0State = 0;
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QLayoutItem, &sipCpp, sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setAlignment(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_setAlignment, doc_QLayoutItem_setAlignment);

    return NULL;
}


PyDoc_STRVAR(doc_QLayoutItem_controlTypes, "QLayoutItem.controlTypes() -> QSizePolicy.ControlTypes");

extern "C" {static PyObject *meth_QLayoutItem_controlTypes(PyObject *, PyObject *);}
static PyObject *meth_QLayoutItem_controlTypes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLayoutItem *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLayoutItem, &sipCpp))
        {
            QSizePolicy::ControlTypes *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSizePolicy::ControlTypes(sipCpp->controlTypes());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLayoutItem, sipName_controlTypes, doc_QLayoutItem_controlTypes);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLayoutItem(void *, const sipTypeDef *);}
static void *cast_QLayoutItem(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLayoutItem)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLayoutItem(void *, int);}
static void release_QLayoutItem(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQLayoutItem *>(sipCppV);
    else
        delete reinterpret_cast<QLayoutItem *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QLayoutItem(sipSimpleWrapper *);}
static void dealloc_QLayoutItem(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQLayoutItem *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QLayoutItem(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QLayoutItem(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QLayoutItem(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQLayoutItem *sipCpp = 0;

    {
        Qt::Alignment a0def = 0;
        Qt::Alignment * a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_alignment,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_Qt_Alignment, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLayoutItem(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_Qt_Alignment,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QLayoutItem * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLayoutItem, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQLayoutItem(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QLayoutItem[] = {
    {SIP_MLNAME_CAST(sipName_alignment), meth_QLayoutItem_alignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_alignment)},
    {SIP_MLNAME_CAST(sipName_controlTypes), meth_QLayoutItem_controlTypes, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_controlTypes)},
    {SIP_MLNAME_CAST(sipName_expandingDirections), meth_QLayoutItem_expandingDirections, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_expandingDirections)},
    {SIP_MLNAME_CAST(sipName_geometry), meth_QLayoutItem_geometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_geometry)},
    {SIP_MLNAME_CAST(sipName_hasHeightForWidth), meth_QLayoutItem_hasHeightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_hasHeightForWidth)},
    {SIP_MLNAME_CAST(sipName_heightForWidth), meth_QLayoutItem_heightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_heightForWidth)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QLayoutItem_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_invalidate)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QLayoutItem_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_isEmpty)},
    {SIP_MLNAME_CAST(sipName_layout), meth_QLayoutItem_layout, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_layout)},
    {SIP_MLNAME_CAST(sipName_maximumSize), meth_QLayoutItem_maximumSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_maximumSize)},
    {SIP_MLNAME_CAST(sipName_minimumHeightForWidth), meth_QLayoutItem_minimumHeightForWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_minimumHeightForWidth)},
    {SIP_MLNAME_CAST(sipName_minimumSize), meth_QLayoutItem_minimumSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_minimumSize)},
    {SIP_MLNAME_CAST(sipName_setAlignment), meth_QLayoutItem_setAlignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_setAlignment)},
    {SIP_MLNAME_CAST(sipName_setGeometry), meth_QLayoutItem_setGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_setGeometry)},
    {SIP_MLNAME_CAST(sipName_sizeHint), meth_QLayoutItem_sizeHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_sizeHint)},
    {SIP_MLNAME_CAST(sipName_spacerItem), meth_QLayoutItem_spacerItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_spacerItem)},
    {SIP_MLNAME_CAST(sipName_widget), meth_QLayoutItem_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QLayoutItem_widget)}
};

PyDoc_STRVAR(doc_QLayoutItem, "\1QLayoutItem(Qt.Alignment alignment=0)\n"
    "QLayoutItem(QLayoutItem)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QLayoutItem = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QLayoutItem,
        {0}
    },
    {
        sipNameNr_QLayoutItem,
        {0, 0, 1},
        17, methods_QLayoutItem,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLayoutItem,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_QLayoutItem,
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
    dealloc_QLayoutItem,
    0,
    0,
    0,
    release_QLayoutItem,
    cast_QLayoutItem,
    0,
    0,
    0
},
    0,
    0,
    0
};
