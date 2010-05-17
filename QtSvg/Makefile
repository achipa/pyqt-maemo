TARGET = QtSvg.so
OFILES = sipQtSvgcmodule.o sipQtSvgQSvgWidget.o sipQtSvgQSvgRenderer.o sipQtSvgQSvgGenerator.o sipQtSvgQGraphicsSvgItem.o
HFILES = sipAPIQtSvg.h 

CC = gcc
CXX = g++
LINK = g++
CPPFLAGS = -DNDEBUG -DSIP_PROTECTED_IS_PUBLIC -Dprotected=public -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -I. -I/usr/include/python2.5 -I/usr/mkspecs/linux-g++ -I/usr/include/QtSvg -I/usr/include/QtGui -I/usr/include/QtCore -I/usr/include -I/usr/X11R6/include
CFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
CXXFLAGS = -pipe -fPIC -O2 -Wall -W -D_REENTRANT
LFLAGS = -shared -Wl,-O1 -Wl,-rpath,/usr/lib -Wl,--version-script=QtSvg.exp
LIBS = -L/usr/lib -L/usr/X11R6/lib -lQtSvg -L/usr/lib -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -lpthread -lQtGui -L/usr/lib -L/usr/X11R6/lib -lQtCore -L/usr/lib -lpthread -lQtCore -L/usr/lib -lpthread -lXext -lX11 -lm -lpthread
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
	@echo '{ global: initQtSvg; local: *; };' > QtSvg.exp
	$(LINK) $(LFLAGS) -o $(TARGET) $(OFILES) $(LIBS)

install: $(TARGET)
	@test -d $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4 || mkdir -p $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4
	cp -f $(TARGET) $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	strip $(DESTDIR)/usr/lib/python2.5/site-packages/PyQt4/$(TARGET)
	@test -d $(DESTDIR)/usr/share/sip/PyQt4/QtSvg || mkdir -p $(DESTDIR)/usr/share/sip/PyQt4/QtSvg
	cp -f /home/maemo/python-qt4-4.7/sip/QtSvg/qsvgwidget.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvgwidget.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtSvg/QtSvgmod.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/QtSvgmod.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtSvg/qsvgrenderer.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvgrenderer.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtSvg/qgraphicssvgitem.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qgraphicssvgitem.sip
	cp -f /home/maemo/python-qt4-4.7/sip/QtSvg/qsvggenerator.sip $(DESTDIR)/usr/share/sip/PyQt4/QtSvg/qsvggenerator.sip

clean:
	-rm -f $(TARGET)
	-rm -f sipQtSvgcmodule.o
	-rm -f sipQtSvgQSvgWidget.o
	-rm -f sipQtSvgQSvgRenderer.o
	-rm -f sipQtSvgQSvgGenerator.o
	-rm -f sipQtSvgQGraphicsSvgItem.o
	-rm -f QtSvg.exp
