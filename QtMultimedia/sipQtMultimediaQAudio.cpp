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

#line 38 "/home/maemo/python-qt4-4.7/sip/QtMultimedia/qaudio.sip"
#include <qaudio.h>
#line 39 "sipQtMultimediaQAudio.cpp"


static sipEnumMemberDef enummembers_QAudio[] = {
    {sipName_ActiveState, QAudio::ActiveState, 8},
    {sipName_AudioInput, QAudio::AudioInput, 7},
    {sipName_AudioOutput, QAudio::AudioOutput, 7},
    {sipName_FatalError, QAudio::FatalError, 6},
    {sipName_IOError, QAudio::IOError, 6},
    {sipName_IdleState, QAudio::IdleState, 8},
    {sipName_NoError, QAudio::NoError, 6},
    {sipName_OpenError, QAudio::OpenError, 6},
    {sipName_StoppedState, QAudio::StoppedState, 8},
    {sipName_SuspendedState, QAudio::SuspendedState, 8},
    {sipName_UnderrunError, QAudio::UnderrunError, 6},
};


pyqt4ClassTypeDef sipTypeDef_QtMultimedia_QAudio = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_NAMESPACE,
        sipNameNr_QAudio,
        {0}
    },
    {
        sipNameNr_QAudio,
        {0, 0, 1},
        0, 0,
        11, enummembers_QAudio,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0
};
