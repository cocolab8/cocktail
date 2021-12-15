# Microsoft Visual C++ generated build script - Do not modify

PROJ = LIBREUSE
DEBUG = 1
PROGTYPE = 4
CALLER = 
ARGS = 
DLLS = 
D_RCDEFINES = -d_DEBUG
R_RCDEFINES = -dNDEBUG
ORIGIN = MSVC
ORIGIN_VER = 1.00
PROJPATH = G:\TOOLS\REUSE\CPP\
USEMFC = 0
CC = cl
CPP = cl
CXX = cl
CCREATEPCHFLAG = 
CPPCREATEPCHFLAG = 
CUSEPCHFLAG = 
CPPUSEPCHFLAG = 
FIRSTC =             
FIRSTCPP = DYNARRAY.CXX
RC = rc
CFLAGS_D_LIB = /nologo /G2 /W4 /Z7 /AH /Od /D "_DEBUG" /I "." /I ".." /I "..\.." /GA 
CFLAGS_R_LIB = /nologo /Gs /G2 /W4 /AH /Ox /D "NDEBUG" /I "." /I ".." /I "..\.." /FR /GA 
RCFLAGS = /nologo
RESFLAGS = /nologo
RUNFLAGS = 
OBJS_EXT = 
LIBS_EXT = 
!if "$(DEBUG)" == "1"
CFLAGS = $(CFLAGS_D_LIB)
LFLAGS = 
LIBS = 
MAPFILE = nul
RCDEFINES = $(D_RCDEFINES)
!else
CFLAGS = $(CFLAGS_R_LIB)
LFLAGS = 
LIBS = 
MAPFILE = nul
RCDEFINES = $(R_RCDEFINES)
!endif
!if [if exist MSVC.BND del MSVC.BND]
!endif
SBRS = DYNARRAY.SBR \
		ERRORS.SBR \
		GENERAL.SBR \
		GLOBAL.SBR \
		IDENTS.SBR \
		POSITION.SBR \
		RELATION.SBR \
		RGETOPT.SBR \
		RMEMORY.SBR \
		RSRCMEM.SBR \
		RSYSTEM.SBR \
		RTIME.SBR \
		SETS.SBR \
		SOURCE.SBR \
		STRINGM.SBR


DYNARRAY_DEP = g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\dynarray.h \
	g:\tools\reuse\cpp\general.h \
	g:\tools\reuse\cpp\rmemory.h


ERRORS_DEP = g:\tools\reuse\cpp\errors.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\position.h \
	g:\tools\reuse\cpp\idents.h \
	g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\sets.h \
	g:\tools\reuse\cpp\rstring.h \
	g:\tools\reuse\cpp\rsystem.h \
	g:\tools\reuse\cpp\rmemory.h \
	g:\tools\reuse\cpp\global.h


GENERAL_DEP = g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\general.h


GLOBAL_DEP = g:\tools\reuse\cpp\global.h \
	g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\idents.h \
	g:\tools\reuse\cpp\errors.h


IDENTS_DEP = g:\tools\reuse\cpp\idents.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\rstring.h \
	g:\tools\reuse\cpp\dynarray.h \
	g:\tools\reuse\cpp\global.h \
	g:\tools\reuse\cpp\errors.h


POSITION_DEP = g:\tools\reuse\cpp\position.h \
	g:\tools\reuse\cpp\idents.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\rstring.h \
	g:\tools\reuse\cpp\global.h \
	g:\tools\reuse\cpp\errors.h


RELATION_DEP = g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\relation.h \
	g:\tools\reuse\cpp\sets.h \
	g:\tools\reuse\cpp\general.h \
	g:\tools\reuse\cpp\dynarray.h


RGETOPT_DEP = g:\tools\reuse\cpp\rgetopt.h


RMEMORY_DEP = g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\rmemory.h \
	g:\tools\reuse\cpp\rsystem.h \
	g:\tools\reuse\cpp\general.h


RSRCMEM_DEP = g:\tools\reuse\cpp\rsrcmem.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\position.h \
	g:\tools\reuse\cpp\idents.h \
	g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\dynarray.h \
	g:\tools\reuse\cpp\rmemory.h


