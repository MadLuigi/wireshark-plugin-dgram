include $(top_srcdir)/Makefile.am.inc
include ../Makefile.am.inc

# the name of the plugin
PLUGIN_NAME = dgram

# Non-generated sources to be scanned for registration routines
NONGENERATED_REGISTER_C_FILES = \
	packet-dtn-ipnd.c \
	packet-dgram-lowpan.c \
	packet-dgram-udp.c

# Non-generated sources
NONGENERATED_C_FILES = \
	$(NONGENERATED_REGISTER_C_FILES)

# Headers.
CLEAN_HEADER_FILES = \
	packet-dtn-ipnd.h \
	packet-dgram-lowpan.h \
	packet-dgram-udp.h

HEADER_FILES = \
	$(CLEAN_HEADER_FILES)
	
#pluginsdir = $(WIRESHARK_PLUGINS_DIR)
plugins_LTLIBRARIES=dgram.la

#AM_CPPFLAGS = -I$(top_srcdir)/src $(GLIB2_CFLAGS) $(WIRESHARK_CFLAGS)
#AM_LDFLAGS = $(GLIB2_LIBS) $(WIRESHARK_LIBS)

#dgram_la_LDFLAGS = -rpath $(pluginsdir) -avoid-version -module
dgram_la_SOURCES = \
	plugin.c \
	moduleinfo.h \
	$(SRC_FILES)	\
	$(HEADER_FILES)

#dgram_la_LIBADD = $(LDADDS)
dgram_la_CPPFLAGS = $(AM_CPPFLAGS) $(PLUGIN_CPPFLAGS)

dgram_la_CFLAGS = $(AM_CFLAGS) $(PLUGIN_CFLAGS)

dgram_la_LDFLAGS = $(PLUGIN_LDFLAGS)

CLEANFILES = \
	dgram \
	*~

DISTCLEANFILES = \
	plugin.c

MAINTAINERCLEANFILES = \
	Makefile.in

EXTRA_DIST = \
	plugin.rc.in		\
	CMakeLists.txt
