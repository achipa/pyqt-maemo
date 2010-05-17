/*
 * Interface wrapper code.
 *
 * Generated by SIP snapshot-4.10.1-637497440cb5 on Sat Apr 24 19:01:10 2010
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

#include "sipAPIQtNetwork.h"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 39 "sipQtNetworkQNetworkProxyCapabilities.cpp"

#line 37 "/home/maemo/python-qt4-4.7/sip/QtNetwork/qnetworkproxy.sip"
#include <qnetworkproxy.h>
#line 43 "sipQtNetworkQNetworkProxyCapabilities.cpp"


extern "C" {static int slot_QNetworkProxy_Capabilities___bool__(PyObject *sipSelf);}
static int slot_QNetworkProxy_Capabilities___bool__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 321 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != 0);
#line 61 "sipQtNetworkQNetworkProxyCapabilities.cpp"

            return sipRes;
        }
    }
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ne__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxy_Capabilities___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy::Capabilities * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 316 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() != a0->operator int());
#line 89 "sipQtNetworkQNetworkProxyCapabilities.cpp"
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkProxy_Capabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___eq__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxy_Capabilities___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkProxy::Capabilities * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 311 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator int() == a0->operator int());
#line 125 "sipQtNetworkQNetworkProxyCapabilities.cpp"
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkProxy_Capabilities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___invert__(PyObject *sipSelf);}
static PyObject *slot_QNetworkProxy_Capabilities___invert__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;


    {
        {
            QNetworkProxy::Capabilities *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy::Capabilities(~(*sipCpp));
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___and__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QNetworkProxy_Capabilities___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities * a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QNetworkProxy_Capabilities, &a0, &a0State, &a1))
        {
            QNetworkProxy::Capabilities *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy::Capabilities((*a0 & a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___xor__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QNetworkProxy_Capabilities___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities * a0;
        int a0State = 0;
        QNetworkProxy::Capabilities * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State, sipType_QNetworkProxy_Capabilities, &a1, &a1State))
        {
            QNetworkProxy::Capabilities *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy::Capabilities((*a0 ^ *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);
            sipReleaseType(a1,sipType_QNetworkProxy_Capabilities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___or__(PyObject *sipArg0,PyObject *sipArg1);}
static PyObject *slot_QNetworkProxy_Capabilities___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities * a0;
        int a0State = 0;
        QNetworkProxy::Capabilities * a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State, sipType_QNetworkProxy_Capabilities, &a1, &a1State))
        {
            QNetworkProxy::Capabilities *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QNetworkProxy::Capabilities((*a0 | *a1));
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);
            sipReleaseType(a1,sipType_QNetworkProxy_Capabilities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QNetworkProxy_Capabilities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___int__(PyObject *sipSelf);}
static PyObject *slot_QNetworkProxy_Capabilities___int__(PyObject *sipSelf)
{
    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = *sipCpp;
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }
}


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ixor__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxy_Capabilities___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkProxy::Capabilities::operator^=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

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


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___ior__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxy_Capabilities___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QNetworkProxy::Capabilities * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkProxy::Capabilities::operator|=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(a0,sipType_QNetworkProxy_Capabilities,a0State);

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


extern "C" {static PyObject *slot_QNetworkProxy_Capabilities___iand__(PyObject *sipSelf,PyObject *sipArg);}
static PyObject *slot_QNetworkProxy_Capabilities___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capabilities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QNetworkProxy::Capabilities *sipCpp = reinterpret_cast<QNetworkProxy::Capabilities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkProxy_Capabilities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->QNetworkProxy::Capabilities::operator&=(a0);
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
extern "C" {static void *cast_QNetworkProxy_Capabilities(void *, const sipTypeDef *);}
static void *cast_QNetworkProxy_Capabilities(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkProxy_Capabilities)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkProxy_Capabilities(void *, int);}
static void release_QNetworkProxy_Capabilities(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QNetworkProxy::Capabilities *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QNetworkProxy_Capabilities(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkProxy_Capabilities(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkProxy::Capabilities *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkProxy::Capabilities *>(sipSrc);
}


extern "C" {static void *array_QNetworkProxy_Capabilities(SIP_SSIZE_T);}
static void *array_QNetworkProxy_Capabilities(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkProxy::Capabilities[sipNrElem];
}


extern "C" {static void *copy_QNetworkProxy_Capabilities(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkProxy_Capabilities(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkProxy::Capabilities(reinterpret_cast<const QNetworkProxy::Capabilities *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkProxy_Capabilities(sipSimpleWrapper *);}
static void dealloc_QNetworkProxy_Capabilities(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkProxy_Capabilities(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QNetworkProxy_Capabilities(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QNetworkProxy_Capabilities(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkProxy::Capabilities *sipCpp = 0;

    {
        const QNetworkProxy::Capabilities * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QNetworkProxy_Capabilities, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy::Capabilities(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QNetworkProxy::Capabilities *>(a0),sipType_QNetworkProxy_Capabilities,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy::Capabilities(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QNetworkProxy::Capabilities();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QNetworkProxy_Capabilities(PyObject *, void **, int *, PyObject *);}
static int convertTo_QNetworkProxy_Capabilities(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QNetworkProxy::Capabilities **sipCppPtr = reinterpret_cast<QNetworkProxy::Capabilities **>(sipCppPtrV);

#line 326 "/home/maemo/python-qt4-4.7/sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QNetworkProxy::Capabilities is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capability)) ||
            sipCanConvertToType(sipPy, sipType_QNetworkProxy_Capabilities, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QNetworkProxy_Capability)))
{
    *sipCppPtr = new QNetworkProxy::Capabilities(SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QNetworkProxy::Capabilities *>(sipConvertToType(sipPy, sipType_QNetworkProxy_Capabilities, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 541 "sipQtNetworkQNetworkProxyCapabilities.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkProxy_Capabilities[] = {
    {(void *)slot_QNetworkProxy_Capabilities___bool__, bool_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ne__, ne_slot},
    {(void *)slot_QNetworkProxy_Capabilities___eq__, eq_slot},
    {(void *)slot_QNetworkProxy_Capabilities___invert__, invert_slot},
    {(void *)slot_QNetworkProxy_Capabilities___and__, and_slot},
    {(void *)slot_QNetworkProxy_Capabilities___xor__, xor_slot},
    {(void *)slot_QNetworkProxy_Capabilities___or__, or_slot},
    {(void *)slot_QNetworkProxy_Capabilities___int__, int_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ixor__, ixor_slot},
    {(void *)slot_QNetworkProxy_Capabilities___ior__, ior_slot},
    {(void *)slot_QNetworkProxy_Capabilities___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QNetworkProxy_Capabilities, "\1QNetworkProxy.Capabilities(QNetworkProxy.Capabilities)\n"
    "QNetworkProxy.Capabilities(int)\n"
    "QNetworkProxy.Capabilities()");


pyqt4ClassTypeDef sipTypeDef_QtNetwork_QNetworkProxy_Capabilities = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QNetworkProxy__Capabilities,
        {0}
    },
    {
        sipNameNr_Capabilities,
        {50, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkProxy_Capabilities,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkProxy_Capabilities,
    init_QNetworkProxy_Capabilities,
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
    dealloc_QNetworkProxy_Capabilities,
    assign_QNetworkProxy_Capabilities,
    array_QNetworkProxy_Capabilities,
    copy_QNetworkProxy_Capabilities,
    release_QNetworkProxy_Capabilities,
    cast_QNetworkProxy_Capabilities,
    convertTo_QNetworkProxy_Capabilities,
    0,
    0
},
    0,
    1,
    0
};