RSYSTEM_DEP = g:\tools\reuse\cpp\rsystem.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\rstring.h


RTIME_DEP = g:\tools\reuse\cpp\rtime.h \
	g:\tools\reuse\cpp\rsystem.h \
	g:\tools\reuse\cpp\ratc.h


SETS_DEP = g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\sets.h \
	g:\tools\reuse\cpp\dynarray.h \
	g:\tools\reuse\cpp\general.h


SOURCE_DEP = g:\tools\reuse\cpp\source.h \
	g:\tools\reuse\cpp\rsystem.h \
	g:\tools\reuse\cpp\ratc.h


STRINGM_DEP = g:\tools\reuse\cpp\stringm.h \
	g:\tools\reuse\cpp\ratc.h \
	g:\tools\reuse\cpp\rstring.h \
	g:\tools\reuse\cpp\general.h \
	g:\tools\reuse\cpp\rmemory.h


all:	$(PROJ).LIB

DYNARRAY.OBJ:	DYNARRAY.CXX $(DYNARRAY_DEP)
	$(CPP) $(CFLAGS) $(CPPCREATEPCHFLAG) /c DYNARRAY.CXX

ERRORS.OBJ:	ERRORS.CXX $(ERRORS_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c ERRORS.CXX

GENERAL.OBJ:	GENERAL.CXX $(GENERAL_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c GENERAL.CXX

GLOBAL.OBJ:	GLOBAL.CXX $(GLOBAL_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c GLOBAL.CXX

IDENTS.OBJ:	IDENTS.CXX $(IDENTS_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c IDENTS.CXX

POSITION.OBJ:	POSITION.CXX $(POSITION_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c POSITION.CXX

RELATION.OBJ:	RELATION.CXX $(RELATION_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RELATION.CXX

RGETOPT.OBJ:	RGETOPT.CXX $(RGETOPT_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RGETOPT.CXX

RMEMORY.OBJ:	RMEMORY.CXX $(RMEMORY_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RMEMORY.CXX

RSRCMEM.OBJ:	RSRCMEM.CXX $(RSRCMEM_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RSRCMEM.CXX

RSYSTEM.OBJ:	RSYSTEM.CXX $(RSYSTEM_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RSYSTEM.CXX

RTIME.OBJ:	RTIME.CXX $(RTIME_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c RTIME.CXX

SETS.OBJ:	SETS.CXX $(SETS_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c SETS.CXX

SOURCE.OBJ:	SOURCE.CXX $(SOURCE_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c SOURCE.CXX

STRINGM.OBJ:	STRINGM.CXX $(STRINGM_DEP)
	$(CPP) $(CFLAGS) $(CPPUSEPCHFLAG) /c STRINGM.CXX

$(PROJ).LIB::	DYNARRAY.OBJ ERRORS.OBJ GENERAL.OBJ GLOBAL.OBJ IDENTS.OBJ POSITION.OBJ \
	RELATION.OBJ RGETOPT.OBJ RMEMORY.OBJ RSRCMEM.OBJ RSYSTEM.OBJ RTIME.OBJ SETS.OBJ SOURCE.OBJ \
	STRINGM.OBJ $(OBJS_EXT)
	echo >NUL @<<$(PROJ).CRF
$@ /PAGESIZE:64
y
+DYNARRAY.OBJ &
+ERRORS.OBJ &
+GENERAL.OBJ &
+GLOBAL.OBJ &
+IDENTS.OBJ &
+POSITION.OBJ &
+RELATION.OBJ &
+RGETOPT.OBJ &
+RMEMORY.OBJ &
+RSRCMEM.OBJ &
+RSYSTEM.OBJ &
+RTIME.OBJ &
+SETS.OBJ &
+SOURCE.OBJ &
+STRINGM.OBJ &
;
<<
	if exist $@ del $@
	lib @$(PROJ).CRF

$(PROJ).BSC: $(SBRS)
	bscmake @<<
/o$@ $(SBRS)
<<
