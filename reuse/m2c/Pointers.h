# define DEFINITION_Pointers

# ifdef __MTC
#  define PTRDIFF(p, q)	((unsigned int) (p - q))
#  define PTRINC(p, i)	(p + i)
#  define PTRINT(p)	(unsigned int) (uintptr_t) p
#  define INTPTR(i)	(char *) (uintptr_t) i
#  define BEGIN_Pointers()
# else
extern LONGINT	PTRDIFF	ARGS ((ADDRESS p, ADDRESS q));
extern ADDRESS	PTRINC	ARGS ((ADDRESS p, LONGCARD i));
extern LONGCARD	PTRINT	ARGS ((ADDRESS p));
extern ADDRESS	INTPTR	ARGS ((LONGCARD i));
extern void BEGIN_Pointers ARGS ((void));
# endif
