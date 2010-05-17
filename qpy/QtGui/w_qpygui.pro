# Tell the original .pro file about additional directories.
INCLUDEPATH = /usr/include/python2.5 /home/maemo/python-qt4-experimental-4.7.3/qpy/QtGui
CONFIG += release
VPATH = /home/maemo/python-qt4-experimental-4.7.3/qpy/QtGui
include(/home/maemo/python-qt4-experimental-4.7.3/qpy/QtGui/qpygui.pro)
