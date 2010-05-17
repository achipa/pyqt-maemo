TARGET = phonon.so
OFILES = sipphononcmodule.o sipphononQList0101PhononEffect.o sipphononQHash0100QByteArray0100QVariant.o sipphononQList0100PhononMediaSource.o sipphononQMultiMap0100QString0100QString.o sipphononQList0100PhononSubtitleDescription.o sipphononQList0100PhononAudioChannelDescription.o sipphononQList0100PhononEffectParameter.o sipphononQList0100PhononAudioCaptureDevice.o sipphononQList0100PhononEffectDescription.o sipphononQList0100PhononAudioOutputDevice.o sipphononQList0100PhononPath.o sipphononPhononVolumeSlider.o sipphononPhononVideoWidget.o sipphononPhononVideoPlayer.o sipphononPhononSeekSlider.o sipphononPhononPath.o sipphononPhononEffectDescriptionModel.o sipphononPhononAudioOutputDeviceModel.o sipphononPhononAudioCaptureDevice.o sipphononPhononAudioChannelDescription.o sipphononPhononSubtitleDescription.o sipphononPhononEffectDescription.o sipphononPhononAudioOutputDevice.o sipphononPhononMediaSource.o sipphononPhononMediaObject.o sipphononPhononMediaControllerFeatures.o sipphononPhononMediaController.o sipphononPhononEffectWidget.o sipphononPhononEffectParameterHints.o sipphononPhononEffectParameter.o sipphononPhononEffect.o sipphononPhononBackendCapabilitiesNotifier.o sipphononPhononBackendCapabilities.o sipphononPhononAudioOutput.o sipphononPhononAbstractVideoOutput.o sipphononPhononAbstractAudioOutput.o sipphononPhononMediaNode.o sipphononPhonon.o
HFILES = sipAPIphonon.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_PHONON_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/phonon -I/usr/include/QtGui -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=phonon.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lphonon -L/usr/lib -lQtDBus -L/usr/lib -lQtXml -lQtGui -L/usr/X11R6/lib -lQtCore -lpthread -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -L/usr/lib -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
MOC = /usr/bin/moc
.SUFFIXES: .c .o .cpp .cc .cxx .C


.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(CPPFLAGS) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

all: $(TARGET)

$(OFILES): $(HFILES)

$(TARGET): $(OFILES)
	@echo '{ global: initphonon; local: *; };' > phonon.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/phonon || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/phonon
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/abstractvideooutput.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/abstractvideooutput.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/phononnamespace.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/phononnamespace.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/mediacontroller.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/mediacontroller.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/effectparameter.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/effectparameter.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/seekslider.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/seekslider.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/medianode.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/medianode.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/backendcapabilities.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/backendcapabilities.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/abstractaudiooutput.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/abstractaudiooutput.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/mediaobject.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/mediaobject.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/path.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/path.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/videoplayer.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/videoplayer.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/volumeslider.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/volumeslider.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/videowidget.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/videowidget.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/mediasource.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/mediasource.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/effect.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/effect.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/audiooutput.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/audiooutput.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/objectdescription.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/objectdescription.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/effectwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/effectwidget.sip
	cp -f /home/maemo/python-qt4-4.7/sip/phonon/phononmod.sip $(DESTDIR)/usr/share/sip/PyQt4/phonon/phononmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipphononcmodule.o
	-rm -f sipphononQList0101PhononEffect.o
	-rm -f sipphononQHash0100QByteArray0100QVariant.o
	-rm -f sipphononQList0100PhononMediaSource.o
	-rm -f sipphononQMultiMap0100QString0100QString.o
	-rm -f sipphononQList0100PhononSubtitleDescription.o
	-rm -f sipphononQList0100PhononAudioChannelDescription.o
	-rm -f sipphononQList0100PhononEffectParameter.o
	-rm -f sipphononQList0100PhononAudioCaptureDevice.o
	-rm -f sipphononQList0100PhononEffectDescription.o
	-rm -f sipphononQList0100PhononAudioOutputDevice.o
	-rm -f sipphononQList0100PhononPath.o
	-rm -f sipphononPhononVolumeSlider.o
	-rm -f sipphononPhononVideoWidget.o
	-rm -f sipphononPhononVideoPlayer.o
	-rm -f sipphononPhononSeekSlider.o
	-rm -f sipphononPhononPath.o
	-rm -f sipphononPhononEffectDescriptionModel.o
	-rm -f sipphononPhononAudioOutputDeviceModel.o
	-rm -f sipphononPhononAudioCaptureDevice.o
	-rm -f sipphononPhononAudioChannelDescription.o
	-rm -f sipphononPhononSubtitleDescription.o
	-rm -f sipphononPhononEffectDescription.o
	-rm -f sipphononPhononAudioOutputDevice.o
	-rm -f sipphononPhononMediaSource.o
	-rm -f sipphononPhononMediaObject.o
	-rm -f sipphononPhononMediaControllerFeatures.o
	-rm -f sipphononPhononMediaController.o
	-rm -f sipphononPhononEffectWidget.o
	-rm -f sipphononPhononEffectParameterHints.o
	-rm -f sipphononPhononEffectParameter.o
	-rm -f sipphononPhononEffect.o
	-rm -f sipphononPhononBackendCapabilitiesNotifier.o
	-rm -f sipphononPhononBackendCapabilities.o
	-rm -f sipphononPhononAudioOutput.o
	-rm -f sipphononPhononAbstractVideoOutput.o
	-rm -f sipphononPhononAbstractAudioOutput.o
	-rm -f sipphononPhononMediaNode.o
	-rm -f sipphononPhonon.o
	-rm -f phonon.exp
