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

#line 350 "/home/maemo/python-qt4-4.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQKeyEvent.cpp"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 43 "sipQtGuiQKeyEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQKeyEvent.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 49 "sipQtGuiQKeyEvent.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qkeysequence.sip"
#include <qkeysequence.h>
#line 52 "sipQtGuiQKeyEvent.cpp"


class sipQKeyEvent : public QKeyEvent
{
public:
    sipQKeyEvent(QEvent::Type,int,Qt::KeyboardModifiers,const QString&,bool,ushort);
    sipQKeyEvent(const QKeyEvent&);
    ~sipQKeyEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQKeyEvent(const sipQKeyEvent &);
    sipQKeyEvent &operator = (const sipQKeyEvent &);
};

sipQKeyEvent::sipQKeyEvent(QEvent::Type a0,int a1,Qt::KeyboardModifiers a2,const QString& a3,bool a4,ushort a5): QKeyEvent(a0,a1,a2,a3,a4,a5), sipPySelf(0)
{
}

sipQKeyEvent::sipQKeyEvent(const QKeyEvent& a0): QKeyEvent(a0), sipPySelf(0)
{
}

sipQKeyEvent::~sipQKeyEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QKeyEvent_key, "QKeyEvent.key() -> int");

extern "C" {static PyObject *meth_QKeyEvent_key(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->key();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_key, doc_QKeyEvent_key);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_modifiers, "QKeyEvent.modifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QKeyEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            Qt::KeyboardModifiers *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_modifiers, doc_QKeyEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_text, "QKeyEvent.text() -> QString");

extern "C" {static PyObject *meth_QKeyEvent_text(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->text());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_text, doc_QKeyEvent_text);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_isAutoRepeat, "QKeyEvent.isAutoRepeat() -> bool");

extern "C" {static PyObject *meth_QKeyEvent_isAutoRepeat(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_isAutoRepeat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isAutoRepeat();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_isAutoRepeat, doc_QKeyEvent_isAutoRepeat);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_count, "QKeyEvent.count() -> int");

extern "C" {static PyObject *meth_QKeyEvent_count(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_count, doc_QKeyEvent_count);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_matches, "QKeyEvent.matches(QKeySequence.StandardKey) -> bool");

extern "C" {static PyObject *meth_QKeyEvent_matches(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_matches(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeySequence::StandardKey a0;
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QKeyEvent, &sipCpp, sipType_QKeySequence_StandardKey, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->matches(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_matches, doc_QKeyEvent_matches);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_nativeModifiers, "QKeyEvent.nativeModifiers() -> int");

extern "C" {static PyObject *meth_QKeyEvent_nativeModifiers(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_nativeModifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nativeModifiers();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_nativeModifiers, doc_QKeyEvent_nativeModifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_nativeScanCode, "QKeyEvent.nativeScanCode() -> int");

extern "C" {static PyObject *meth_QKeyEvent_nativeScanCode(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_nativeScanCode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nativeScanCode();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_nativeScanCode, doc_QKeyEvent_nativeScanCode);

    return NULL;
}


PyDoc_STRVAR(doc_QKeyEvent_nativeVirtualKey, "QKeyEvent.nativeVirtualKey() -> int");

extern "C" {static PyObject *meth_QKeyEvent_nativeVirtualKey(PyObject *, PyObject *);}
static PyObject *meth_QKeyEvent_nativeVirtualKey(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QKeyEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QKeyEvent, &sipCpp))
        {
            quint32 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->nativeVirtualKey();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QKeyEvent, sipName_nativeVirtualKey, doc_QKeyEvent_nativeVirtualKey);

    return NULL;
}


extern "C" {static PyObject *slot_QKeyEvent___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QKeyEvent___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeyEvent *sipCpp = reinterpret_cast<QKeyEvent *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeyEvent));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QKeySequence::StandardKey a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QKeySequence_StandardKey, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !operator==(sipCpp, a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QKeyEvent,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QKeyEvent___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QKeyEvent___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QKeyEvent *sipCpp = reinterpret_cast<QKeyEvent *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QKeyEvent));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QKeySequence::StandardKey a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1E", sipType_QKeySequence_StandardKey, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = operator==(sipCpp, a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QKeyEvent,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QKeyEvent(void *, const sipTypeDef *);}
static void *cast_QKeyEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QKeyEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QInputEvent)->ctd_cast((QInputEvent *)(QKeyEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QKeyEvent(void *, int);}
static void release_QKeyEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQKeyEvent *>(sipCppV);
    else
        delete reinterpret_cast<QKeyEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QKeyEvent(sipSimpleWrapper *);}
static void dealloc_QKeyEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQKeyEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QKeyEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QKeyEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QKeyEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQKeyEvent *sipCpp = 0;

    {
        QEvent::Type a0;
        int a1;
        Qt::KeyboardModifiers * a2;
        int a2State = 0;
        const QString& a3def = QString();
        const QString * a3 = &a3def;
        int a3State = 0;
        bool a4 = 0;
        ushort a5 = 1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_text,
            sipName_autorep,
            sipName_count,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "EiJ1|J1bt", sipType_QEvent_Type, &a0, &a1, sipType_Qt_KeyboardModifiers, &a2, &a2State, sipType_QString,&a3, &a3State, &a4, &a5))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQKeyEvent(a0,a1,*a2,*a3,a4,a5);
            Py_END_ALLOW_THREADS
            sipReleaseType(a2,sipType_Qt_KeyboardModifiers,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QKeyEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QKeyEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQKeyEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QKeyEvent[] = {{248, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QKeyEvent[] = {
    {(void *)slot_QKeyEvent___ne__, ne_slot},
    {(void *)slot_QKeyEvent___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QKeyEvent[] = {
    {SIP_MLNAME_CAST(sipName_count), meth_QKeyEvent_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_count)},
    {SIP_MLNAME_CAST(sipName_isAutoRepeat), meth_QKeyEvent_isAutoRepeat, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_isAutoRepeat)},
    {SIP_MLNAME_CAST(sipName_key), meth_QKeyEvent_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_key)},
    {SIP_MLNAME_CAST(sipName_matches), meth_QKeyEvent_matches, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_matches)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QKeyEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_nativeModifiers), meth_QKeyEvent_nativeModifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_nativeModifiers)},
    {SIP_MLNAME_CAST(sipName_nativeScanCode), meth_QKeyEvent_nativeScanCode, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_nativeScanCode)},
    {SIP_MLNAME_CAST(sipName_nativeVirtualKey), meth_QKeyEvent_nativeVirtualKey, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_nativeVirtualKey)},
    {SIP_MLNAME_CAST(sipName_text), meth_QKeyEvent_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QKeyEvent_text)}
};

PyDoc_STRVAR(doc_QKeyEvent, "\1QKeyEvent(QEvent.Type, int, Qt.KeyboardModifiers, QString text=QString(), bool autorep=False, int count=1)\n"
    "QKeyEvent(QKeyEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QKeyEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QKeyEvent,
        {0}
    },
    {
        sipNameNr_QKeyEvent,
        {0, 0, 1},
        9, methods_QKeyEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QKeyEvent,
    -1,
    -1,
    supers_QKeyEvent,
    slots_QKeyEvent,
    init_QKeyEvent,
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
    dealloc_QKeyEvent,
    0,
    0,
    0,
    release_QKeyEvent,
    cast_QKeyEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
