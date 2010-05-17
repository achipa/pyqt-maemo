TARGET = QtScriptTools.so
OFILES = sipQtScriptToolscmodule.o sipQtScriptToolsQScriptEngineDebugger.o
HFILES = sipAPIQtScriptTools.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_SCRIPTTOOLS_LIB -DQT_GUI_LIB -DQT_SCRIPT_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/QtScriptTools -I/usr/include/QtGui -I/usr/include/QtScript -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=QtScriptTools.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtScriptTools -L/usr/lib -lQtScript -L/usr/lib -lQtGui -L/usr/X11R6/lib -lQtCore -lpthread -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -L/usr/lib -lpthread -lQtScript -L/usr/lib -lQtCore -L/usr/lib -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
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
	@echo '{ global: initQtScriptTools; local: *; };' > QtScriptTools.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools
	cp -f /home/maemo/python-qt4-4.7/sip/QtScriptTools/qscriptenginedebugger.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools/qscriptenginedebugger.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtScriptTools/QtScriptToolsmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtScriptTools/QtScriptToolsmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtScriptToolscmodule.o
	-rm -f sipQtScriptToolsQScriptEngineDebugger.o
	-rm -f QtScriptTools.exp
