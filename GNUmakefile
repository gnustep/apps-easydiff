#
# GNUmakefile - Generated by ProjectCenter
#
ifeq ($(GNUSTEP_MAKEFILES),)
 GNUSTEP_MAKEFILES := $(shell gnustep-config --variable=GNUSTEP_MAKEFILES 2>/dev/null)
  ifeq ($(GNUSTEP_MAKEFILES),)
    $(warning )
    $(warning Unable to obtain GNUSTEP_MAKEFILES setting from gnustep-config!)
    $(warning Perhaps gnustep-make is not properly installed,)
    $(warning so gnustep-config is not in your PATH.)
    $(warning )
    $(warning Your PATH is currently $(PATH))
    $(warning )
  endif
endif
ifeq ($(GNUSTEP_MAKEFILES),)
 $(error You need to set GNUSTEP_MAKEFILES before compiling!)
endif

include $(GNUSTEP_MAKEFILES)/common.make

#
# Application
#
VERSION = 0.4.1
PACKAGE_NAME = EasyDiff
APP_NAME = EasyDiff
EasyDiff_APPLICATION_ICON = 


#
# Resource files
#
EasyDiff_RESOURCE_FILES = \
Resources/main.gorm \
Resources/window.gorm 


#
# Header files
#
EasyDiff_HEADER_FILES = \
AppController.h \
DiffTextView.h \
DiffMiddleView.h \
DiffView.h \
DiffWindowController.h \
DiffFileChooser.h \
FileIconView.h

#
# Objective-C Class files
#
EasyDiff_OBJC_FILES = \
main.m \
AppController.m \
DiffTextView.m \
DiffMiddleView.m \
DiffView.m \
DiffWrapper.m \
DiffWindowController.m \
DiffScroller.m \
DiffFileChooser.m \
FileIconView.m

#
# Makefiles
#
-include GNUmakefile.preamble
include $(GNUSTEP_MAKEFILES)/aggregate.make
include $(GNUSTEP_MAKEFILES)/application.make
-include GNUmakefile.postamble
