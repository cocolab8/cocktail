/* $Id: Tables.h,v 1.4 2001/01/25 16:18:22 grosch rel $ */

/*
 * $Log: Tables.h,v $
 * Revision 1.4  2001/01/25 16:18:22  grosch
 * introduced ifdef HAVE_ARGS
 * deleted superfluous typedefs
 *
 * Revision 1.3  2001/01/10 16:07:25  grosch
 * fixed difference in declarations of put_whole_action
 *
 * Revision 1.2  2001/01/10 15:55:41  grosch
 * introduced ifdef HAVE_ARGS
 *
 * Revision 1.1  1997/05/27 21:46:12  grosch
 * truncation of filenames to 8.3 format
 *
 * Revision 1.0  1993/08/17 16:24:31  grosch
 * Initial revision
 *
 */

/* variables and procedure for list management */

#include "ratc.h"

struct tCell {
		tStringRef car;
		struct tCell * cdr;
	     };

struct tElmt {
		int tag; /* 0 = symbol, 1 = action, 2 = lhs, 3 = delim, 4 = last action  */
		union {
			tStringRef symbol;
			struct tCell * action;
		      } car;
		struct tElmt * cdr;
	     };

extern void put_name		ARGS ((tStringRef name));
extern void process_names	ARGS ((void));

extern void put_token		ARGS ((tStringRef name, int value));
extern void print_tokens	ARGS ((void));

extern int type;

extern void put_type		ARGS ((tStringRef name, tStringRef type));
extern tStringRef get_type	ARGS ((int n));

extern void put_oper		ARGS ((tStringRef s));
extern void print_opers		ARGS ((void));

extern void put_global		ARGS ((tStringRef v));
extern void yacc_globals	ARGS ((void));
extern void print_global	ARGS ((void));

extern struct tCell * action_list;
extern void put_action		ARGS ((tStringRef v));

extern tStringRef start_symbol;

extern struct tElmt * rule_elmts_list;
extern void put_lhs		ARGS ((tStringRef v));
extern void put_symbol		ARGS ((tStringRef v));
extern void put_whole_action	ARGS ((struct tCell * v, rbool b));
extern void put_delim		ARGS ((tStringRef v));

extern struct tCell * text_list;
extern void append_text		ARGS ((tStringRef v));

extern void put_text		ARGS ((struct tCell * v));
extern void put_rule		ARGS ((struct tElmt * v));
extern void print_rules		ARGS ((void));
extern int generate_actions;
