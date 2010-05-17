/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:00:59 2010
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

#include "sipAPIQtCore.h"

#line 86 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 39 "sipQtCoreQPersistentModelIndex.cpp"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 43 "sipQtCoreQPersistentModelIndex.cpp"
#line 128 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractitemmodel.sip"
#include <qabstractitemmodel.h>
#line 46 "sipQtCoreQPersistentModelIndex.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 49 "sipQtCoreQPersistentModelIndex.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 52 "sipQtCoreQPersistentModelIndex.cpp"


PyDoc_STRVAR(doc_QPersistentModelIndex_row, "QPersistentModelIndex.row() -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_row(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_row(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->row();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_row, doc_QPersistentModelIndex_row);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_column, "QPersistentModelIndex.column() -> int");

extern "C" {static PyObject *meth_QPersistentModelIndex_column(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->column();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_column, doc_QPersistentModelIndex_column);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_data, "QPersistentModelIndex.data(int role=Qt.DisplayRole) -> QVariant");

extern "C" {static PyObject *meth_QPersistentModelIndex_data(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_data(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = Qt::DisplayRole;
        QPersistentModelIndex *sipCpp;

        static const char *sipKwdList[] = {
            sipName_role,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->data(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_data, doc_QPersistentModelIndex_data);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_flags, "QPersistentModelIndex.flags() -> Qt.ItemFlags");

extern "C" {static PyObject *meth_QPersistentModelIndex_flags(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            Qt::ItemFlags *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new Qt::ItemFlags(sipCpp->flags());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_Qt_ItemFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_flags, doc_QPersistentModelIndex_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_parent, "QPersistentModelIndex.parent() -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_parent(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            QModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QModelIndex(sipCpp->parent());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_parent, doc_QPersistentModelIndex_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_sibling, "QPersistentModelIndex.sibling(int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_sibling(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_sibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QModelIndex(sipCpp->sibling(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_sibling, doc_QPersistentModelIndex_sibling);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_child, "QPersistentModelIndex.child(int, int) -> QModelIndex");

extern "C" {static PyObject *meth_QPersistentModelIndex_child(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_child(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QPersistentModelIndex, &sipCpp, &a0, &a1))
        {
            QModelIndex *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QModelIndex(sipCpp->child(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_child, doc_QPersistentModelIndex_child);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_model, "QPersistentModelIndex.model() -> QAbstractItemModel");

extern "C" {static PyObject *meth_QPersistentModelIndex_model(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            const QAbstractItemModel *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->model();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_model, doc_QPersistentModelIndex_model);

    return NULL;
}


PyDoc_STRVAR(doc_QPersistentModelIndex_isValid, "QPersistentModelIndex.isValid() -> bool");

extern "C" {static PyObject *meth_QPersistentModelIndex_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPersistentModelIndex_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPersistentModelIndex *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPersistentModelIndex, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPersistentModelIndex, sipName_isValid, doc_QPersistentModelIndex_isValid);

    return NULL;
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPersistentModelIndex___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = !sipCpp->QPersistentModelIndex::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static long slot_QPersistentModelIndex___hash__(PyObject *sipSelf);}
static long slot_QPersistentModelIndex___hash__(PyObject *sipSelf)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

#line 116 "/home/maemo/python-qt4-4.7/sip/QtCore/qabstractitemmodel.sip"
        sipRes = qHash(*sipCpp);
#line 383 "sipQtCoreQPersistentModelIndex.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QPersistentModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPersistentModelIndex___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPersistentModelIndex::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPersistentModelIndex::operator!=(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPersistentModelIndex___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPersistentModelIndex::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const QModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPersistentModelIndex::operator==(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPersistentModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QPersistentModelIndex___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QPersistentModelIndex *sipCpp = reinterpret_cast<QPersistentModelIndex *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPersistentModelIndex));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPersistentModelIndex * a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPersistentModelIndex, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QPersistentModelIndex::operator<(*a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QPersistentModelIndex,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPersistentModelIndex(void *, const sipTypeDef *);}
static void *cast_QPersistentModelIndex(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPersistentModelIndex)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPersistentModelIndex(void *, int);}
static void release_QPersistentModelIndex(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QPersistentModelIndex *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QPersistentModelIndex(void *, SIP_SSIZE_T, const void *);}
static void assign_QPersistentModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPersistentModelIndex *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPersistentModelIndex *>(sipSrc);
}


extern "C" {static void *array_QPersistentModelIndex(SIP_SSIZE_T);}
static void *array_QPersistentModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QPersistentModelIndex[sipNrElem];
}


extern "C" {static void *copy_QPersistentModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QPersistentModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPersistentModelIndex(reinterpret_cast<const QPersistentModelIndex *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPersistentModelIndex(sipSimpleWrapper *);}
static void dealloc_QPersistentModelIndex(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPersistentModelIndex(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QPersistentModelIndex(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPersistentModelIndex(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPersistentModelIndex *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPersistentModelIndex();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QModelIndex * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPersistentModelIndex(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPersistentModelIndex * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPersistentModelIndex, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QPersistentModelIndex(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPersistentModelIndex[] = {
    {(void *)slot_QPersistentModelIndex___ge__, ge_slot},
    {(void *)slot_QPersistentModelIndex___hash__, hash_slot},
    {(void *)slot_QPersistentModelIndex___ne__, ne_slot},
    {(void *)slot_QPersistentModelIndex___eq__, eq_slot},
    {(void *)slot_QPersistentModelIndex___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPersistentModelIndex[] = {
    {SIP_MLNAME_CAST(sipName_child), meth_QPersistentModelIndex_child, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_child)},
    {SIP_MLNAME_CAST(sipName_column), meth_QPersistentModelIndex_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_column)},
    {SIP_MLNAME_CAST(sipName_data), (PyCFunction)meth_QPersistentModelIndex_data, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_data)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QPersistentModelIndex_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_flags)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPersistentModelIndex_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_isValid)},
    {SIP_MLNAME_CAST(sipName_model), meth_QPersistentModelIndex_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_model)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QPersistentModelIndex_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_parent)},
    {SIP_MLNAME_CAST(sipName_row), meth_QPersistentModelIndex_row, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_row)},
    {SIP_MLNAME_CAST(sipName_sibling), meth_QPersistentModelIndex_sibling, METH_VARARGS, SIP_MLDOC_CAST(doc_QPersistentModelIndex_sibling)}
};

PyDoc_STRVAR(doc_QPersistentModelIndex, "\1QPersistentModelIndex()\n"
    "QPersistentModelIndex(QModelIndex)\n"
    "QPersistentModelIndex(QPersistentModelIndex)");


pyqt4ClassTypeDef sipTypeDef_QtCore_QPersistentModelIndex = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QPersistentModelIndex,
        {0}
    },
    {
        sipNameNr_QPersistentModelIndex,
        {0, 0, 1},
        9, methods_QPersistentModelIndex,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPersistentModelIndex,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPersistentModelIndex,
    init_QPersistentModelIndex,
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
    dealloc_QPersistentModelIndex,
    assign_QPersistentModelIndex,
    array_QPersistentModelIndex,
    copy_QPersistentModelIndex,
    release_QPersistentModelIndex,
    cast_QPersistentModelIndex,
    0,
    0,
    0
},
    0,
    0,
    0
};
