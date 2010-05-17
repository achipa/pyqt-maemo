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

#line 238 "/home/maemo/python-qt4-4.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQMouseEvent.cpp"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 43 "sipQtGuiQMouseEvent.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 46 "sipQtGuiQMouseEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtGuiQMouseEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQMouseEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQMouseEvent.cpp"
#line 94 "/home/maemo/python-qt4-4.7/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 58 "sipQtGuiQMouseEvent.cpp"


class sipQMouseEvent : public QMouseEvent
{
public:
    sipQMouseEvent(QEvent::Type,const QPoint&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers);
    sipQMouseEvent(QEvent::Type,const QPoint&,const QPoint&,Qt::MouseButton,Qt::MouseButtons,Qt::KeyboardModifiers);
    sipQMouseEvent(const QMouseEvent&);
    ~sipQMouseEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMouseEvent(const sipQMouseEvent &);
    sipQMouseEvent &operator = (const sipQMouseEvent &);
};

sipQMouseEvent::sipQMouseEvent(QEvent::Type a0,const QPoint& a1,Qt::MouseButton a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4): QMouseEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent(QEvent::Type a0,const QPoint& a1,const QPoint& a2,Qt::MouseButton a3,Qt::MouseButtons a4,Qt::KeyboardModifiers a5): QMouseEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQMouseEvent::sipQMouseEvent(const QMouseEvent& a0): QMouseEvent(a0), sipPySelf(0)
{
}

sipQMouseEvent::~sipQMouseEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QMouseEvent_pos, "QMouseEvent.pos() -> QPoint");

extern "C" {static PyObject *meth_QMouseEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->pos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_pos, doc_QMouseEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalPos, "QMouseEvent.globalPos() -> QPoint");

extern "C" {static PyObject *meth_QMouseEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            QPoint *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPoint(sipCpp->globalPos());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalPos, doc_QMouseEvent_globalPos);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_x, "QMouseEvent.x() -> int");

extern "C" {static PyObject *meth_QMouseEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->x();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_x, doc_QMouseEvent_x);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_y, "QMouseEvent.y() -> int");

extern "C" {static PyObject *meth_QMouseEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->y();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_y, doc_QMouseEvent_y);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalX, "QMouseEvent.globalX() -> int");

extern "C" {static PyObject *meth_QMouseEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalX();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalX, doc_QMouseEvent_globalX);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_globalY, "QMouseEvent.globalY() -> int");

extern "C" {static PyObject *meth_QMouseEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->globalY();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_globalY, doc_QMouseEvent_globalY);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_button, "QMouseEvent.button() -> Qt.MouseButton");

extern "C" {static PyObject *meth_QMouseEvent_button(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_button(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            Qt::MouseButton sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->button();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_MouseButton);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_button, doc_QMouseEvent_button);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_buttons, "QMouseEvent.buttons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QMouseEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            Qt::MouseButtons *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::MouseButtons(sipCpp->buttons());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_buttons, doc_QMouseEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_hasExtendedInfo, "QMouseEvent.hasExtendedInfo() -> bool");

extern "C" {static PyObject *meth_QMouseEvent_hasExtendedInfo(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_hasExtendedInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasExtendedInfo();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_hasExtendedInfo, doc_QMouseEvent_hasExtendedInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QMouseEvent_posF, "QMouseEvent.posF() -> QPointF");

extern "C" {static PyObject *meth_QMouseEvent_posF(PyObject *, PyObject *);}
static PyObject *meth_QMouseEvent_posF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMouseEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMouseEvent, &sipCpp))
        {
            QPointF *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPointF(sipCpp->posF());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMouseEvent, sipName_posF, doc_QMouseEvent_posF);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMouseEvent(void *, const sipTypeDef *);}
static void *cast_QMouseEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QMouseEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QInputEvent)->ctd_cast((QInputEvent *)(QMouseEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMouseEvent(void *, int);}
static void release_QMouseEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMouseEvent *>(sipCppV);
    else
        delete reinterpret_cast<QMouseEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QMouseEvent(sipSimpleWrapper *);}
static void dealloc_QMouseEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMouseEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMouseEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QMouseEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QMouseEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMouseEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        const QPoint * a1;
        Qt::MouseButton a2;
        Qt::MouseButtons * a3;
        int a3State = 0;
        Qt::KeyboardModifiers * a4;
        int a4State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9EJ1J1", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_Qt_MouseButton, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMouseEvent(a0,*a1,a2,*a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        QEvent::Type a0;
        const QPoint * a1;
        const QPoint * a2;
        Qt::MouseButton a3;
        Qt::MouseButtons * a4;
        int a4State = 0;
        Qt::KeyboardModifiers * a5;
        int a5State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9J9EJ1J1", sipType_QEvent_Type, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2, sipType_Qt_MouseButton, &a3, sipType_Qt_MouseButtons, &a4, &a4State, sipType_Qt_KeyboardModifiers, &a5, &a5State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMouseEvent(a0,*a1,*a2,a3,*a4,*a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a4,sipType_Qt_MouseButtons,a4State);
            sipReleaseType(a5,sipType_Qt_KeyboardModifiers,a5State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMouseEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMouseEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQMouseEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QMouseEvent[] = {{248, 255, 1}};


static PyMethodDef methods_QMouseEvent[] = {
    {SIP_MLNAME_CAST(sipName_button), meth_QMouseEvent_button, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_button)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QMouseEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_globalPos), meth_QMouseEvent_globalPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalPos)},
    {SIP_MLNAME_CAST(sipName_globalX), meth_QMouseEvent_globalX, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalX)},
    {SIP_MLNAME_CAST(sipName_globalY), meth_QMouseEvent_globalY, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_globalY)},
    {SIP_MLNAME_CAST(sipName_hasExtendedInfo), meth_QMouseEvent_hasExtendedInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_hasExtendedInfo)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QMouseEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_pos)},
    {SIP_MLNAME_CAST(sipName_posF), meth_QMouseEvent_posF, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_posF)},
    {SIP_MLNAME_CAST(sipName_x), meth_QMouseEvent_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QMouseEvent_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QMouseEvent_y)}
};

PyDoc_STRVAR(doc_QMouseEvent, "\1QMouseEvent(QEvent.Type, QPoint, Qt.MouseButton, Qt.MouseButtons, Qt.KeyboardModifiers)\n"
    "QMouseEvent(QEvent.Type, QPoint, QPoint, Qt.MouseButton, Qt.MouseButtons, Qt.KeyboardModifiers)\n"
    "QMouseEvent(QMouseEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QMouseEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QMouseEvent,
        {0}
    },
    {
        sipNameNr_QMouseEvent,
        {0, 0, 1},
        10, methods_QMouseEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMouseEvent,
    -1,
    -1,
    supers_QMouseEvent,
    0,
    init_QMouseEvent,
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
    dealloc_QMouseEvent,
    0,
    0,
    0,
    release_QMouseEvent,
    cast_QMouseEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
