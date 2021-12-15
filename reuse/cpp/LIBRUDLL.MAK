# Microsoft Visual C++ generated build script - Do not modify

PROJ = LIBRUDLL
DEBUG = 1
PROGTYPE = 1
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
CFLAGS_D_WDLL = /nologo /G2 /W4 /Zi /ALw /Od /D "_DEBUG" /D "_USRDLL" /I "." /I ".." /I "..\.." /FR /GD /Fd"LIBRUDLL.PDB"
CFLAGS_R_WDLL = /nologo /W4 /ALw /O1 /D "NDEBUG" /D "_USRDLL" /I "." /I ".." /I "..\.." /FR /GD 
LFLAGS_D_WDLL = /NOLOGO /ONERROR:NOEXE /NOD /PACKC:61440 /CO /NOE /ALIGN:16 /MAP:FULL
LFLAGS_R_WDLL = /NOLOGO /ONERROR:NOEXE /NOD /PACKC:61440 /NOE /ALIGN:16 /MAP:FULL
LIBS_D_WDLL = oldnames libw commdlg shell olecli olesvr ldllcew
LIBS_R_WDLL = oldnames libw commdlg shell olecli olesvr ldllcew
RCFLAGS = /nologo
RESFLAGS = /nologo
RUNFLAGS = 
DEFFILE = LIBRUDLL.DEF
OBJS_EXT = 
LIBS_EXT = 
!if "$(DEBUG)" == "1"
CFLAGS = $(CFLAGS_D_WDLL)
LFLAGS = $(LFLAGS_D_WDLL)
LIBS = $(LIBS_D_WDLL)
MAPFILE = nul
RCDEFINES = $(D_RCDEFINES)
!else
CFLAGS = $(CFLAGS_R_WDLL)
LFLAGS = $(LFLAGS_R_WDLL)
LIBS = $(LIBS_R_WDLL)
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


all:	$(PROJ).DLL $(PROJ).BSC

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


$(PROJ).DLL::	DYNARRAY.OBJ ERRORS.OBJ GENERAL.OBJ GLOBAL.OBJ IDENTS.OBJ POSITION.OBJ \
	RELATION.OBJ RGETOPT.OBJ RMEMORY.OBJ RSYSTEM.OBJ RTIME.OBJ SETS.OBJ SOURCE.OBJ STRINGM.OBJ $(OBJS_EXT) $(DEFFILE)
	echo >NUL @<<$(PROJ).CRF
DYNARRAY.OBJ +
ERRORS.OBJ +
GENERAL.OBJ +
GLOBAL.OBJ +
IDENTS.OBJ +
POSITION.OBJ +
RELATION.OBJ +
RGETOPT.OBJ +
RMEMORY.OBJ +
RSYSTEM.OBJ +
RTIME.OBJ +
SETS.OBJ +
SOURCE.OBJ +
STRINGM.OBJ +
$(OBJS_EXT)
$(PROJ).DLL
$(MAPFILE)
f:\msvc\lib\+
f:\msvc\mfc\lib\+
$(LIBS)
$(DEFFILE);
<<
	link $(LFLAGS) @$(PROJ).CRF
	$(RC) $(RESFLAGS) $@
	implib /nowep $(PROJ).LIB $(PROJ).DLL


run: $(PROJ).DLL
	$(PROJ) $(RUNFLAGS)


$(PROJ).BSC: $(SBRS)
	bscmake @<<
/o$@ $(SBRS)
<<
