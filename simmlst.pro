TEMPLATE = app
CONFIG += release
LIBS = -L/usr/local/lib -lgslcblas -lgsl
QMAKE_CXXFLAGS = -I/usr/local/include
SOURCES = src/simmlst.cpp \
 src/arg.cpp \
 src/data.cpp \
 src/guiimpl.cpp \
 src/popsize.cpp \
 src/plotimpl.cpp
HEADERS += src/arg.h \
 src/rng.h \
 src/data.h \
 src/guiimpl.h \
 src/popsize.h \
 src/plotimpl.h
FORMS += ui/gui.ui ui/plot.ui
QT += core gui widgets printsupport
