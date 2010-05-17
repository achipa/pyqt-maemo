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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtDesigner/abstractformbuilder.sip"
#include <abstractformbuilder.h>
#line 39 "sipQtDesignerQAbstractFormBuilder.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qdir.sip"
#include <qdir.h>
#line 43 "sipQtDesignerQAbstractFormBuilder.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qiodevice.sip"
#include <qiodevice.h>
#line 46 "sipQtDesignerQAbstractFormBuilder.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 49 "sipQtDesignerQAbstractFormBuilder.cpp"


class sipQAbstractFormBuilder : public QAbstractFormBuilder
{
public:
    sipQAbstractFormBuilder();
    virtual ~sipQAbstractFormBuilder();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QWidget * load(QIODevice *,QWidget *);
    void save(QIODevice *,QWidget *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractFormBuilder(const sipQAbstractFormBuilder &);
    sipQAbstractFormBuilder &operator = (const sipQAbstractFormBuilder &);

    char sipPyMethods[2];
};

sipQAbstractFormBuilder::sipQAbstractFormBuilder(): QAbstractFormBuilder(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractFormBuilder::~sipQAbstractFormBuilder()
{
    sipCommonDtor(sipPySelf);
}

QWidget * sipQAbstractFormBuilder::load(QIODevice *a0,QWidget *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_load);

    if (!meth)
        return QAbstractFormBuilder::load(a0,a1);

    extern QWidget * sipVH_QtDesigner_40(sip_gilstate_t,PyObject *,QIODevice *,QWidget *);

    return sipVH_QtDesigner_40(sipGILState,meth,a0,a1);
}

void sipQAbstractFormBuilder::save(QIODevice *a0,QWidget *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_save);

    if (!meth)
    {
        QAbstractFormBuilder::save(a0,a1);
        return;
    }

    extern void sipVH_QtDesigner_39(sip_gilstate_t,PyObject *,QIODevice *,QWidget *);

    sipVH_QtDesigner_39(sipGILState,meth,a0,a1);
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_load, "QAbstractFormBuilder.load(QIODevice, QWidget parent=None) -> QWidget");

extern "C" {static PyObject *meth_QAbstractFormBuilder_load(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_load(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice * a0;
        QWidget * a1 = 0;
        sipWrapper *sipOwner = 0;
        QAbstractFormBuilder *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ8|JH", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QIODevice, &a0, sipType_QWidget, &a1, &sipOwner))
        {
            QWidget *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QAbstractFormBuilder::load(a0,a1) : sipCpp->load(a0,a1));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QWidget,(PyObject *)sipOwner);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_load, doc_QAbstractFormBuilder_load);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_save, "QAbstractFormBuilder.save(QIODevice, QWidget)");

extern "C" {static PyObject *meth_QAbstractFormBuilder_save(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_save(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIODevice * a0;
        QWidget * a1;
        QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J8", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QIODevice, &a0, sipType_QWidget, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp->QAbstractFormBuilder::save(a0,a1) : sipCpp->save(a0,a1));
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_save, doc_QAbstractFormBuilder_save);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_setWorkingDirectory, "QAbstractFormBuilder.setWorkingDirectory(QDir)");

extern "C" {static PyObject *meth_QAbstractFormBuilder_setWorkingDirectory(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_setWorkingDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDir * a0;
        QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp, sipType_QDir, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setWorkingDirectory(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_setWorkingDirectory, doc_QAbstractFormBuilder_setWorkingDirectory);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractFormBuilder_workingDirectory, "QAbstractFormBuilder.workingDirectory() -> QDir");

extern "C" {static PyObject *meth_QAbstractFormBuilder_workingDirectory(PyObject *, PyObject *);}
static PyObject *meth_QAbstractFormBuilder_workingDirectory(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractFormBuilder *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractFormBuilder, &sipCpp))
        {
            QDir *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QDir(sipCpp->workingDirectory());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QDir,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractFormBuilder, sipName_workingDirectory, doc_QAbstractFormBuilder_workingDirectory);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractFormBuilder(void *, const sipTypeDef *);}
static void *cast_QAbstractFormBuilder(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractFormBuilder)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractFormBuilder(void *, int);}
static void release_QAbstractFormBuilder(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractFormBuilder *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractFormBuilder *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QAbstractFormBuilder(sipSimpleWrapper *);}
static void dealloc_QAbstractFormBuilder(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractFormBuilder *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractFormBuilder(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QAbstractFormBuilder(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QAbstractFormBuilder(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractFormBuilder *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQAbstractFormBuilder();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractFormBuilder[] = {
    {SIP_MLNAME_CAST(sipName_load), (PyCFunction)meth_QAbstractFormBuilder_load, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_load)},
    {SIP_MLNAME_CAST(sipName_save), meth_QAbstractFormBuilder_save, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_save)},
    {SIP_MLNAME_CAST(sipName_setWorkingDirectory), meth_QAbstractFormBuilder_setWorkingDirectory, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_setWorkingDirectory)},
    {SIP_MLNAME_CAST(sipName_workingDirectory), meth_QAbstractFormBuilder_workingDirectory, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractFormBuilder_workingDirectory)}
};

PyDoc_STRVAR(doc_QAbstractFormBuilder, "\1QAbstractFormBuilder()");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QAbstractFormBuilder = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QAbstractFormBuilder,
        {0}
    },
    {
        sipNameNr_QAbstractFormBuilder,
        {0, 0, 1},
        4, methods_QAbstractFormBuilder,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractFormBuilder,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QAbstractFormBuilder,
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
    dealloc_QAbstractFormBuilder,
    0,
    0,
    0,
    release_QAbstractFormBuilder,
    cast_QAbstractFormBuilder,
    0,
    0,
    0
},
    0,
    0,
    0
};
