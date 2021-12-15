# Microsoft Developer Studio Project File - Name="libreuse" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=libreuse - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "libreuse.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "libreuse.mak" CFG="libreuse - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "libreuse - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "libreuse - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "libreuse - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /W4 /GX /O2 /I "." /I ".." /I "..\.." /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /YX /FD /c
# ADD BASE RSC /l 0x407
# ADD RSC /l 0x407
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ELSEIF  "$(CFG)" == "libreuse - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /Z7 /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD CPP /nologo /W4 /GX /Z7 /Od /I "." /I ".." /I "..\.." /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /YX /FD /c
# ADD BASE RSC /l 0x407
# ADD RSC /l 0x407
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo

!ENDIF 

# Begin Target

# Name "libreuse - Win32 Release"
# Name "libreuse - Win32 Debug"
# Begin Source File

SOURCE=.\DynArray.cxx
# End Source File
# Begin Source File

SOURCE=.\Errors.cxx
# End Source File
# Begin Source File

SOURCE=.\General.cxx
# End Source File
# Begin Source File

SOURCE=.\Global.cxx
# End Source File
# Begin Source File

SOURCE=.\Idents.cxx
# End Source File
# Begin Source File

SOURCE=.\Position.cxx
# End Source File
# Begin Source File

SOURCE=.\Relation.cxx
# End Source File
# Begin Source File

SOURCE=.\rFsearch.cxx
# End Source File
# Begin Source File

SOURCE=.\rGetopt.cxx
# End Source File
# Begin Source File

SOURCE=.\rMemory.cxx
# End Source File
# Begin Source File

SOURCE=.\rSrcMem.cxx
# End Source File
# Begin Source File

SOURCE=.\rSystem.cxx
# End Source File
# Begin Source File

SOURCE=.\rTime.cxx
# End Source File
# Begin Source File

SOURCE=.\Sets.cxx
# End Source File
# Begin Source File

SOURCE=.\Source.cxx
# End Source File
# Begin Source File

SOURCE=.\StringM.cxx
# End Source File
# End Target
# End Project
