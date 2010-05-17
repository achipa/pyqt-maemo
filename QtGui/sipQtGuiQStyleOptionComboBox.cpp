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

#line 1400 "/home/maemo/python-qt4-4.7/sip/QtGui/qstyleoption.sip"
#include <qstyleoption.h>
#line 39 "sipQtGuiQStyleOptionComboBox.cpp"

#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 43 "sipQtGuiQStyleOptionComboBox.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qstring.sip"
#include <qstring.h>
#line 46 "sipQtGuiQStyleOptionComboBox.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 49 "sipQtGuiQStyleOptionComboBox.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qrect.sip"
#include <qrect.h>
#line 52 "sipQtGuiQStyleOptionComboBox.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qwidget.sip"
#include <qwidget.h>
#line 55 "sipQtGuiQStyleOptionComboBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionComboBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionComboBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionComboBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionComboBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionComboBox(void *, int);}
static void release_QStyleOptionComboBox(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QStyleOptionComboBox *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QStyleOptionComboBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionComboBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionComboBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionComboBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionComboBox(SIP_SSIZE_T);}
static void *array_QStyleOptionComboBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionComboBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionComboBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionComboBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionComboBox(reinterpret_cast<const QStyleOptionComboBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionComboBox(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionComboBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionComboBox();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QStyleOptionComboBox * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionComboBox, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QStyleOptionComboBox(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionComboBox[] = {{498, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionComboBox[] = {
    {sipName_Type, QStyleOptionComboBox::Type, 496},
    {sipName_Version, QStyleOptionComboBox::Version, 497},
};


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentIcon(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->currentIcon;

    return sipConvertFromType(sipVal,sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_currentIcon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QIcon *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentIcon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentText(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *)
{
    QString *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->currentText;

    return sipConvertFromType(sipVal,sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_currentText(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentText = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_editable(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_editable(void *sipSelf, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->editable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_editable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_editable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->editable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_frame(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_frame(void *sipSelf, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->frame;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_frame(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_frame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frame = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_iconSize(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *)
{
    QSize *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    return sipConvertFromType(sipVal,sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QSize *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_popupRect(void *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *)
{
    QRect *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->popupRect;

    return sipConvertFromType(sipVal,sipType_QRect, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_popupRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QRect *sipVal;
    QStyleOptionComboBox *sipCpp = reinterpret_cast<QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast<QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->popupRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionComboBox[] = {
    {sipName_currentIcon, varget_QStyleOptionComboBox_currentIcon, varset_QStyleOptionComboBox_currentIcon, 0},
    {sipName_currentText, varget_QStyleOptionComboBox_currentText, varset_QStyleOptionComboBox_currentText, 0},
    {sipName_editable, varget_QStyleOptionComboBox_editable, varset_QStyleOptionComboBox_editable, 0},
    {sipName_frame, varget_QStyleOptionComboBox_frame, varset_QStyleOptionComboBox_frame, 0},
    {sipName_iconSize, varget_QStyleOptionComboBox_iconSize, varset_QStyleOptionComboBox_iconSize, 0},
    {sipName_popupRect, varget_QStyleOptionComboBox_popupRect, varset_QStyleOptionComboBox_popupRect, 0},
};

PyDoc_STRVAR(doc_QStyleOptionComboBox, "\1QStyleOptionComboBox()\n"
    "QStyleOptionComboBox(QStyleOptionComboBox)");


pyqt4ClassTypeDef sipTypeDef_QtGui_QStyleOptionComboBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionComboBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionComboBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionComboBox,
        6, variables_QStyleOptionComboBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionComboBox,
    -1,
    -1,
    supers_QStyleOptionComboBox,
    0,
    init_QStyleOptionComboBox,
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
    dealloc_QStyleOptionComboBox,
    assign_QStyleOptionComboBox,
    array_QStyleOptionComboBox,
    copy_QStyleOptionComboBox,
    release_QStyleOptionComboBox,
    cast_QStyleOptionComboBox,
    0,
    0,
    0
},
    0,
    0,
    0
};
