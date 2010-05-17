TARGET = QtTest.so
OFILES = sipQtTestcmodule.o sipQtTestQTestQTouchEventSequence.o sipQtTestQTest.o
HFILES = sipAPIQtTest.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_TEST_LIB -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/QtTest -I/usr/include/QtGui -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=QtTest.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtTest -L/usr/lib -lQtCore -L/usr/lib -lpthread -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -L/usr/lib -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
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
	@echo '{ global: initQtTest; local: *; };' > QtTest.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtTest || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtTest
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/QtTestmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/QtTestmod.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/qtestmouse.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/qtestmouse.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/qtesttouch.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/qtesttouch.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/qtestcase.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/qtestcase.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/qtestsystem.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/qtestsystem.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtTest/qtestkeyboard.sip $(DESTDIR)/usr/share/sip/PyQt4/QtTest/qtestkeyboard.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtTestcmodule.o
	-rm -f sipQtTestQTestQTouchEventSequence.o
	-rm -f sipQtTestQTest.o
	-rm -f QtTest.exp
