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

#line 534 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 39 "sipQtGuiQTextFrameFormat.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 43 "sipQtGuiQTextFrameFormat.cpp"
#line 72 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 46 "sipQtGuiQTextFrameFormat.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 49 "sipQtGuiQTextFrameFormat.cpp"
#line 662 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 52 "sipQtGuiQTextFrameFormat.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQTextFrameFormat.cpp"
#line 72 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 58 "sipQtGuiQTextFrameFormat.cpp"
#line 516 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 61 "sipQtGuiQTextFrameFormat.cpp"
#line 628 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 64 "sipQtGuiQTextFrameFormat.cpp"
#line 483 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 67 "sipQtGuiQTextFrameFormat.cpp"
#line 312 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 70 "sipQtGuiQTextFrameFormat.cpp"
#line 443 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 73 "sipQtGuiQTextFrameFormat.cpp"
#line 149 "/home/maemo/python-qt4-4.7/sip/QtCore/qmap.sip"
#include <qmap.h>
#line 76 "sipQtGuiQTextFrameFormat.cpp"
#line 131 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 79 "sipQtGuiQTextFrameFormat.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 82 "sipQtGuiQTextFrameFormat.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qvector.sip"
#include <qvector.h>
#line 85 "sipQtGuiQTextFrameFormat.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qpen.sip"
#include <qpen.h>
#line 88 "sipQtGuiQTextFrameFormat.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 91 "sipQtGuiQTextFrameFormat.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 94 "sipQtGuiQTextFrameFormat.cpp"


PyDoc_STRVAR(doc_QTextFrameFormat_isValid, "QTextFrameFormat.isValid() -> bool");

extern "C" {static PyObject *meth_QTextFrameFormat_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_isValid, doc_QTextFrameFormat_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setPosition, "QTextFrameFormat.setPosition(QTextFrameFormat.Position)");

