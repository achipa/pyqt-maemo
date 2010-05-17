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

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 39 "sipQtGuiQTreeWidgetItemIterator.cpp"

#line 207 "/home/maemo/python-qt4-4.7/sip/QtGui/qtreewidget.sip"
#include <qtreewidget.h>
#line 43 "sipQtGuiQTreeWidgetItemIterator.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qtreewidgetitemiterator.sip"
#include <qtreewidgetitemiterator.h>
#line 46 "sipQtGuiQTreeWidgetItemIterator.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qtreewidget.sip"
#include <qtreewidget.h>
#line 49 "sipQtGuiQTreeWidgetItemIterator.cpp"


PyDoc_STRVAR(doc_QTreeWidgetItemIterator_value, "QTreeWidgetItemIterator.value() -> QTreeWidgetItem");

extern "C" {static PyObject *meth_QTreeWidgetItemIterator_value(PyObject *, PyObject *);}
static PyObject *meth_QTreeWidgetItemIterator_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTreeWidgetItemIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTreeWidgetItemIterator, &sipCpp))
        {
            QTreeWidgetItem *sipRes = 0;

#line 76 "/home/maemo/python-qt4-4.7/sip/QtGui/qtreewidgetitemiterator.sip"
        // SIP doesn't support operator* so this is a thin wrapper around it.
        sipRes = sipCpp->operator*();
#line 70 "sipQtGuiQTreeWidgetItemIterator.cpp"

            return sipConvertFromType(sipRes,sipType_QTreeWidgetItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTreeWidgetItemIterator, sipName_value, doc_QTreeWidgetItemIterator_value);

    return NULL;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator___isub__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTreeWidgetItemIterator___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTreeWidgetItemIterator *sipCpp = reinterpret_cast<QTreeWidgetItemIterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTreeWidgetItemIterator::operator-=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QTreeWidgetItemIterator___iadd__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QTreeWidgetItemIterator___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTreeWidgetItemIterator)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTreeWidgetItemIterator *sipCpp = reinterpret_cast<QTreeWidgetItemIterator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTreeWidgetItemIterator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QTreeWidgetItemIterator::operator+=(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTreeWidgetItemIterator(void *, const sipTypeDef *);}
static void *cast_QTreeWidgetItemIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTreeWidgetItemIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTreeWidgetItemIterator(void *, int);}
static void release_QTreeWidgetItemIterator(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QTreeWidgetItemIterator *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTreeWidgetItemIterator(sipSimpleWrapper *);}
static void dealloc_QTreeWidgetItemIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTreeWidgetItemIterator(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QTreeWidgetItemIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTreeWidgetItemIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTreeWidgetItemIterator *sipCpp = 0;

    {
        const QTreeWidgetItemIterator * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTreeWidgetItemIterator, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTreeWidgetItemIterator(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QTreeWidget * a0;
        QTreeWidgetItemIterator::IteratorFlags a1def = QTreeWidgetItemIterator::All;
        QTreeWidgetItemIterator::IteratorFlags * a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J1", sipType_QTreeWidget, &a0, sipType_QTreeWidgetItemIterator_IteratorFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTreeWidgetItemIterator(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QTreeWidgetItemIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    {
        QTreeWidgetItem * a0;
        QTreeWidgetItemIterator::IteratorFlags a1def = QTreeWidgetItemIterator::All;
        QTreeWidgetItemIterator::IteratorFlags * a1 = &a1def;
        int a1State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J8|J1", sipType_QTreeWidgetItem, &a0, sipType_QTreeWidgetItemIterator_IteratorFlags, &a1, &a1State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QTreeWidgetItemIterator(a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_QTreeWidgetItemIterator_IteratorFlags,a1State);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTreeWidgetItemIterator[] = {
    {(void *)slot_QTreeWidgetItemIterator___isub__, isub_slot},
    {(void *)slot_QTreeWidgetItemIterator___iadd__, iadd_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QTreeWidgetItemIterator[] = {
    {SIP_MLNAME_CAST(sipName_value), meth_QTreeWidgetItemIterator_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QTreeWidgetItemIterator_value)}
};

static sipEnumMemberDef enummembers_QTreeWidgetItemIterator[] = {
    {sipName_All, QTreeWidgetItemIterator::All, 715},
    {sipName_Checked, QTreeWidgetItemIterator::Checked, 715},
    {sipName_Disabled, QTreeWidgetItemIterator::Disabled, 715},
    {sipName_DragDisabled, QTreeWidgetItemIterator::DragDisabled, 715},
    {sipName_DragEnabled, QTreeWidgetItemIterator::DragEnabled, 715},
    {sipName_DropDisabled, QTreeWidgetItemIterator::DropDisabled, 715},
    {sipName_DropEnabled, QTreeWidgetItemIterator::DropEnabled, 715},
    {sipName_Editable, QTreeWidgetItemIterator::Editable, 715},
    {sipName_Enabled, QTreeWidgetItemIterator::Enabled, 715},
    {sipName_HasChildren, QTreeWidgetItemIterator::HasChildren, 715},
    {sipName_Hidden, QTreeWidgetItemIterator::Hidden, 715},
    {sipName_NoChildren, QTreeWidgetItemIterator::NoChildren, 715},
    {sipName_NotChecked, QTreeWidgetItemIterator::NotChecked, 715},
    {sipName_NotEditable, QTreeWidgetItemIterator::NotEditable, 715},
    {sipName_NotHidden, QTreeWidgetItemIterator::NotHidden, 715},
    {sipName_NotSelectable, QTreeWidgetItemIterator::NotSelectable, 715},
    {sipName_Selectable, QTreeWidgetItemIterator::Selectable, 715},
    {sipName_Selected, QTreeWidgetItemIterator::Selected, 715},
    {sipName_Unselected, QTreeWidgetItemIterator::Unselected, 715},
    {sipName_UserFlag, QTreeWidgetItemIterator::UserFlag, 715},
};

PyDoc_STRVAR(doc_QTreeWidgetItemIterator, "\1QTreeWidgetItemIterator(QTreeWidgetItemIterator)\n"
    "QTreeWidgetItemIterator(QTreeWidget, QTreeWidgetItemIterator.IteratorFlags flags=QTreeWidgetItemIterator.All)\n"
    "QTreeWidgetItemIterator(QTreeWidgetItem, QTreeWidgetItemIterator.IteratorFlags flags=QTreeWidgetItemIterator.All)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTreeWidgetItemIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QTreeWidgetItemIterator,
        {0}
    },
    {
        sipNameNr_QTreeWidgetItemIterator,
        {0, 0, 1},
        1, methods_QTreeWidgetItemIterator,
        20, enummembers_QTreeWidgetItemIterator,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTreeWidgetItemIterator,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTreeWidgetItemIterator,
    init_QTreeWidgetItemIterator,
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
    dealloc_QTreeWidgetItemIterator,
    0,
    0,
    0,
    release_QTreeWidgetItemIterator,
    cast_QTreeWidgetItemIterator,
    0,
    0,
    0
},
    0,
    0,
    0
};
