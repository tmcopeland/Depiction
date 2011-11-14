## Process this file with automake to produce Makefile.in

## Created by Anjuta


uidir = $(datadir)/depiction/ui


AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(prefix)/$(DATADIRNAME)/locale"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(datadir)"\" \
	$(DEPICTION_CFLAGS)

AM_CFLAGS =\
	 -Wall\
	 -g

bin_PROGRAMS = depiction

depiction_SOURCES = \
	main.cc \
	Depiction.h \
	Depiction.cc \
	AboutDialog.cc \
	AboutDialog.h \
	MenuBar.cc \
	MenuBar.h \
	MainToolbar.cc \
	MainToolbar.h

depiction_LDFLAGS = -static

depiction_LDADD = $(DEPICTION_LIBS)


EXTRA_DIST = $(ui_DATA)

# Remove ui directory on uninstall
uninstall-local:
	-rm -r $(uidir)
	-rm -r $(datadir)/depiction