extern "C" {static PyObject *meth_QTextFrameFormat_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat::Position a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QTextFrameFormat_Position, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPosition(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setPosition, doc_QTextFrameFormat_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_position, "QTextFrameFormat.position() -> QTextFrameFormat.Position");

extern "C" {static PyObject *meth_QTextFrameFormat_position(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QTextFrameFormat::Position sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->position();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTextFrameFormat_Position);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_position, doc_QTextFrameFormat_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_border, "QTextFrameFormat.border() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_border(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_border(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->border();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_border, doc_QTextFrameFormat_border);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_margin, "QTextFrameFormat.margin() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_margin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_margin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->margin();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_margin, doc_QTextFrameFormat_margin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_padding, "QTextFrameFormat.padding() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_padding(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_padding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->padding();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_padding, doc_QTextFrameFormat_padding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setWidth, "QTextFrameFormat.setWidth(QTextLength)\n"
    "QTextFrameFormat.setWidth(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextLength * a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QTextLength, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidth(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWidth(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setWidth, doc_QTextFrameFormat_setWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_width, "QTextFrameFormat.width() -> QTextLength");

extern "C" {static PyObject *meth_QTextFrameFormat_width(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QTextLength *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextLength(sipCpp->width());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextLength,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_width, doc_QTextFrameFormat_width);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_height, "QTextFrameFormat.height() -> QTextLength");

extern "C" {static PyObject *meth_QTextFrameFormat_height(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QTextLength *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextLength(sipCpp->height());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextLength,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_height, doc_QTextFrameFormat_height);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setBorder, "QTextFrameFormat.setBorder(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setBorder(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setBorder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBorder(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setBorder, doc_QTextFrameFormat_setBorder);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setMargin, "QTextFrameFormat.setMargin(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMargin(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setMargin, doc_QTextFrameFormat_setMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setPadding, "QTextFrameFormat.setPadding(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setPadding(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setPadding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPadding(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setPadding, doc_QTextFrameFormat_setPadding);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setHeight, "QTextFrameFormat.setHeight(float)\n"
    "QTextFrameFormat.setHeight(QTextLength)");

extern "C" {static PyObject *meth_QTextFrameFormat_setHeight(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeight(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QTextLength * a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QTextLength, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setHeight(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setHeight, doc_QTextFrameFormat_setHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setPageBreakPolicy, "QTextFrameFormat.setPageBreakPolicy(QTextFormat.PageBreakFlags)");

extern "C" {static PyObject *meth_QTextFrameFormat_setPageBreakPolicy(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setPageBreakPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFormat::PageBreakFlags * a0;
        int a0State = 0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QTextFormat_PageBreakFlags, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setPageBreakPolicy(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QTextFormat_PageBreakFlags,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setPageBreakPolicy, doc_QTextFrameFormat_setPageBreakPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_pageBreakPolicy, "QTextFrameFormat.pageBreakPolicy() -> QTextFormat.PageBreakFlags");

extern "C" {static PyObject *meth_QTextFrameFormat_pageBreakPolicy(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_pageBreakPolicy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QTextFormat::PageBreakFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextFormat::PageBreakFlags(sipCpp->pageBreakPolicy());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextFormat_PageBreakFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_pageBreakPolicy, doc_QTextFrameFormat_pageBreakPolicy);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setBorderBrush, "QTextFrameFormat.setBorderBrush(QBrush)");

extern "C" {static PyObject *meth_QTextFrameFormat_setBorderBrush(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setBorderBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBrush * a0;
        int a0State = 0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QBrush, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBorderBrush(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setBorderBrush, doc_QTextFrameFormat_setBorderBrush);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_borderBrush, "QTextFrameFormat.borderBrush() -> QBrush");

extern "C" {static PyObject *meth_QTextFrameFormat_borderBrush(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_borderBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QBrush *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QBrush(sipCpp->borderBrush());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_borderBrush, doc_QTextFrameFormat_borderBrush);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setBorderStyle, "QTextFrameFormat.setBorderStyle(QTextFrameFormat.BorderStyle)");

extern "C" {static PyObject *meth_QTextFrameFormat_setBorderStyle(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setBorderStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat::BorderStyle a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QTextFrameFormat, &sipCpp, sipType_QTextFrameFormat_BorderStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBorderStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setBorderStyle, doc_QTextFrameFormat_setBorderStyle);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_borderStyle, "QTextFrameFormat.borderStyle() -> QTextFrameFormat.BorderStyle");

extern "C" {static PyObject *meth_QTextFrameFormat_borderStyle(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_borderStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            QTextFrameFormat::BorderStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->borderStyle();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QTextFrameFormat_BorderStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_borderStyle, doc_QTextFrameFormat_borderStyle);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_topMargin, "QTextFrameFormat.topMargin() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_topMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_topMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->topMargin();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_topMargin, doc_QTextFrameFormat_topMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_bottomMargin, "QTextFrameFormat.bottomMargin() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_bottomMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_bottomMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bottomMargin();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_bottomMargin, doc_QTextFrameFormat_bottomMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_leftMargin, "QTextFrameFormat.leftMargin() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_leftMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_leftMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->leftMargin();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_leftMargin, doc_QTextFrameFormat_leftMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_rightMargin, "QTextFrameFormat.rightMargin() -> float");

extern "C" {static PyObject *meth_QTextFrameFormat_rightMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_rightMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextFrameFormat, &sipCpp))
        {
            qreal sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->rightMargin();
            Py_END_ALLOW_THREADS

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_rightMargin, doc_QTextFrameFormat_rightMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setTopMargin, "QTextFrameFormat.setTopMargin(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setTopMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setTopMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTopMargin(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setTopMargin, doc_QTextFrameFormat_setTopMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setBottomMargin, "QTextFrameFormat.setBottomMargin(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setBottomMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setBottomMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setBottomMargin(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setBottomMargin, doc_QTextFrameFormat_setBottomMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setLeftMargin, "QTextFrameFormat.setLeftMargin(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setLeftMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setLeftMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setLeftMargin(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setLeftMargin, doc_QTextFrameFormat_setLeftMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QTextFrameFormat_setRightMargin, "QTextFrameFormat.setRightMargin(float)");

extern "C" {static PyObject *meth_QTextFrameFormat_setRightMargin(PyObject *, PyObject *);}
static PyObject *meth_QTextFrameFormat_setRightMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QTextFrameFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QTextFrameFormat, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setRightMargin(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextFrameFormat, sipName_setRightMargin, doc_QTextFrameFormat_setRightMargin);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextFrameFormat(void *, const sipTypeDef *);}
static void *cast_QTextFrameFormat(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextFrameFormat)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QTextFormat)->ctd_cast((QTextFormat *)(QTextFrameFormat *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextFrameFormat(void *, int);}
static void release_QTextFrameFormat(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTextFrameFormat *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QTextFrameFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextFrameFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextFrameFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextFrameFormat *>(sipSrc);
}


extern "C" {static void *array_QTextFrameFormat(SIP_SSIZE_T);}
static void *array_QTextFrameFormat(SIP_SSIZE_T sipNrElem)
{
    return new QTextFrameFormat[sipNrElem];
}


extern "C" {static void *copy_QTextFrameFormat(const void *, SIP_SSIZE_T);}
static void *copy_QTextFrameFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextFrameFormat(reinterpret_cast<const QTextFrameFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextFrameFormat(sipSimpleWrapper *);}
static void dealloc_QTextFrameFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextFrameFormat(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTextFrameFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextFrameFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextFrameFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFrameFormat();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QTextFrameFormat * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextFrameFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTextFrameFormat(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextFrameFormat[] = {{658, 255, 1}};


static PyMethodDef methods_QTextFrameFormat[] = {
    {SIP_MLNAME_CAST(sipName_border), meth_QTextFrameFormat_border, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_border)},
    {SIP_MLNAME_CAST(sipName_borderBrush), meth_QTextFrameFormat_borderBrush, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_borderBrush)},
    {SIP_MLNAME_CAST(sipName_borderStyle), meth_QTextFrameFormat_borderStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_borderStyle)},
    {SIP_MLNAME_CAST(sipName_bottomMargin), meth_QTextFrameFormat_bottomMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_bottomMargin)},
    {SIP_MLNAME_CAST(sipName_height), meth_QTextFrameFormat_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_height)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTextFrameFormat_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_isValid)},
    {SIP_MLNAME_CAST(sipName_leftMargin), meth_QTextFrameFormat_leftMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_leftMargin)},
    {SIP_MLNAME_CAST(sipName_margin), meth_QTextFrameFormat_margin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_margin)},
    {SIP_MLNAME_CAST(sipName_padding), meth_QTextFrameFormat_padding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_padding)},
    {SIP_MLNAME_CAST(sipName_pageBreakPolicy), meth_QTextFrameFormat_pageBreakPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_pageBreakPolicy)},
    {SIP_MLNAME_CAST(sipName_position), meth_QTextFrameFormat_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_position)},
    {SIP_MLNAME_CAST(sipName_rightMargin), meth_QTextFrameFormat_rightMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_rightMargin)},
    {SIP_MLNAME_CAST(sipName_setBorder), meth_QTextFrameFormat_setBorder, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setBorder)},
    {SIP_MLNAME_CAST(sipName_setBorderBrush), meth_QTextFrameFormat_setBorderBrush, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setBorderBrush)},
    {SIP_MLNAME_CAST(sipName_setBorderStyle), meth_QTextFrameFormat_setBorderStyle, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setBorderStyle)},
    {SIP_MLNAME_CAST(sipName_setBottomMargin), meth_QTextFrameFormat_setBottomMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setBottomMargin)},
    {SIP_MLNAME_CAST(sipName_setHeight), meth_QTextFrameFormat_setHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setHeight)},
    {SIP_MLNAME_CAST(sipName_setLeftMargin), meth_QTextFrameFormat_setLeftMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setLeftMargin)},
    {SIP_MLNAME_CAST(sipName_setMargin), meth_QTextFrameFormat_setMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setMargin)},
    {SIP_MLNAME_CAST(sipName_setPadding), meth_QTextFrameFormat_setPadding, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setPadding)},
    {SIP_MLNAME_CAST(sipName_setPageBreakPolicy), meth_QTextFrameFormat_setPageBreakPolicy, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setPageBreakPolicy)},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTextFrameFormat_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setPosition)},
    {SIP_MLNAME_CAST(sipName_setRightMargin), meth_QTextFrameFormat_setRightMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setRightMargin)},
    {SIP_MLNAME_CAST(sipName_setTopMargin), meth_QTextFrameFormat_setTopMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setTopMargin)},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QTextFrameFormat_setWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_setWidth)},
    {SIP_MLNAME_CAST(sipName_topMargin), meth_QTextFrameFormat_topMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_topMargin)},
    {SIP_MLNAME_CAST(sipName_width), meth_QTextFrameFormat_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextFrameFormat_width)}
};

