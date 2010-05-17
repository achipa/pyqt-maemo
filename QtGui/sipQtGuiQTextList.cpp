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

#line 37 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextlist.sip"
#include <qtextlist.h>
#line 39 "sipQtGuiQTextList.cpp"

#line 66 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 43 "sipQtGuiQTextList.cpp"
#line 483 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 46 "sipQtGuiQTextList.cpp"
#line 144 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 170 "/home/maemo/python-qt4-4.7/sip/QtGui/qtextobject.sip"
#include <qtextobject.h>
#line 51 "sipQtGuiQTextList.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 54 "sipQtGuiQTextList.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 57 "sipQtGuiQTextList.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 60 "sipQtGuiQTextList.cpp"
#line 318 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 63 "sipQtGuiQTextList.cpp"
#line 305 "/home/maemo/python-qt4-4.7/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 66 "sipQtGuiQTextList.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qobject.sip"
#include <qobject.h>
#line 69 "sipQtGuiQTextList.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 72 "sipQtGuiQTextList.cpp"
#line 38 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 75 "sipQtGuiQTextList.cpp"
#line 43 "/home/maemo/python-qt4-4.7/sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 78 "sipQtGuiQTextList.cpp"
#line 40 "/home/maemo/python-qt4-4.7/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "sipQtGuiQTextList.cpp"
#line 125 "/home/maemo/python-qt4-4.7/sip/QtCore/qlist.sip"
#include <qlist.h>
#line 84 "sipQtGuiQTextList.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qthread.sip"
#include <qthread.h>
#line 87 "sipQtGuiQTextList.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 90 "sipQtGuiQTextList.cpp"
#line 37 "/home/maemo/python-qt4-4.7/sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 93 "sipQtGuiQTextList.cpp"


class sipQTextList : public QTextList
{
public:
    sipQTextList(QTextDocument *);
    virtual ~sipQTextList();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void blockInserted(const QTextBlock&);
    void blockRemoved(const QTextBlock&);
    void blockFormatChanged(const QTextBlock&);
    bool event(QEvent *);
    bool eventFilter(QObject *,QEvent *);
    void timerEvent(QTimerEvent *);
    void childEvent(QChildEvent *);
    void customEvent(QEvent *);
    void connectNotify(const char *);
    void disconnectNotify(const char *);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextList(const sipQTextList &);
    sipQTextList &operator = (const sipQTextList &);

    char sipPyMethods[10];
};

sipQTextList::sipQTextList(QTextDocument *a0): QTextList(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextList::~sipQTextList()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQTextList::metaObject() const
{
    return sip_QtGui_qt_metaobject(sipPySelf,sipType_QTextList);
}

int sipQTextList::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QTextList::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QTextList,_c,_id,_a);

    return _id;
}

void *sipQTextList::qt_metacast(const char *_clname)
{
    return (sip_QtGui_qt_metacast && sip_QtGui_qt_metacast(sipPySelf,sipType_QTextList,_clname)) ? this : QTextList::qt_metacast(_clname);
}

void sipQTextList::blockInserted(const QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_blockInserted);

    if (!meth)
    {
        QTextBlockGroup::blockInserted(a0);
        return;
    }

    extern void sipVH_QtGui_58(sip_gilstate_t,PyObject *,const QTextBlock&);

    sipVH_QtGui_58(sipGILState,meth,a0);
}

void sipQTextList::blockRemoved(const QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_blockRemoved);

    if (!meth)
    {
        QTextBlockGroup::blockRemoved(a0);
        return;
    }

    extern void sipVH_QtGui_58(sip_gilstate_t,PyObject *,const QTextBlock&);

    sipVH_QtGui_58(sipGILState,meth,a0);
}

