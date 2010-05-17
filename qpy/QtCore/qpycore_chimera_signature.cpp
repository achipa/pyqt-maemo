// This is the implementation of the Chimera::Signature class.
//
// Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of PyQt.
// 
// This file may be used under the terms of the GNU General Public
// License versions 2.0 or 3.0 as published by the Free Software
// Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
// included in the packaging of this file.  Alternatively you may (at
// your option) use any later version of the GNU General Public
// License if such license has been publicly approved by Riverbank
// Computing Limited (or its successors, if any) and the KDE Free Qt
// Foundation. In addition, as a special exception, Riverbank gives you
// certain additional rights. These rights are described in the Riverbank
// GPL Exception version 1.1, which can be found in the file
// GPL_EXCEPTION.txt in this package.
// 
// Please review the following information to ensure GNU General
// Public Licensing requirements will be met:
// http://trolltech.com/products/qt/licenses/licensing/opensource/. If
// you are unsure which license is appropriate for your use, please
// review the following information:
// http://trolltech.com/products/qt/licenses/licensing/licensingoverview
// or contact the sales department at sales@riverbankcomputing.com.
// 
// This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
// WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.


#include <Python.h>

#include "qpycore_chimera.h"


// Forward declarations.
extern "C" {static void Signature_delete(void *args);}


// Destroy the signature and any type objects.
Chimera::Signature::~Signature()
{
    if (!_cached)
        qDeleteAll(parsed_arguments.constBegin(), parsed_arguments.constEnd());

    if (result)
        delete result;
}


// Return the parsed signature wrapped in a Python object.
PyObject *Chimera::Signature::toPyObject(Chimera::Signature *parsed_signature)
{
    PyObject *py = PyCObject_FromVoidPtr(parsed_signature, Signature_delete);

    if (!py)
        delete parsed_signature;

    return py;
}


// Return the parsed signature extracted from a Python object.
Chimera::Signature *Chimera::Signature::fromPyObject(PyObject *py)
{
    return reinterpret_cast<Chimera::Signature *>(PyCObject_AsVoidPtr(py));
}


// Return the name from a signature.
QByteArray Chimera::Signature::name(const QByteArray &signature)
{
    QByteArray nm = signature;
    int idx = signature.indexOf('(');

    if (idx >= 0)
        nm.truncate(idx);

    return nm;
}


// Return the arguments from a signature.
QByteArray Chimera::Signature::arguments(const QByteArray &signature)
{
    QByteArray args;

    int oparen = signature.indexOf('(');
    int cparen = signature.lastIndexOf(')');

    if (oparen >= 0 && cparen >= 0)
        args = signature.mid(oparen, cparen - oparen + 1);

    return args;
}


// The PyCObject destructor for the Chimera::Signature type.
static void Signature_delete(void *args)
{
    delete reinterpret_cast<Chimera::Signature *>(args);
}