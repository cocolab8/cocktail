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
CFLAGS_D_LIB = /nologo /G2 /W4 /Z7 /AH /Od /D "_DEBUG" /I "..\.." /FR /GA 
CFLAGS_R_LIB = /nologo /Gs /G2 /W4 /AH /Ox /D "NDEBUG" /I "..\.." /FR /GA 
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
		IDENTS.SBR \
		POSITION.SBR \
		RELATION.SBR \
		RGETOPT.SBR \
		RMEMORY.SBR \
		RSRCMEM.SBR \
		RSTRING.SBR \
		RSYSTEM.SBR \
		RTIME.SBR \
		SETS.SBR \
		SOURCE.SBR \
		STRINGM.SBR \
		RFSEARCH.SBR


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
	g:\tools\reuse\c\sets.h \
	g:\tools\reuse\c\dynarray.h


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


RGETOPT_DEP = g:\tools\reuse\c\rgetopt.h


RMEMORY_DEP = g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\stringm.h


RSRCMEM_DEP = g:\tools\reuse\c\rsrcmem.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\idents.h \
	g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\errors.h


RSTRING_DEP = g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\ratc.h


RSYSTEM_DEP = g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rstring.h


RTIME_DEP = g:\tools\reuse\c\rtime.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h


SETS_DEP = g:\tools\reuse\c\sets.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\general.h


SOURCE_DEP = g:\tools\reuse\c\source.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\rstring.h


STRINGM_DEP = g:\tools\reuse\c\stringm.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rstring.h \
	g:\tools\reuse\c\general.h \
	g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\errors.h \
	g:\tools\reuse\c\position.h \
	g:\tools\reuse\c\idents.h


RFSEARCH_DEP = g:\tools\reuse\c\rmemory.h \
	g:\tools\reuse\c\ratc.h \
	g:\tools\reuse\c\rsystem.h \
	g:\tools\reuse\c\dynarray.h \
	g:\tools\reuse\c\rfsearch.h \
	g:\tools\reuse\c\rstring.h


all:	$(PROJ).LIB $(PROJ).BSC

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

RGETOPT.OBJ:	RGETOPT.C $(RGETOPT_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RGETOPT.C

RMEMORY.OBJ:	RMEMORY.C $(RMEMORY_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RMEMORY.C

RSRCMEM.OBJ:	RSRCMEM.C $(RSRCMEM_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RSRCMEM.C

RSTRING.OBJ:	RSTRING.C $(RSTRING_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RSTRING.C

RSYSTEM.OBJ:	RSYSTEM.C $(RSYSTEM_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RSYSTEM.C

RTIME.OBJ:	RTIME.C $(RTIME_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RTIME.C

SETS.OBJ:	SETS.C $(SETS_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c SETS.C

SOURCE.OBJ:	SOURCE.C $(SOURCE_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c SOURCE.C

STRINGM.OBJ:	STRINGM.C $(STRINGM_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c STRINGM.C

RFSEARCH.OBJ:	RFSEARCH.C $(RFSEARCH_DEP)
	$(CC) $(CFLAGS) $(CUSEPCHFLAG) /c RFSEARCH.C

$(PROJ).LIB::	DYNARRAY.OBJ ERRORS.OBJ GENERAL.OBJ IDENTS.OBJ POSITION.OBJ RELATION.OBJ \
	RGETOPT.OBJ RMEMORY.OBJ RSRCMEM.OBJ RSTRING.OBJ RSYSTEM.OBJ RTIME.OBJ SETS.OBJ SOURCE.OBJ \
	STRINGM.OBJ RFSEARCH.OBJ $(OBJS_EXT)
	echo >NUL @<<$(PROJ).CRF
$@ /PAGESIZE:64
y
+DYNARRAY.OBJ &
+ERRORS.OBJ &
+GENERAL.OBJ &
+IDENTS.OBJ &
+POSITION.OBJ &
+RELATION.OBJ &
+RGETOPT.OBJ &
+RMEMORY.OBJ &
+RSRCMEM.OBJ &
+RSTRING.OBJ &
+RSYSTEM.OBJ &
+RTIME.OBJ &
+SETS.OBJ &
+SOURCE.OBJ &
+STRINGM.OBJ &
+RFSEARCH.OBJ &
;
<<
	if exist $@ del $@
	lib @$(PROJ).CRF

$(PROJ).BSC: $(SBRS)
	bscmake @<<
/o$@ $(SBRS)
<<
