TARGET = QtAssistant.so
OFILES = sipQtAssistantcmodule.o sipQtAssistantQAssistantClient.o
HFILES = sipAPIQtAssistant.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/qt4/QtAssistant -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtCore -I/usr/include/qt4 -I/usr/include/X11
CFLAGS = -pipe -fPIC -O3 -g -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O3 -g -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=QtAssistant.exp
LIBS = -L/usr/lib -Wl,-rpath-link=/usr/lib -lQtAssistantClient -lQtGui -lQtNetwork -lQtCore -lXext -lX11 -lm -lz -lXau -lxcb -lXdmcp -lexpat -lpthread
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
	@echo '{ global: initQtAssistant; local: *; };' > QtAssistant.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtAssistant || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtAssistant
	cp -f /home/maemo/python-qt4-4.7/sip/QtAssistant/qassistantclient.sip $(DESTDIR)/usr/share/sip/PyQt4/QtAssistant/qassistantclient.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtAssistant/QtAssistantmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtAssistant/QtAssistantmod.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtAssistantcmodule.o
	-rm -f sipQtAssistantQAssistantClient.o
	-rm -f QtAssistant.exp
