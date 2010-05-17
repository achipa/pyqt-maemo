TARGET = qt.so
OFILES = dbus.o moc_helper.o
HFILES =  helper.h

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DQT_NO_DEBUG -DQT_CORE_LIB -I. -I/usr/include/dbus-1.0 -I/usr/lib/dbus-1.0/include -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=qt.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -ldbus-1 -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
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

moc_helper.cpp: helper.h
	$(MOC) -o moc_helper.cpp helper.h

$(TARGET): $(OFILES)
	@echo '{ global: initqt; local: *; };' > qt.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/pymodules/python2.5/dbus/mainloop || mkdir -p $(DESTDIR)/usr/lib/pymodules/python2.5/dbus/mainloop
	cp -f $(TARGET) $(DESTDIR)/usr/lib/pymodules/python2.5/dbus/mainloop/$(TARGET)
	strip $(DESTDIR)/usr/lib/pymodules/python2.5/dbus/mainloop/$(TARGET)

clean:
	-rm -f $(TARGET)
	-rm -f dbus.o
	-rm -f moc_helper.o
	-rm -f moc_helper.cpp
	-rm -f qt.exp
