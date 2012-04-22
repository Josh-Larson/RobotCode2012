# Wind River Workbench generated Makefile.
# Do not edit!!!
#
# The file ".wrmakefile" is the template used by the Wind River Workbench to
# generate the makefiles of this project. Add user-specific build targets and
# make rules only(!) in this project's ".wrmakefile" file. These will then be
# automatically dumped into the makefiles.

WIND_HOME := $(subst \,/,$(WIND_HOME))
WIND_BASE := $(subst \,/,$(WIND_BASE))
WIND_USR := $(subst \,/,$(WIND_USR))
WRVX_COMPBASE := $(subst \,/,$(WRVX_COMPBASE))

all : pre_build main_all post_build

_clean ::
	@echo "make: removing targets and objects of `pwd`"

TRACE=0
TRACEON=$(TRACE:0=@)
TRACE_FLAG=$(TRACEON:1=)

MAKEFILE := Makefile

FLEXIBLE_BUILD := 1

BUILD_SPEC = PPC603gnu
DEBUG_MODE = 1
ifeq ($(DEBUG_MODE),1)
MODE_DIR := Debug
else
MODE_DIR := NonDebug
endif
OBJ_DIR := .
WS_ROOT_DIR := C:/WindRiver/workspace
PRJ_ROOT_DIR := $(WS_ROOT_DIR)/JDLRobot



#Global Build Macros
PROJECT_TYPE = DKM
DEFINES = 
EXPAND_DBG = 0


#BuildSpec specific Build Macros
VX_CPU_FAMILY = ppc
CPU = PPC603
TOOL_FAMILY = gnu
TOOL = gnu
TOOL_PATH = 
CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
LIBPATH = 
LIBS = 

IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/WPILib 

IDE_LIBRARIES = 

IDE_DEFINES = 



#BuildTool flags
ifeq ($(DEBUG_MODE),1)
DEBUGFLAGS_C-Compiler = -g
DEBUGFLAGS_C++-Compiler = -g
DEBUGFLAGS_Linker = -g
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -g
else
DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
DEBUGFLAGS_Partial-Image-Linker = 
DEBUGFLAGS_Librarian = 
DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif


#Project Targets
PROJECT_TARGETS = JDLRobot/$(MODE_DIR)/JDLRobot.out \
	 JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage.o


#Rules

# JDLRobot
ifeq ($(DEBUG_MODE),1)
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
JDLRobot/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
JDLRobot/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/WPILib 
JDLRobot/$(MODE_DIR)/% : IDE_LIBRARIES = 
JDLRobot/$(MODE_DIR)/% : IDE_DEFINES = 
JDLRobot/$(MODE_DIR)/% : PROJECT_TYPE = DKM
JDLRobot/$(MODE_DIR)/% : DEFINES = 
JDLRobot/$(MODE_DIR)/% : EXPAND_DBG = 0
JDLRobot/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
JDLRobot/$(MODE_DIR)/% : CPU = PPC603
JDLRobot/$(MODE_DIR)/% : TOOL_FAMILY = gnu
JDLRobot/$(MODE_DIR)/% : TOOL = gnu
JDLRobot/$(MODE_DIR)/% : TOOL_PATH = 
JDLRobot/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
JDLRobot/$(MODE_DIR)/% : LIBPATH = 
JDLRobot/$(MODE_DIR)/% : LIBS = 
JDLRobot/$(MODE_DIR)/% : OBJ_DIR := JDLRobot/$(MODE_DIR)

OBJECTS_JDLRobot = JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage.o

JDLRobot/$(MODE_DIR)/JDLRobot.out : $(OBJECTS_JDLRobot)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@";rm -f "$@";nmppc $(OBJECTS_JDLRobot) $(IDE_LIBRARIES) | tclsh $(WIND_BASE)/host/resource/hutils/tcl/munch.tcl -c ppc > $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc $(DEBUGFLAGS_Linker) $(CC_ARCH_SPEC) -fdollars-in-identifiers -Wall $(ADDED_CFLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES)  -o $(OBJ_DIR)/ctdt.o -c $(OBJ_DIR)/ctdt.c; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X -T $(WIND_BASE)/target/h/tool/gnu/ldscripts/link.OUT -o "$@" $(OBJ_DIR)/ctdt.o $(OBJECTS_JDLRobot) $(IDE_LIBRARIES) $(LIBPATH) $(LIBS)  $(ADDED_LIBPATH) $(ADDED_LIBS) && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

JDLRobot/$(MODE_DIR)/JDLRobot_compile_file : $(FILE) ;

_clean :: JDLRobot/$(MODE_DIR)/JDLRobot_clean

JDLRobot/$(MODE_DIR)/JDLRobot_clean : 
	$(TRACE_FLAG)if [ -d "JDLRobot" ]; then cd "JDLRobot"; rm -rf $(MODE_DIR); fi


