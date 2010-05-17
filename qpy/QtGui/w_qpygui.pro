# Tell the original .pro file about additional directories.
INCLUDEPATH = /usr/include/python2.5 /home/maemo/python-qt4-4.7/qpy/QtGui
CONFIG += release
VPATH = /home/maemo/python-qt4-4.7/qpy/QtGui
include(/home/maemo/python-qt4-4.7/qpy/QtGui/qpygui.pro)
