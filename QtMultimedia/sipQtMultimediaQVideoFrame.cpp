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

#include "sipAPIQtMultimedia.h"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtMultimedia/qvideoframe.sip"
#include <qvideoframe.h>
#line 39 "sipQtMultimediaQVideoFrame.cpp"

#line 39 "/home/maemo/python-qt4-4.7/sip/QtMultimedia/qabstractvideobuffer.sip"
#include <qabstractvideobuffer.h>
#line 43 "sipQtMultimediaQVideoFrame.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qsize.sip"
#include <qsize.h>
#line 46 "sipQtMultimediaQVideoFrame.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 49 "sipQtMultimediaQVideoFrame.cpp"
#line 41 "/home/maemo/python-qt4-4.7/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 52 "sipQtMultimediaQVideoFrame.cpp"


PyDoc_STRVAR(doc_QVideoFrame_isValid, "QVideoFrame.isValid() -> bool");

extern "C" {static PyObject *meth_QVideoFrame_isValid(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isValid();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_isValid, doc_QVideoFrame_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_pixelFormat, "QVideoFrame.pixelFormat() -> QVideoFrame.PixelFormat");

extern "C" {static PyObject *meth_QVideoFrame_pixelFormat(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_pixelFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QVideoFrame::PixelFormat sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->pixelFormat();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVideoFrame_PixelFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_pixelFormat, doc_QVideoFrame_pixelFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_handleType, "QVideoFrame.handleType() -> QAbstractVideoBuffer.HandleType");

extern "C" {static PyObject *meth_QVideoFrame_handleType(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_handleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QAbstractVideoBuffer::HandleType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->handleType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAbstractVideoBuffer_HandleType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_handleType, doc_QVideoFrame_handleType);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_size, "QVideoFrame.size() -> QSize");

extern "C" {static PyObject *meth_QVideoFrame_size(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QSize *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QSize(sipCpp->size());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_size, doc_QVideoFrame_size);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_width, "QVideoFrame.width() -> int");

extern "C" {static PyObject *meth_QVideoFrame_width(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->width();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_width, doc_QVideoFrame_width);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_height, "QVideoFrame.height() -> int");

extern "C" {static PyObject *meth_QVideoFrame_height(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->height();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_height, doc_QVideoFrame_height);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_fieldType, "QVideoFrame.fieldType() -> QVideoFrame.FieldType");

extern "C" {static PyObject *meth_QVideoFrame_fieldType(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_fieldType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QVideoFrame::FieldType sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->fieldType();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVideoFrame_FieldType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_fieldType, doc_QVideoFrame_fieldType);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_setFieldType, "QVideoFrame.setFieldType(QVideoFrame.FieldType)");

extern "C" {static PyObject *meth_QVideoFrame_setFieldType(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_setFieldType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame::FieldType a0;
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoFrame, &sipCpp, sipType_QVideoFrame_FieldType, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setFieldType(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_setFieldType, doc_QVideoFrame_setFieldType);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_isMapped, "QVideoFrame.isMapped() -> bool");

extern "C" {static PyObject *meth_QVideoFrame_isMapped(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_isMapped(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isMapped();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_isMapped, doc_QVideoFrame_isMapped);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_isReadable, "QVideoFrame.isReadable() -> bool");

extern "C" {static PyObject *meth_QVideoFrame_isReadable(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_isReadable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isReadable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_isReadable, doc_QVideoFrame_isReadable);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_isWritable, "QVideoFrame.isWritable() -> bool");

extern "C" {static PyObject *meth_QVideoFrame_isWritable(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_isWritable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isWritable();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_isWritable, doc_QVideoFrame_isWritable);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_mapMode, "QVideoFrame.mapMode() -> QAbstractVideoBuffer.MapMode");

extern "C" {static PyObject *meth_QVideoFrame_mapMode(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_mapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QAbstractVideoBuffer::MapMode sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mapMode();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QAbstractVideoBuffer_MapMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_mapMode, doc_QVideoFrame_mapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_map, "QVideoFrame.map(QAbstractVideoBuffer.MapMode) -> bool");

extern "C" {static PyObject *meth_QVideoFrame_map(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAbstractVideoBuffer::MapMode a0;
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QVideoFrame, &sipCpp, sipType_QAbstractVideoBuffer_MapMode, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->map(a0);
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_map, doc_QVideoFrame_map);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_unmap, "QVideoFrame.unmap()");

extern "C" {static PyObject *meth_QVideoFrame_unmap(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->unmap();
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_unmap, doc_QVideoFrame_unmap);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_bytesPerLine, "QVideoFrame.bytesPerLine() -> int");

extern "C" {static PyObject *meth_QVideoFrame_bytesPerLine(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_bytesPerLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->bytesPerLine();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_bytesPerLine, doc_QVideoFrame_bytesPerLine);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_bits, "QVideoFrame.bits() -> sip.wrapper");

extern "C" {static PyObject *meth_QVideoFrame_bits(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_bits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 109 "/home/maemo/python-qt4-4.7/sip/QtMultimedia/qvideoframe.sip"
        uchar *mem;
        
        Py_BEGIN_ALLOW_THREADS
        mem = sipCpp->bits();
        Py_END_ALLOW_THREADS
        
        if (mem)
        {
            sipRes = sipConvertFromVoidPtrAndSize(mem, sipCpp->mappedBytes());
        }
        else
        {
            sipRes = Py_None;
            Py_INCREF(sipRes);
        }
#line 536 "sipQtMultimediaQVideoFrame.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_bits, doc_QVideoFrame_bits);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_mappedBytes, "QVideoFrame.mappedBytes() -> int");

extern "C" {static PyObject *meth_QVideoFrame_mappedBytes(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_mappedBytes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            int sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->mappedBytes();
            Py_END_ALLOW_THREADS

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_mappedBytes, doc_QVideoFrame_mappedBytes);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_handle, "QVideoFrame.handle() -> QVariant");

extern "C" {static PyObject *meth_QVideoFrame_handle(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            QVariant *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QVariant(sipCpp->handle());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_handle, doc_QVideoFrame_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_startTime, "QVideoFrame.startTime() -> int");

extern "C" {static PyObject *meth_QVideoFrame_startTime(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_startTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->startTime();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_startTime, doc_QVideoFrame_startTime);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_setStartTime, "QVideoFrame.setStartTime(int)");

extern "C" {static PyObject *meth_QVideoFrame_setStartTime(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_setStartTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QVideoFrame, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStartTime(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_setStartTime, doc_QVideoFrame_setStartTime);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_endTime, "QVideoFrame.endTime() -> int");

extern "C" {static PyObject *meth_QVideoFrame_endTime(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_endTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QVideoFrame, &sipCpp))
        {
            qint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->endTime();
            Py_END_ALLOW_THREADS

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_endTime, doc_QVideoFrame_endTime);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_setEndTime, "QVideoFrame.setEndTime(int)");

extern "C" {static PyObject *meth_QVideoFrame_setEndTime(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_setEndTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        QVideoFrame *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QVideoFrame, &sipCpp, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setEndTime(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_setEndTime, doc_QVideoFrame_setEndTime);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_pixelFormatFromImageFormat, "QVideoFrame.pixelFormatFromImageFormat(QImage.Format) -> QVideoFrame.PixelFormat");

extern "C" {static PyObject *meth_QVideoFrame_pixelFormatFromImageFormat(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_pixelFormatFromImageFormat(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QImage::Format a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QImage_Format, &a0))
        {
            QVideoFrame::PixelFormat sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QVideoFrame::pixelFormatFromImageFormat(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QVideoFrame_PixelFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_pixelFormatFromImageFormat, doc_QVideoFrame_pixelFormatFromImageFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QVideoFrame_imageFormatFromPixelFormat, "QVideoFrame.imageFormatFromPixelFormat(QVideoFrame.PixelFormat) -> QImage.Format");

extern "C" {static PyObject *meth_QVideoFrame_imageFormatFromPixelFormat(PyObject *, PyObject *);}
static PyObject *meth_QVideoFrame_imageFormatFromPixelFormat(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QVideoFrame::PixelFormat a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "E", sipType_QVideoFrame_PixelFormat, &a0))
        {
            QImage::Format sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = QVideoFrame::imageFormatFromPixelFormat(a0);
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_QImage_Format);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QVideoFrame, sipName_imageFormatFromPixelFormat, doc_QVideoFrame_imageFormatFromPixelFormat);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QVideoFrame(void *, const sipTypeDef *);}
static void *cast_QVideoFrame(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QVideoFrame)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QVideoFrame(void *, int);}
static void release_QVideoFrame(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QVideoFrame *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QVideoFrame(void *, SIP_SSIZE_T, const void *);}
static void assign_QVideoFrame(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVideoFrame *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVideoFrame *>(sipSrc);
}


extern "C" {static void *array_QVideoFrame(SIP_SSIZE_T);}
static void *array_QVideoFrame(SIP_SSIZE_T sipNrElem)
{
    return new QVideoFrame[sipNrElem];
}


extern "C" {static void *copy_QVideoFrame(const void *, SIP_SSIZE_T);}
static void *copy_QVideoFrame(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVideoFrame(reinterpret_cast<const QVideoFrame *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QVideoFrame(sipSimpleWrapper *);}
static void dealloc_QVideoFrame(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QVideoFrame(sipSelf->u.cppPtr,0);
    }
}


extern "C" {static void *init_QVideoFrame(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QVideoFrame(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QVideoFrame *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVideoFrame();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        QAbstractVideoBuffer * a0;
        const QSize * a1;
        QVideoFrame::PixelFormat a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J8J9E", sipType_QAbstractVideoBuffer, &a0, sipType_QSize, &a1, sipType_QVideoFrame_PixelFormat, &a2))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVideoFrame(a0,*a1,a2);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        int a0;
        const QSize * a1;
        int a2;
        QVideoFrame::PixelFormat a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iJ9iE", &a0, sipType_QSize, &a1, &a2, sipType_QVideoFrame_PixelFormat, &a3))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVideoFrame(a0,*a1,a2,a3);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QImage * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QImage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVideoFrame(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QVideoFrame * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QVideoFrame, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QVideoFrame(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QVideoFrame[] = {
    {SIP_MLNAME_CAST(sipName_bits), meth_QVideoFrame_bits, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_bits)},
    {SIP_MLNAME_CAST(sipName_bytesPerLine), meth_QVideoFrame_bytesPerLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_bytesPerLine)},
    {SIP_MLNAME_CAST(sipName_endTime), meth_QVideoFrame_endTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_endTime)},
    {SIP_MLNAME_CAST(sipName_fieldType), meth_QVideoFrame_fieldType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_fieldType)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QVideoFrame_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_handle)},
    {SIP_MLNAME_CAST(sipName_handleType), meth_QVideoFrame_handleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_handleType)},
    {SIP_MLNAME_CAST(sipName_height), meth_QVideoFrame_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_height)},
    {SIP_MLNAME_CAST(sipName_imageFormatFromPixelFormat), meth_QVideoFrame_imageFormatFromPixelFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_imageFormatFromPixelFormat)},
    {SIP_MLNAME_CAST(sipName_isMapped), meth_QVideoFrame_isMapped, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_isMapped)},
    {SIP_MLNAME_CAST(sipName_isReadable), meth_QVideoFrame_isReadable, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_isReadable)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QVideoFrame_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_isValid)},
    {SIP_MLNAME_CAST(sipName_isWritable), meth_QVideoFrame_isWritable, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_isWritable)},
    {SIP_MLNAME_CAST(sipName_map), meth_QVideoFrame_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_map)},
    {SIP_MLNAME_CAST(sipName_mapMode), meth_QVideoFrame_mapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_mapMode)},
    {SIP_MLNAME_CAST(sipName_mappedBytes), meth_QVideoFrame_mappedBytes, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_mappedBytes)},
    {SIP_MLNAME_CAST(sipName_pixelFormat), meth_QVideoFrame_pixelFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_pixelFormat)},
    {SIP_MLNAME_CAST(sipName_pixelFormatFromImageFormat), meth_QVideoFrame_pixelFormatFromImageFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_pixelFormatFromImageFormat)},
    {SIP_MLNAME_CAST(sipName_setEndTime), meth_QVideoFrame_setEndTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_setEndTime)},
    {SIP_MLNAME_CAST(sipName_setFieldType), meth_QVideoFrame_setFieldType, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_setFieldType)},
    {SIP_MLNAME_CAST(sipName_setStartTime), meth_QVideoFrame_setStartTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_setStartTime)},
    {SIP_MLNAME_CAST(sipName_size), meth_QVideoFrame_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_size)},
    {SIP_MLNAME_CAST(sipName_startTime), meth_QVideoFrame_startTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_startTime)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QVideoFrame_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_unmap)},
    {SIP_MLNAME_CAST(sipName_width), meth_QVideoFrame_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QVideoFrame_width)}
};