void sipQTextList::blockFormatChanged(const QTextBlock& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_blockFormatChanged);

    if (!meth)
    {
        QTextBlockGroup::blockFormatChanged(a0);
        return;
    }

    extern void sipVH_QtGui_58(sip_gilstate_t,PyObject *,const QTextBlock&);

    sipVH_QtGui_58(sipGILState,meth,a0);
}

bool sipQTextList::event(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_event);

    if (!meth)
        return QObject::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t,PyObject *,QEvent *);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtGui_QtCore->em_virthandlers[5]))(sipGILState,meth,a0);
}

bool sipQTextList::eventFilter(QObject *a0,QEvent *a1)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_eventFilter);

    if (!meth)
        return QObject::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_18)(sip_gilstate_t,PyObject *,QObject *,QEvent *);

    return ((sipVH_QtCore_18)(sipModuleAPI_QtGui_QtCore->em_virthandlers[18]))(sipGILState,meth,a0,a1);
}

void sipQTextList::timerEvent(QTimerEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_timerEvent);

    if (!meth)
    {
        QObject::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t,PyObject *,QTimerEvent *);

    ((sipVH_QtCore_9)(sipModuleAPI_QtGui_QtCore->em_virthandlers[9]))(sipGILState,meth,a0);
}

void sipQTextList::childEvent(QChildEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_childEvent);

    if (!meth)
    {
        QObject::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t,PyObject *,QChildEvent *);

    ((sipVH_QtCore_25)(sipModuleAPI_QtGui_QtCore->em_virthandlers[25]))(sipGILState,meth,a0);
}

void sipQTextList::customEvent(QEvent *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_customEvent);

    if (!meth)
    {
        QObject::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_17)(sip_gilstate_t,PyObject *,QEvent *);

    ((sipVH_QtCore_17)(sipModuleAPI_QtGui_QtCore->em_virthandlers[17]))(sipGILState,meth,a0);
}

void sipQTextList::connectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_connectNotify);

    if (!meth)
    {
        QObject::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}

void sipQTextList::disconnectNotify(const char *a0)
{
    sip_gilstate_t sipGILState;
    PyObject *meth;

    meth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_disconnectNotify);

    if (!meth)
    {
        QObject::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_24)(sip_gilstate_t,PyObject *,const char *);

    ((sipVH_QtCore_24)(sipModuleAPI_QtGui_QtCore->em_virthandlers[24]))(sipGILState,meth,a0);
}


PyDoc_STRVAR(doc_QTextList_count, "QTextList.count() -> int");

extern "C" {static PyObject *meth_QTextList_count(PyObject *, PyObject *);}
static PyObject *meth_QTextList_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextList, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->count();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_count, doc_QTextList_count);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_isEmpty, "QTextList.isEmpty() -> bool");

extern "C" {static PyObject *meth_QTextList_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QTextList_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextList, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isEmpty();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_isEmpty, doc_QTextList_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_item, "QTextList.item(int) -> QTextBlock");

extern "C" {static PyObject *meth_QTextList_item(PyObject *, PyObject *);}
static PyObject *meth_QTextList_item(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextList, &sipCpp, &a0))
        {
            QTextBlock *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextBlock(sipCpp->item(a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextBlock,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_item, doc_QTextList_item);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_itemNumber, "QTextList.itemNumber(QTextBlock) -> int");

extern "C" {static PyObject *meth_QTextList_itemNumber(PyObject *, PyObject *);}
static PyObject *meth_QTextList_itemNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextList, &sipCpp, sipType_QTextBlock, &a0))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->itemNumber(*a0);
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_itemNumber, doc_QTextList_itemNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_itemText, "QTextList.itemText(QTextBlock) -> QString");

extern "C" {static PyObject *meth_QTextList_itemText(PyObject *, PyObject *);}
static PyObject *meth_QTextList_itemText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextList, &sipCpp, sipType_QTextBlock, &a0))
        {
            QString *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QString(sipCpp->itemText(*a0));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_itemText, doc_QTextList_itemText);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_removeItem, "QTextList.removeItem(int)");

