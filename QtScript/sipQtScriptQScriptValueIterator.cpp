/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:15 2010
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

#include "sipAPIQtScript.h"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtScript/qscriptvalueiterator.sip"
#include <qscriptvalueiterator.h>
#line 39 "sipQtScriptQScriptValueIterator.cpp"

#line 51 "/home/maemo/python-qt4-4.7/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 43 "sipQtScriptQScriptValueIterator.cpp"
#line 39 "/home/maemo/python-qt4-4.7/sip/QtScript/qscriptstring.sip"
#include <qscriptstring.h>
#line 46 "sipQtScriptQScriptValueIterator.cpp"
#line 51 "/home/maemo/python-qt4-4.7/sip/QtScript/qscriptvalue.sip"
#include <qscriptvalue.h>
#line 49 "sipQtScriptQScriptValueIterator.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 52 "sipQtScriptQScriptValueIterator.cpp"


PyDoc_STRVAR(doc_QScriptValueIterator_hasNext, "QScriptValueIterator.hasNext() -> bool");

extern "C" {static PyObject *meth_QScriptValueIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasNext();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_hasNext, doc_QScriptValueIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_next, "QScriptValueIterator.next()");

extern "C" {static PyObject *meth_QScriptValueIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->next();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_next, doc_QScriptValueIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_hasPrevious, "QScriptValueIterator.hasPrevious() -> bool");

extern "C" {static PyObject *meth_QScriptValueIterator_hasPrevious(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_hasPrevious(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->hasPrevious();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_hasPrevious, doc_QScriptValueIterator_hasPrevious);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_previous, "QScriptValueIterator.previous()");

extern "C" {static PyObject *meth_QScriptValueIterator_previous(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_previous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->previous();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_previous, doc_QScriptValueIterator_previous);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_name, "QScriptValueIterator.name() -> QString");

extern "C" {static PyObject *meth_QScriptValueIterator_name(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->name());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_name, doc_QScriptValueIterator_name);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_value, "QScriptValueIterator.value() -> QScriptValue");

extern "C" {static PyObject *meth_QScriptValueIterator_value(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            QScriptValue *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue(sipCpp->value());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_value, doc_QScriptValueIterator_value);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_setValue, "QScriptValueIterator.setValue(QScriptValue)");

extern "C" {static PyObject *meth_QScriptValueIterator_setValue(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QScriptValue * a0;
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QScriptValueIterator, &sipCpp, sipType_QScriptValue, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setValue(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_setValue, doc_QScriptValueIterator_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_flags, "QScriptValueIterator.flags() -> QScriptValue.PropertyFlags");

extern "C" {static PyObject *meth_QScriptValueIterator_flags(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            QScriptValue::PropertyFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptValue::PropertyFlags(sipCpp->flags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptValue_PropertyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_flags, doc_QScriptValueIterator_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_remove, "QScriptValueIterator.remove()");

extern "C" {static PyObject *meth_QScriptValueIterator_remove(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_remove, doc_QScriptValueIterator_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_toFront, "QScriptValueIterator.toFront()");

extern "C" {static PyObject *meth_QScriptValueIterator_toFront(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_toFront(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toFront();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_toFront, doc_QScriptValueIterator_toFront);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_toBack, "QScriptValueIterator.toBack()");

extern "C" {static PyObject *meth_QScriptValueIterator_toBack(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_toBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->toBack();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_toBack, doc_QScriptValueIterator_toBack);

    return NULL;
}


PyDoc_STRVAR(doc_QScriptValueIterator_scriptName, "QScriptValueIterator.scriptName() -> QScriptString");

extern "C" {static PyObject *meth_QScriptValueIterator_scriptName(PyObject *, PyObject *);}
static PyObject *meth_QScriptValueIterator_scriptName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QScriptValueIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScriptValueIterator, &sipCpp))
        {
            QScriptString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QScriptString(sipCpp->scriptName());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QScriptString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QScriptValueIterator, sipName_scriptName, doc_QScriptValueIterator_scriptName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QScriptValueIterator(void *, const sipTypeDef *);}
static void *cast_QScriptValueIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QScriptValueIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScriptValueIterator(void *, int);}
static void release_QScriptValueIterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QScriptValueIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QScriptValueIterator(sipSimpleWrapper *);}
static void dealloc_QScriptValueIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QScriptValueIterator(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QScriptValueIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QScriptValueIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QScriptValueIterator *sipCpp = 0;

    {
        const QScriptValue * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QScriptValue, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QScriptValueIterator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QScriptValueIterator[] = {
    {SIP_MLNAME_CAST(sipName_flags), meth_QScriptValueIterator_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_flags)},
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QScriptValueIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_hasPrevious), meth_QScriptValueIterator_hasPrevious, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_hasPrevious)},
    {SIP_MLNAME_CAST(sipName_name), meth_QScriptValueIterator_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_name)},
    {SIP_MLNAME_CAST(sipName_next), meth_QScriptValueIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_next)},
    {SIP_MLNAME_CAST(sipName_previous), meth_QScriptValueIterator_previous, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_previous)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QScriptValueIterator_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_remove)},
    {SIP_MLNAME_CAST(sipName_scriptName), meth_QScriptValueIterator_scriptName, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_scriptName)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QScriptValueIterator_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_setValue)},
    {SIP_MLNAME_CAST(sipName_toBack), meth_QScriptValueIterator_toBack, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_toBack)},
    {SIP_MLNAME_CAST(sipName_toFront), meth_QScriptValueIterator_toFront, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_toFront)},
    {SIP_MLNAME_CAST(sipName_value), meth_QScriptValueIterator_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QScriptValueIterator_value)}
};

PyDoc_STRVAR(doc_QScriptValueIterator, "\1QScriptValueIterator(QScriptValue)");


pyqt4ClassTypeDef sipTypeDef_QtScript_QScriptValueIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QScriptValueIterator,
        {0}
    },
    {
        sipNameNr_QScriptValueIterator,
        {0, 0, 1},
        12, methods_QScriptValueIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QScriptValueIterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QScriptValueIterator,
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
    dealloc_QScriptValueIterator,
    0,
    0,
    0,
    release_QScriptValueIterator,
    cast_QScriptValueIterator,
    0,
    0,
    0
},
    0,
    0,
    0
};