static sipEnumMemberDef enummembers_QTextFrameFormat[] = {
    {sipName_BorderStyle_Dashed, QTextFrameFormat::BorderStyle_Dashed, 668},
    {sipName_BorderStyle_DotDash, QTextFrameFormat::BorderStyle_DotDash, 668},
    {sipName_BorderStyle_DotDotDash, QTextFrameFormat::BorderStyle_DotDotDash, 668},
    {sipName_BorderStyle_Dotted, QTextFrameFormat::BorderStyle_Dotted, 668},
    {sipName_BorderStyle_Double, QTextFrameFormat::BorderStyle_Double, 668},
    {sipName_BorderStyle_Groove, QTextFrameFormat::BorderStyle_Groove, 668},
    {sipName_BorderStyle_Inset, QTextFrameFormat::BorderStyle_Inset, 668},
    {sipName_BorderStyle_None, QTextFrameFormat::BorderStyle_None, 668},
    {sipName_BorderStyle_Outset, QTextFrameFormat::BorderStyle_Outset, 668},
    {sipName_BorderStyle_Ridge, QTextFrameFormat::BorderStyle_Ridge, 668},
    {sipName_BorderStyle_Solid, QTextFrameFormat::BorderStyle_Solid, 668},
    {sipName_FloatLeft, QTextFrameFormat::FloatLeft, 669},
    {sipName_FloatRight, QTextFrameFormat::FloatRight, 669},
    {sipName_InFlow, QTextFrameFormat::InFlow, 669},
};

PyDoc_STRVAR(doc_QTextFrameFormat, "\1QTextFrameFormat()\n"
    "QTextFrameFormat(QTextFrameFormat)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextFrameFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTextFrameFormat,
        {0}
    },
    {
        sipNameNr_QTextFrameFormat,
        {0, 0, 1},
        27, methods_QTextFrameFormat,
        14, enummembers_QTextFrameFormat,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextFrameFormat,
    -1,
    -1,
    supers_QTextFrameFormat,
    0,
    init_QTextFrameFormat,
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
    dealloc_QTextFrameFormat,
    assign_QTextFrameFormat,
    array_QTextFrameFormat,
    copy_QTextFrameFormat,
    release_QTextFrameFormat,
    cast_QTextFrameFormat,
    0,
    0,
    0
},
    0,
    0,
    0
};
