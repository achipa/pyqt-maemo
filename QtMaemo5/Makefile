TARGET = QtMaemo5.so
OFILES = sipQtMaemo5cmodule.o sipQtMaemo5QMaemo5ValueButton.o sipQtMaemo5QMaemo5EditBar.o sipQtMaemo5QMaemo5TimePickSelector.o sipQtMaemo5QMaemo5DatePickSelector.o sipQtMaemo5QMaemo5ListPickSelector.o sipQtMaemo5QMaemo5AbstractPickSelector.o sipQtMaemo5QMaemo5InformationBox.o
HFILES = sipAPIQtMaemo5.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/QtMaemo5 -I/usr/include/QtGui -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=QtMaemo5.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtMaemo5 -L/usr/lib -L/usr/X11R6/lib -lQtDBus -L/usr/lib -lQtXml -lQtGui -L/usr/X11R6/lib -lQtCore -lpthread -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -L/usr/lib -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
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
	@echo '{ global: initQtMaemo5; local: *; };' > QtMaemo5.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5 || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qxml.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qxml.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5listpickselector.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5listpickselector.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5abstractpickselector.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5abstractpickselector.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5editbar.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5editbar.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5homescreenadaptor.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5homescreenadaptor.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/QtMaemo5mod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/QtMaemo5mod.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5valuebutton.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5valuebutton.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5informationbox.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5informationbox.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5timepickselector.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5timepickselector.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtMaemo5/qmaemo5datepickselector.sip $(DESTDIR)/usr/share/sip/PyQt4/QtMaemo5/qmaemo5datepickselector.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtMaemo5cmodule.o
	-rm -f sipQtMaemo5QMaemo5ValueButton.o
	-rm -f sipQtMaemo5QMaemo5EditBar.o
	-rm -f sipQtMaemo5QMaemo5TimePickSelector.o
	-rm -f sipQtMaemo5QMaemo5DatePickSelector.o
	-rm -f sipQtMaemo5QMaemo5ListPickSelector.o
	-rm -f sipQtMaemo5QMaemo5AbstractPickSelector.o
	-rm -f sipQtMaemo5QMaemo5InformationBox.o
	-rm -f QtMaemo5.exp
