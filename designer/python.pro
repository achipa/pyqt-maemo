VPATH = /home/maemo/python-qt4-4.7/designer
CONFIG      += designer plugin release warn
TARGET      = pythonplugin
TEMPLATE    = lib

INCLUDEPATH += /usr/include/python2.5
LIBS        += -L/usr/lib -lpython2.5
DEFINES     += PYTHON_LIB=\\\"libpython2.5.so\\\"

SOURCES     = pluginloader.cpp
HEADERS     = pluginloader.h

# Install.
target.path = /usr/lib/qt4/plugins/designer

python.path = /usr/lib/qt4/plugins/designer
python.files = python

INSTALLS    += target python