static sipEnumMemberDef enummembers_QVideoFrame[] = {
    {sipName_BottomField, QVideoFrame::BottomField, 20},
    {sipName_Format_ARGB32, QVideoFrame::Format_ARGB32, 21},
    {sipName_Format_ARGB32_Premultiplied, QVideoFrame::Format_ARGB32_Premultiplied, 21},
    {sipName_Format_ARGB8565_Premultiplied, QVideoFrame::Format_ARGB8565_Premultiplied, 21},
    {sipName_Format_AYUV444, QVideoFrame::Format_AYUV444, 21},
    {sipName_Format_AYUV444_Premultiplied, QVideoFrame::Format_AYUV444_Premultiplied, 21},
    {sipName_Format_BGR24, QVideoFrame::Format_BGR24, 21},
    {sipName_Format_BGR32, QVideoFrame::Format_BGR32, 21},
    {sipName_Format_BGR555, QVideoFrame::Format_BGR555, 21},
    {sipName_Format_BGR565, QVideoFrame::Format_BGR565, 21},
    {sipName_Format_BGRA32, QVideoFrame::Format_BGRA32, 21},
    {sipName_Format_BGRA32_Premultiplied, QVideoFrame::Format_BGRA32_Premultiplied, 21},
    {sipName_Format_BGRA5658_Premultiplied, QVideoFrame::Format_BGRA5658_Premultiplied, 21},
    {sipName_Format_IMC1, QVideoFrame::Format_IMC1, 21},
    {sipName_Format_IMC2, QVideoFrame::Format_IMC2, 21},
    {sipName_Format_IMC3, QVideoFrame::Format_IMC3, 21},
    {sipName_Format_IMC4, QVideoFrame::Format_IMC4, 21},
    {sipName_Format_Invalid, QVideoFrame::Format_Invalid, 21},
    {sipName_Format_NV12, QVideoFrame::Format_NV12, 21},
    {sipName_Format_NV21, QVideoFrame::Format_NV21, 21},
    {sipName_Format_RGB24, QVideoFrame::Format_RGB24, 21},
    {sipName_Format_RGB32, QVideoFrame::Format_RGB32, 21},
    {sipName_Format_RGB555, QVideoFrame::Format_RGB555, 21},
    {sipName_Format_RGB565, QVideoFrame::Format_RGB565, 21},
    {sipName_Format_UYVY, QVideoFrame::Format_UYVY, 21},
    {sipName_Format_User, QVideoFrame::Format_User, 21},
    {sipName_Format_Y16, QVideoFrame::Format_Y16, 21},
    {sipName_Format_Y8, QVideoFrame::Format_Y8, 21},
    {sipName_Format_YUV420P, QVideoFrame::Format_YUV420P, 21},
    {sipName_Format_YUV444, QVideoFrame::Format_YUV444, 21},
    {sipName_Format_YUYV, QVideoFrame::Format_YUYV, 21},
    {sipName_Format_YV12, QVideoFrame::Format_YV12, 21},
    {sipName_InterlacedFrame, QVideoFrame::InterlacedFrame, 20},
    {sipName_ProgressiveFrame, QVideoFrame::ProgressiveFrame, 20},
    {sipName_TopField, QVideoFrame::TopField, 20},
};

PyDoc_STRVAR(doc_QVideoFrame, "\1QVideoFrame()\n"
    "QVideoFrame(QAbstractVideoBuffer, QSize, QVideoFrame.PixelFormat)\n"
    "QVideoFrame(int, QSize, int, QVideoFrame.PixelFormat)\n"
    "QVideoFrame(QImage)\n"
    "QVideoFrame(QVideoFrame)");


pyqt4ClassTypeDef sipTypeDef_QtMultimedia_QVideoFrame = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QVideoFrame,
        {0}
    },
    {
        sipNameNr_QVideoFrame,
        {0, 0, 1},
        24, methods_QVideoFrame,
        35, enummembers_QVideoFrame,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QVideoFrame,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_QVideoFrame,
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
    dealloc_QVideoFrame,
    assign_QVideoFrame,
    array_QVideoFrame,
    copy_QVideoFrame,
    release_QVideoFrame,
    cast_QVideoFrame,
    0,
    0,
    0
},
    0,
    0,
    0
};
