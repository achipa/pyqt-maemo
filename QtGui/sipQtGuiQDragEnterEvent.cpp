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

#line 607 "/home/maemo/python-qt4-4.7/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 39 "sipQtGuiQDragEnterEvent.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 43 "sipQtGuiQDragEnterEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 46 "sipQtGuiQDragEnterEvent.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 49 "sipQtGuiQDragEnterEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 52 "sipQtGuiQDragEnterEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 55 "sipQtGuiQDragEnterEvent.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 58 "sipQtGuiQDragEnterEvent.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 61 "sipQtGuiQDragEnterEvent.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 64 "sipQtGuiQDragEnterEvent.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 67 "sipQtGuiQDragEnterEvent.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 70 "sipQtGuiQDragEnterEvent.cpp"


class sipQDragEnterEvent : public QDragEnterEvent
{
public:
    sipQDragEnterEvent(const QPoint&,Qt::DropActions,const QMimeData *,Qt::MouseButtons,Qt::KeyboardModifiers);
    sipQDragEnterEvent(const QDragEnterEvent&);
    virtual ~sipQDragEnterEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    const char * format(int) const;
    QByteArray encodedData(const char *) const;
    bool provides(const char *) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDragEnterEvent(const sipQDragEnterEvent &);
    sipQDragEnterEvent &operator = (const sipQDragEnterEvent &);

    char sipPyMethods[3];
};

sipQDragEnterEvent::sipQDragEnterEvent(const QPoint& a0,Qt::DropActions a1,const QMimeData *a2,Qt::MouseButtons a3,Qt::KeyboardModifiers a4): QDragEnterEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDragEnterEvent::sipQDragEnterEvent(const QDragEnterEvent& a0): QDragEnterEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDragEnterEvent::~sipQDragEnterEvent()
{
    sipCommonDtor(sipPySelf);
}

const char * sipQDragEnterEvent::format(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_format);

    if (!meth)
        return QDropEvent::format(a0);

    extern const char * sipVH_QtGui_146(sip_gilstate_t,PyObject *,int,int,sipSimpleWrapper *);

    return sipVH_QtGui_146(sipGILState,meth,a0,44,sipPySelf);
}

QByteArray sipQDragEnterEvent::encodedData(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_encodedData);

    if (!meth)
        return QDropEvent::encodedData(a0);

    extern QByteArray sipVH_QtGui_144(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_144(sipGILState,meth,a0);
}

bool sipQDragEnterEvent::provides(const char *a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_provides);

    if (!meth)
        return QDropEvent::provides(a0);

    extern bool sipVH_QtGui_145(sip_gilstate_t,PyObject *,const char *);

    return sipVH_QtGui_145(sipGILState,meth,a0);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDragEnterEvent(void *, const sipTypeDef *);}
static void *cast_QDragEnterEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDragEnterEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QDragMoveEvent)->ctd_cast((QDragMoveEvent *)(QDragEnterEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDragEnterEvent(void *, int);}
static void release_QDragEnterEvent(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDragEnterEvent *>(sipCppV);
    else
        delete reinterpret_cast<QDragEnterEvent *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QDragEnterEvent(sipSimpleWrapper *);}
static void dealloc_QDragEnterEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDragEnterEvent *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDragEnterEvent(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QDragEnterEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QDragEnterEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDragEnterEvent *sipCpp = 0;

    {
        const QPoint * a0;
        Qt::DropActions * a1;
        int a1State = 0;
        const QMimeData * a2;
        Qt::MouseButtons * a3;
        int a3State = 0;
        Qt::KeyboardModifiers * a4;
        int a4State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J1J8J1J1", sipType_QPoint, &a0, sipType_Qt_DropActions, &a1, &a1State, sipType_QMimeData, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDragEnterEvent(*a0,*a1,a2,*a3,*a4);
            Py_END_ALLOW_THREADS
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDragEnterEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDragEnterEvent, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQDragEnterEvent(*a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDragEnterEvent[] = {{101, 255, 1}};

PyDoc_STRVAR(doc_QDragEnterEvent, "\1QDragEnterEvent(QPoint, Qt.DropActions, QMimeData, Qt.MouseButtons, Qt.KeyboardModifiers)\n"
    "QDragEnterEvent(QDragEnterEvent)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QDragEnterEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QDragEnterEvent,
        {0}
    },
    {
        sipNameNr_QDragEnterEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDragEnterEvent,
    -1,
    -1,
    supers_QDragEnterEvent,
    0,
    init_QDragEnterEvent,
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
    dealloc_QDragEnterEvent,
    0,
    0,
    0,
    release_QDragEnterEvent,
    cast_QDragEnterEvent,
    0,
    0,
    0
},
    0,
    0,
    0
};
