(* $Id: rSystem.md,v 1.14 2003/04/25 08:52:20 grosch rel $ *)

(*
 * $Log: rSystem.md,v $
 * Revision 1.14  2003/04/25 08:52:20  grosch
 * added license control based on WIBU-KEY
 *
 * Revision 1.13  1998/04/07 14:44:32  grosch
 * added function rtpqx
 *
 * Revision 1.12  1997/05/27 11:57:56  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.11  1997/04/17 08:39:32  grosch
 * added function DirectorySeparator
 *
 * Revision 1.10  1994/02/25  15:00:56  grosch
 * added function GetEnvVar
 *
 * Revision 1.9  1993/08/18  15:06:51  grosch
 * rename System and Memory to rSystem and rMemory
 *
 * Revision 1.8  1992/09/24  13:06:53  grosch
 * adaption to MS-DOS
 *
 * Revision 1.7  1992/02/04  08:38:39  grosch
 * correction of new system interface
 *
 * Revision 1.6  1992/01/30  13:23:29  grosch
 * redesign of interface to operating system
 *
 * Revision 1.5  1992/01/28  16:59:23  grosch
 * revision of the Makefile
 *
 * Revision 1.4  1991/11/21  14:35:51  grosch
 * new version of RCS on SPARC
 *
 * Revision 1.3  91/03/20  09:29:48  grosch
 * added malloc as alternative to sbrk
 * 
 * Revision 1.2  89/08/09  12:00:48  grosch
 * added return value to svc-call system
 * 
 * Revision 1.1  89/03/02  17:32:24  grosch
 * added system call named 'system'
 * 
 * Revision 1.0  88/10/04  11:47:33  grosch
 * Initial revision
 * 
 *)

(* Ich, Doktor Josef Grosch, Informatiker, Jan. 1992 *)

FOREIGN MODULE rSystem;		(* interface for machine dependencies	*)

FROM SYSTEM	IMPORT ADDRESS;

CONST
   cMaxFile	= 32;
   StdInput	= 0;
   StdOutput	= 1;
   StdError	= 2;

TYPE
   tFile	= INTEGER [-1 .. cMaxFile];
   tArrayChar	= POINTER TO ARRAY [0..1023] OF CHAR;

			(* binary IO		*)

PROCEDURE OpenInput	(VAR FileName: ARRAY OF CHAR): tFile;
PROCEDURE OpenOutput	(VAR FileName: ARRAY OF CHAR): tFile;
PROCEDURE rRead		(File: tFile; Buffer: ADDRESS; Size: INTEGER): INTEGER;
PROCEDURE rWrite	(File: tFile; Buffer: ADDRESS; Size: INTEGER): INTEGER;
PROCEDURE rClose	(File: tFile);
PROCEDURE IsCharacterSpecial (File: tFile): BOOLEAN;
PROCEDURE DirectorySeparator (): CHAR;

			(* calls other than IO	*)

PROCEDURE rAlloc	(ByteCount: LONGINT): ADDRESS;
PROCEDURE rTime		(): LONGINT;
PROCEDURE rtpqx		(VAR p: ARRAY OF CHAR): tArrayChar;
PROCEDURE rtpqy		(): BOOLEAN;
PROCEDURE GetArgCount	(): CARDINAL;
PROCEDURE GetArgument	(ArgNum: INTEGER; VAR Argument: ARRAY OF CHAR);
PROCEDURE GetEnvVar	(VAR Variable: ARRAY OF CHAR): tArrayChar;
PROCEDURE PutArgs	(Argc: INTEGER; Argv: ADDRESS);
PROCEDURE rErrNo	(): INTEGER;
PROCEDURE rSystem	(VAR String: ARRAY OF CHAR): INTEGER;
PROCEDURE rExit		(Status: INTEGER);

END rSystem.
