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

#line 34 "/home/maemo/python-qt4-4.7/sip/QtDesigner/qpydesignertaskmenuextension.sip"
#include <qpydesignertaskmenuextension.h>
#line 39 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"

#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 43 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 46 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 49 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 52 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 55 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 58 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 64 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 67 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 70 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 73 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 76 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 79 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qaction.sip"
#include <qaction.h>
#line 82 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 85 "sipQtDesignerQPyDesignerTaskMenuExtension.cpp"


class sipQPyDesignerTaskMenuExtension : public QPyDesignerTaskMenuExtension
{
public:
    sipQPyDesignerTaskMenuExtension(QObject *);
    virtual ~sipQPyDesignerTaskMenuExtension();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);
    QList<QAction *> taskActions() const;
    QAction * preferredEditAction() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQPyDesignerTaskMenuExtension(const sipQPyDesignerTaskMenuExtension &);
    sipQPyDesignerTaskMenuExtension &operator = (const sipQPyDesignerTaskMenuExtension &);

    char sipPyMethods[9];
};

sipQPyDesignerTaskMenuExtension::sipQPyDesignerTaskMenuExtension(QObject *a0): QPyDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPyDesignerTaskMenuExtension::~sipQPyDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPyDesignerTaskMenuExtension::metaObject() const
{
    return sip_QtDesigner_qt_metaobject(sipPySelf,sipType_QPyDesignerTaskMenuExtension);
}

int sipQPyDesignerTaskMenuExtension::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPyDesignerTaskMenuExtension::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtDesigner_qt_metacall(sipPySelf,sipType_QPyDesignerTaskMenuExtension,_c,_id,_a);

    return _id;
}

void *sipQPyDesignerTaskMenuExtension::qt_metacast(const char *_clname)
{
    return (sip_QtDesigner_qt_metacast && sip_QtDesigner_qt_metacast(sipPySelf,sipType_QPyDesignerTaskMenuExtension,_clname)) ? this : QPyDesignerTaskMenuExtension::qt_metacast(_clname);
}

bool sipQPyDesignerTaskMenuExtension::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_12)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_12)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[12]))(sipGILState,meth,a0);
}

bool sipQPyDesignerTaskMenuExtension::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_20)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_20)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[20]))(sipGILState,meth,a0,a1);
}

void sipQPyDesignerTaskMenuExtension::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_3)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_3)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[3]))(sipGILState,meth,a0);
}

void sipQPyDesignerTaskMenuExtension::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_19)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_19)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[19]))(sipGILState,meth,a0);
}

void sipQPyDesignerTaskMenuExtension::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_18)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[18]))(sipGILState,meth,a0);
}

void sipQPyDesignerTaskMenuExtension::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQPyDesignerTaskMenuExtension::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtDesigner_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

QList<QAction *> sipQPyDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,sipName_QPyDesignerTaskMenuExtension,sipName_taskActions);

    if (!meth)
        return QList<QAction *>();

    typedef QList<QAction *> (*sipVH_QtGui_169)(sip_gilstate_t,PyObject *);

    return ((sipVH_QtGui_169)(sipModuleAPI_QtDesigner_QtGui->em_virthandlers[169]))(sipGILState,meth);
}

QAction * sipQPyDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!meth)
        return QDesignerTaskMenuExtension::preferredEditAction();

    extern QAction * sipVH_QtDesigner_0(sip_gilstate_t,PyObject *);

    return sipVH_QtDesigner_0(sipGILState,meth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPyDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QPyDesignerTaskMenuExtension(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPyDesignerTaskMenuExtension)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPyDesignerTaskMenuExtension *)ptr,targetType)) != NULL)
        return res;

    if ((res = ((const sipClassTypeDef *)sipType_QDesignerTaskMenuExtension)->ctd_cast((QDesignerTaskMenuExtension *)(QPyDesignerTaskMenuExtension *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPyDesignerTaskMenuExtension(void *, int);}
static void release_QPyDesignerTaskMenuExtension(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQPyDesignerTaskMenuExtension *>(sipCppV);
    else
        delete reinterpret_cast<QPyDesignerTaskMenuExtension *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPyDesignerTaskMenuExtension *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPyDesignerTaskMenuExtension(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QPyDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QPyDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPyDesignerTaskMenuExtension *sipCpp = 0;

    {
        QObject * a0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "JH", sipType_QObject, &a0, sipOwner))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQPyDesignerTaskMenuExtension(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPyDesignerTaskMenuExtension[] = {{111, 0, 0}, {19, 255, 1}};

PyDoc_STRVAR(doc_QPyDesignerTaskMenuExtension, "\1QPyDesignerTaskMenuExtension(QObject parent)");


pyqt4ClassTypeDef sipTypeDef_QtDesigner_QPyDesignerTaskMenuExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0}
    },
    {
        sipNameNr_QPyDesignerTaskMenuExtension,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPyDesignerTaskMenuExtension,
    -1,
    -1,
    supers_QPyDesignerTaskMenuExtension,
    0,
    init_QPyDesignerTaskMenuExtension,
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
    dealloc_QPyDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QPyDesignerTaskMenuExtension,
    cast_QPyDesignerTaskMenuExtension,
    0,
    0,
    0
},
    &QPyDesignerTaskMenuExtension::staticMetaObject,
    0,
    0
};