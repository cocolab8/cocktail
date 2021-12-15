# ifndef yydeftab
# define yydeftab

/* Ich, Doktor Josef Grosch, Informatiker, July 1996 */

# include "ratc.h"
# include "Idents.h"
# include "Tree.h"

extern	void	begin_deftab	ARGS ((void));
extern	void	close_deftab	ARGS ((void));
extern	void	push		ARGS ((rbool));
extern	void	pop		ARGS ((void));
extern	void	typedef_on	ARGS ((void));
extern	void	typedef_off	ARGS ((void));
extern	rbool	is_typedef	ARGS ((void));
extern	void	store_type	ARGS ((tspecifier_l));
extern	void	reset_type	ARGS ((void));
extern	ttype	current_type	ARGS ((void));
extern	tspecifier current_specifiers ARGS ((void));
extern	void	declare		ARGS ((tIdent)); 
extern	void	declare_enum	ARGS ((tIdent)); 
extern	rbool	is_type_name	ARGS ((tIdent)); 

# endif
