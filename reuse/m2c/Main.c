#include "SYSTEM_.h"

#ifndef DEFINITION_General
#include "General.h"
#endif

#ifndef DEFINITION_rMemory
#include "rMemory.h"
#endif

#ifndef DEFINITION_Heap
#include "Heap.h"
#endif

#ifndef DEFINITION_DynArray
#include "DynArray.h"
#endif

#ifndef DEFINITION_Lists
#include "Lists.h"
#endif

#ifndef DEFINITION_Strings
#include "Strings.h"
#endif

#ifndef DEFINITION_WStrings
#include "WStrings.h"
#endif

#ifndef DEFINITION_Texts
#include "Texts.h"
#endif

#ifndef DEFINITION_StringM
#include "StringM.h"
#endif

#ifndef DEFINITION_Idents
#include "Idents.h"
#endif

#ifndef DEFINITION_Sets
#include "Sets.h"
#endif

#ifndef DEFINITION_SetsC
#include "SetsC.h"
#endif

#ifndef DEFINITION_HugeSets
#include "HugeSets.h"
#endif

#ifndef DEFINITION_Relation
#include "Relation.h"
#endif

#ifndef DEFINITION_RelatsC
#include "RelatsC.h"
#endif

#ifndef DEFINITION_IO
#include "IO.h"
#endif

#ifndef DEFINITION_StdIO
#include "StdIO.h"
#endif

#ifndef DEFINITION_Layout
#include "Layout.h"
#endif

#ifndef DEFINITION_Position
#include "Position.h"
#endif

#ifndef DEFINITION_Errors
#include "Errors.h"
#endif

#ifndef DEFINITION_Sort
#include "Sort.h"
#endif

#ifndef DEFINITION_Source
#include "Source.h"
#endif

#ifndef DEFINITION_Pack
#include "Pack.h"
#endif

#ifndef DEFINITION_rSystem
#include "rSystem.h"
#endif

#ifndef DEFINITION_Checks
#include "Checks.h"
#endif

#ifndef DEFINITION_Times
#include "Times.h"
#endif

#ifndef DEFINITION_TclTk
#include "TclTk.h"
#endif



void BEGIN_MODULE ARGS ((void))
{
BEGIN_General ();
BEGIN_rMemory ();
BEGIN_Heap ();
BEGIN_DynArray ();
BEGIN_Lists ();
BEGIN_Strings ();
BEGIN_WStrings ();
BEGIN_Texts ();
BEGIN_StringM ();
BEGIN_Idents ();
BEGIN_Sets ();
BEGIN_SetsC ();
BEGIN_HugeSets ();
BEGIN_Relation ();
BEGIN_RelatsC ();
BEGIN_IO ();
BEGIN_StdIO ();
BEGIN_Layout ();
BEGIN_Position ();
BEGIN_Errors ();
BEGIN_Sort ();
BEGIN_Source ();
BEGIN_Pack ();
BEGIN_rSystem ();
BEGIN_Checks ();
BEGIN_Times ();
BEGIN_TclTk ();

}
