/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.10-snapshot-20100108 on Tue Feb 16 16:32:13 2010
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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtDesigner/taskmenu.sip"
#include <taskmenu.h>
#line 39 "sipQtDesignerQDesignerTaskMenuExtension.cpp"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 43 "sipQtDesignerQDesignerTaskMenuExtension.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 46 "sipQtDesignerQDesignerTaskMenuExtension.cpp"


class sipQDesignerTaskMenuExtension : public QDesignerTaskMenuExtension
{
public:
    sipQDesignerTaskMenuExtension();
    sipQDesignerTaskMenuExtension(const QDesignerTaskMenuExtension&);
    virtual ~sipQDesignerTaskMenuExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QList<QAction *> taskActions() const;
    QAction * preferredEditAction() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerTaskMenuExtension(const sipQDesignerTaskMenuExtension &);
    sipQDesignerTaskMenuExtension &operator = (const sipQDesignerTaskMenuExtension &);

    char sipPyMethods[2];
};

sipQDesignerTaskMenuExtension::sipQDesignerTaskMenuExtension(): QDesignerTaskMenuExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerTaskMenuExtension::sipQDesignerTaskMenuExtension(const QDesignerTaskMenuExtension& a0): QDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerTaskMenuExtension::~sipQDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

QList<QAction *> sipQDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QDesignerTaskMenuExtension,sipName_taskActions);

    if (!meth)
        return QList<QAction *>();

    typedef QList<QAction *> (*sipVH_QtGui_169)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtGui_169)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[169]))(sipGILState,meth);
}

QAction * sipQDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!meth)
        return QDesignerTaskMenuExtension::preferredEditAction();

    extern QAction * sipVH_QtDesigner_0(sip_gilstate_t,PyObject *);

    return sipVH_QtDesigner_0(sipGILState,meth);
}


PyDoc_STRVAR(doc_QDesignerTaskMenuExtension_taskActions, "QDesignerTaskMenuExtension.taskActions() -> list-of-QAction");

extern "C" {static PyObject *meth_QDesignerTaskMenuExtension_taskActions(PyObject *, PyObject *);}
static PyObject *meth_QDesignerTaskMenuExtension_taskActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QDesignerTaskMenuExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerTaskMenuExtension, &sipCpp))
        {
            QList<QAction *> *sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerTaskMenuExtension, sipName_taskActions);
                return NULL;
            }

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QList<QAction *>(sipCpp->taskActions());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QList_0101QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerTaskMenuExtension, sipName_taskActions, doc_QDesignerTaskMenuExtension_taskActions);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerTaskMenuExtension_preferredEditAction, "QDesignerTaskMenuExtension.preferredEditAction() -> QAction");

extern "C" {static PyObject *meth_QDesignerTaskMenuExtension_preferredEditAction(PyObject *, PyObject *);}
static PyObject *meth_QDesignerTaskMenuExtension_preferredEditAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDesignerTaskMenuExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerTaskMenuExtension, &sipCpp))
        {
            QAction *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp->QDesignerTaskMenuExtension::preferredEditAction() : sipCpp->preferredEditAction());
            Py_END_ALLOW_THREADS

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerTaskMenuExtension, sipName_preferredEditAction, doc_QDesignerTaskMenuExtension_preferredEditAction);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QDesignerTaskMenuExtension(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerTaskMenuExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerTaskMenuExtension(void *, int);}
static void release_QDesignerTaskMenuExtension(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerTaskMenuExtension *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerTaskMenuExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerTaskMenuExtension *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerTaskMenuExtension(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerTaskMenuExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerTaskMenuExtension();
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerTaskMenuExtension * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerTaskMenuExtension, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDesignerTaskMenuExtension(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerTaskMenuExtension[] = {
    {SIP_MLNAME_CAST(sipName_preferredEditAction), meth_QDesignerTaskMenuExtension_preferredEditAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerTaskMenuExtension_preferredEditAction)},
    {SIP_MLNAME_CAST(sipName_taskActions), meth_QDesignerTaskMenuExtension_taskActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerTaskMenuExtension_taskActions)}
};

PyDoc_STRVAR(doc_QDesignerTaskMenuExtension, "\1QDesignerTaskMenuExtension()\n"
    "QDesignerTaskMenuExtension(QDesignerTaskMenuExtension)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QDesignerTaskMenuExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerTaskMenuExtension,
        {0}
    },
    {
        sipNameNr_QDesignerTaskMenuExtension,
        {0, 0, 1},
        2, methods_QDesignerTaskMenuExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerTaskMenuExtension,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QDesignerTaskMenuExtension,
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
    dealloc_QDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QDesignerTaskMenuExtension,
    cast_QDesignerTaskMenuExtension,
    0,
    0,
    0
},
    0,
    0,
    0
};