# JDLRobot_partialImage
ifeq ($(DEBUG_MODE),1)
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -g
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -g
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -g
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -g
else
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C-Compiler = -O2 -fstrength-reduce -fno-builtin
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_C++-Compiler = -O2 -fstrength-reduce -fno-builtin
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Linker = -O2 -fstrength-reduce -fno-builtin
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Partial-Image-Linker = 
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Librarian = 
JDLRobot_partialImage/$(MODE_DIR)/% : DEBUGFLAGS_Assembler = -O2 -fstrength-reduce -fno-builtin
endif
JDLRobot_partialImage/$(MODE_DIR)/% : IDE_INCLUDES = -I$(WIND_BASE)/target/h/wrn/coreip -I$(WIND_BASE)/target/h -I$(WS_ROOT_DIR)/WPILib 
JDLRobot_partialImage/$(MODE_DIR)/% : IDE_LIBRARIES = 
JDLRobot_partialImage/$(MODE_DIR)/% : IDE_DEFINES = 
JDLRobot_partialImage/$(MODE_DIR)/% : PROJECT_TYPE = DKM
JDLRobot_partialImage/$(MODE_DIR)/% : DEFINES = 
JDLRobot_partialImage/$(MODE_DIR)/% : EXPAND_DBG = 0
JDLRobot_partialImage/$(MODE_DIR)/% : VX_CPU_FAMILY = ppc
JDLRobot_partialImage/$(MODE_DIR)/% : CPU = PPC603
JDLRobot_partialImage/$(MODE_DIR)/% : TOOL_FAMILY = gnu
JDLRobot_partialImage/$(MODE_DIR)/% : TOOL = gnu
JDLRobot_partialImage/$(MODE_DIR)/% : TOOL_PATH = 
JDLRobot_partialImage/$(MODE_DIR)/% : CC_ARCH_SPEC = -mcpu=603 -mstrict-align -mno-implicit-fp
JDLRobot_partialImage/$(MODE_DIR)/% : LIBPATH = 
JDLRobot_partialImage/$(MODE_DIR)/% : LIBS = 
JDLRobot_partialImage/$(MODE_DIR)/% : OBJ_DIR := JDLRobot_partialImage/$(MODE_DIR)

JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Collector.o : $(PRJ_ROOT_DIR)/Collector.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Display.o : $(PRJ_ROOT_DIR)/Display.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/DriveTrain.o : $(PRJ_ROOT_DIR)/DriveTrain.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/JoystickWrapper.o : $(PRJ_ROOT_DIR)/JoystickWrapper.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/LSM303_I2C.o : $(PRJ_ROOT_DIR)/LSM303_I2C.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Logger.o : $(PRJ_ROOT_DIR)/Logger.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Math.o : $(PRJ_ROOT_DIR)/Math.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SharpIR.o : $(PRJ_ROOT_DIR)/SharpIR.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Shooter.o : $(PRJ_ROOT_DIR)/Shooter.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SquareFinder.o : $(PRJ_ROOT_DIR)/SquareFinder.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Vision.o : $(PRJ_ROOT_DIR)/Vision.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/robot.o : $(PRJ_ROOT_DIR)/robot.cpp $(FORCE_FILE_BUILD)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc $(DEBUGFLAGS_C++-Compiler) $(CC_ARCH_SPEC) -ansi -Wall  -MD -MP $(ADDED_C++FLAGS) $(IDE_INCLUDES) $(ADDED_INCLUDES) -DCPU=$(CPU) -DTOOL_FAMILY=$(TOOL_FAMILY) -DTOOL=$(TOOL) -D_WRS_KERNEL   $(DEFINES) -o "$@" -c "$<"


OBJECTS_JDLRobot_partialImage = JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Collector.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Display.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/DriveTrain.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/JoystickWrapper.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/LSM303_I2C.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Logger.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Math.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SharpIR.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Shooter.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SquareFinder.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Vision.o \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/robot.o

JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage.o : $(OBJECTS_JDLRobot_partialImage)
	$(TRACE_FLAG)if [ ! -d "`dirname "$@"`" ]; then mkdir -p "`dirname "$@"`"; fi;echo "building $@"; $(TOOL_PATH)ccppc -r -nostdlib -Wl,-X  -o "$@" $(OBJECTS_JDLRobot_partialImage) $(LIBPATH) $(LIBS) $(ADDED_LIBPATH) $(ADDED_LIBS)  && if [ "$(EXPAND_DBG)" = "1" ]; then plink "$@";fi

JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage_compile_file : $(FILE) ;

_clean :: JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage_clean

JDLRobot_partialImage/$(MODE_DIR)/JDLRobot_partialImage_clean : 
	$(TRACE_FLAG)if [ -d "JDLRobot_partialImage" ]; then cd "JDLRobot_partialImage"; rm -rf $(MODE_DIR); fi

force : 

DEP_FILES := JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Collector.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Display.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/DriveTrain.d \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/JoystickWrapper.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/LSM303_I2C.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Logger.d \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Math.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SharpIR.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Shooter.d \
	 JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/SquareFinder.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/Vision.d JDLRobot_partialImage/$(MODE_DIR)/Objects/JDLRobot/robot.d
-include $(DEP_FILES)



-include $(PRJ_ROOT_DIR)/*.makefile

-include *.makefile

JOBS?=1
ifeq ($(JOBS),1)
main_all : external_build  $(PROJECT_TARGETS)
	@echo "make: built targets of `pwd`"
else
main_all : external_build 
	@$(MAKE) -f $(MAKEFILE) --jobs $(JOBS) $(MFLAGS) $(PROJECT_TARGETS);\
	echo "make: built targets of `pwd`"
endif 

# entry point for extending the build
external_build ::
	@echo ""

# main entry point for pre processing prior to the build
pre_build :: $(PRE_BUILD_STEP) generate_sources
	@echo ""

# entry point for generating sources prior to the build
generate_sources ::
	@echo ""

# main entry point for post processing after the build
post_build :: $(POST_BUILD_STEP) deploy_output
	@echo ""

# entry point for deploying output after the build
deploy_output ::
	@echo ""

clean :: external_clean $(CLEAN_STEP) _clean

# entry point for extending the build clean
external_clean ::
	@echo ""
