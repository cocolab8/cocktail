# Microsoft Visual C++ generated build script - Do not modify

PROJ = LIBRUDLL
DEBUG = 1
PROGTYPE = 1
CALLER = 
ARGS = 
DLLS = 
D_RCDEFINES = /d_DEBUG 
R_RCDEFINES = /dNDEBUG 
ORIGIN = MSVC
ORIGIN_VER = 1.00
PROJPATH = G:\TOOLS\REUSE\C\
USEMFC = 0
CC = cl
CPP = cl
CXX = cl
CCREATEPCHFLAG = 
CPPCREATEPCHFLAG = 
CUSEPCHFLAG = 
CPPUSEPCHFLAG = 
FIRSTC = DYNARRAY.C  
FIRSTCPP =             
RC = rc
CFLAGS_D_WDLL = /nologo /G2 /W4 /Zi /ALw /Od /D "_DEBUG" /D "_USRDLL" /I "." /I ".." /I "..\.." /GD /Fd"LIBRUDLL.PDB"
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
		IDENTS.SBR \
		POSITION.SBR \
		RELATION.SBR \
		RMEMORY.SBR \
		RSYSTEM.SBR \
		SETS.SBR \
		SOURCE.SBR \
		STRINGM.SBR \
		RTIME.SBR \
		RSTRING.SBR \
		RGETOPT.SBR


DYNARRAY_DEP = g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\rmemory.h


ERRORS_DEP = g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\sets.h


GENERAL_DEP = g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\ratc.h


IDENTS_DEP = g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\sets.h \
	g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\position.h


POSITION_DEP = g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\rstring.h


RELATION_DEP = g:\tools\reuse\c\relation.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\sets.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\dynarray.h


RMEMORY_DEP = g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\stringm.h


RSYSTEM_DEP = g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rstring.h


SETS_DEP = g:\tools\reuse\c\sets.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\general.h


SOURCE_DEP = g:\tools\reuse\c\source.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\rstring.h


STRINGM_DEP = g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\idents.h


RTIME_DEP = g:\tools\reuse\c\rtime.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h


RSTRING_DEP = g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\ratc.h


RGETOPT_DEP = g:\tools\reuse\c\rgetopt.h


all:	$(PROJ).DLL

DYNARRAY.OBJ:	DYNARRAY.C $(DYNARRAY_DEP)
	$(CC) $(CFLAGS) $(CCREATEPCHFLAG) /c DYNARRAY.C

ERRORS.OBJ:	ERRORS.C $(ERRORS_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c ERRORS.C

GENERAL.OBJ:	GENERAL.C $(GENERAL_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c GENERAL.C

IDENTS.OBJ:	IDENTS.C $(IDENTS_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c IDENTS.C

POSITION.OBJ:	POSITION.C $(POSITION_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c POSITION.C

RELATION.OBJ:	RELATION.C $(RELATION_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RELATION.C

RMEMORY.OBJ:	RMEMORY.C $(RMEMORY_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RMEMORY.C

RSYSTEM.OBJ:	RSYSTEM.C $(RSYSTEM_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RSYSTEM.C

SETS.OBJ:	SETS.C $(SETS_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c SETS.C

SOURCE.OBJ:	SOURCE.C $(SOURCE_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c SOURCE.C

STRINGM.OBJ:	STRINGM.C $(STRINGM_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c STRINGM.C

RTIME.OBJ:	RTIME.C $(RTIME_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RTIME.C

RSTRING.OBJ:	RSTRING.C $(RSTRING_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RSTRING.C

RGETOPT.OBJ:	RGETOPT.C $(RGETOPT_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RGETOPT.C


$(PROJ).DLL::	DYNARRAY.OBJ ERRORS.OBJ GENERAL.OBJ IDENTS.OBJ POSITION.OBJ RELATION.OBJ \
	RMEMORY.OBJ RSYSTEM.OBJ SETS.OBJ SOURCE.OBJ STRINGM.OBJ RTIME.OBJ RSTRING.OBJ RGETOPT.OBJ $(OBJS_EXT) $(DEFFILE)
	echo >NUL @<<$(PROJ).CRF
DYNARRAY.OBJ +
ERRORS.OBJ +
GENERAL.OBJ +
IDENTS.OBJ +
POSITION.OBJ +
RELATION.OBJ +
RMEMORY.OBJ +
RSYSTEM.OBJ +
SETS.OBJ +
SOURCE.OBJ +
STRINGM.OBJ +
RTIME.OBJ +
RSTRING.OBJ +
RGETOPT.OBJ +
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