extern "C" {static PyObject *meth_QTextList_removeItem(PyObject *, PyObject *);}
static PyObject *meth_QTextList_removeItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QTextList, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->removeItem(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_removeItem, doc_QTextList_removeItem);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_remove, "QTextList.remove(QTextBlock)");

extern "C" {static PyObject *meth_QTextList_remove(PyObject *, PyObject *);}
static PyObject *meth_QTextList_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextList, &sipCpp, sipType_QTextBlock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->remove(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_remove, doc_QTextList_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_add, "QTextList.add(QTextBlock)");

extern "C" {static PyObject *meth_QTextList_add(PyObject *, PyObject *);}
static PyObject *meth_QTextList_add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextBlock * a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextList, &sipCpp, sipType_QTextBlock, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->add(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_add, doc_QTextList_add);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_format, "QTextList.format() -> QTextListFormat");

extern "C" {static PyObject *meth_QTextList_format(PyObject *, PyObject *);}
static PyObject *meth_QTextList_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTextList, &sipCpp))
        {
            QTextListFormat *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTextListFormat(sipCpp->format());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTextListFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_format, doc_QTextList_format);

    return NULL;
}


PyDoc_STRVAR(doc_QTextList_setFormat, "QTextList.setFormat(QTextListFormat)");

extern "C" {static PyObject *meth_QTextList_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QTextList_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextListFormat * a0;
        QTextList *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QTextList, &sipCpp, sipType_QTextListFormat, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFormat(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextList, sipName_setFormat, doc_QTextList_setFormat);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextList(void *, const sipTypeDef *);}
static void *cast_QTextList(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QTextList)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QTextBlockGroup)->ctd_cast((QTextBlockGroup *)(QTextList *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextList(void *, int);}
static void release_QTextList(void *sipCppV,int sipState)
{
    Py_BEGIN_ALLOW_THREADS

    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextList *>(sipCppV);
    else
        delete reinterpret_cast<QTextList *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void dealloc_QTextList(sipSimpleWrapper *);}
static void dealloc_QTextList(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextList *>(sipSelf->u.cppPtr)->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextList(sipSelf->u.cppPtr,sipSelf->flags);
    }
}


extern "C" {static void *init_QTextList(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QTextList(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextList *sipCpp = 0;

    {
        QTextDocument * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8", sipType_QTextDocument, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new sipQTextList(a0);
            Py_END_ALLOW_THREADS

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTextList[] = {{636, 255, 1}};


static PyMethodDef methods_QTextList[] = {
    {SIP_MLNAME_CAST(sipName_add), meth_QTextList_add, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_add)},
    {SIP_MLNAME_CAST(sipName_count), meth_QTextList_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_count)},
    {SIP_MLNAME_CAST(sipName_format), meth_QTextList_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_format)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QTextList_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_isEmpty)},
    {SIP_MLNAME_CAST(sipName_item), meth_QTextList_item, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_item)},
    {SIP_MLNAME_CAST(sipName_itemNumber), meth_QTextList_itemNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_itemNumber)},
    {SIP_MLNAME_CAST(sipName_itemText), meth_QTextList_itemText, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_itemText)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QTextList_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_remove)},
    {SIP_MLNAME_CAST(sipName_removeItem), meth_QTextList_removeItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_removeItem)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QTextList_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextList_setFormat)}
};

PyDoc_STRVAR(doc_QTextList, "\1QTextList(QTextDocument)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QTextList = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QTextList,
        {0}
    },
    {
        sipNameNr_QTextList,
        {0, 0, 1},
        10, methods_QTextList,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextList,
    -1,
    -1,
    supers_QTextList,
    0,
    init_QTextList,
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
    dealloc_QTextList,
    0,
    0,
    0,
    release_QTextList,
    cast_QTextList,
    0,
    0,
    0
},
    &QTextList::staticMetaObject,
    0,
    0
};