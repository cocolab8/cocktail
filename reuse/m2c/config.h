# ifdef _MSC_VER

/* config.h for Microsoft Visual C++ */

# if _MSC_VER < 1930

# define HAVE_FCNTL_H		1 /* <fcntl.h>		*/
# define HAVE_INTTYPES_H	0 /* <inttypes.h>	*/
# define HAVE_MEMORY_H		1 /* <memory.h>		*/
# define HAVE_STDARG_H		1 /* <stdarg.h>		*/
# define HAVE_STDDEF_H		1 /* <stddef.h>		*/
# define HAVE_STDINT_H		0 /* <stdint.h>		*/
# define HAVE_STDLIB_H		1 /* <stdlib.h>		*/
# define HAVE_STRINGS_H		0 /* <strings.h>	*/
# define HAVE_STRING_H		1 /* <string.h>		*/
# define HAVE_TIME_H		1 /* <time.h>		*/
# define HAVE_UNISTD_H		0 /* <unistd.h>		*/

# define HAVE_SYS_STAT_H	1 /* <sys/stat.h>	*/
# define HAVE_SYS_TIMES_H	0 /* <sys/times.h>	*/
# define HAVE_SYS_TIME_H	1 /* <sys/time.h>	*/
# define HAVE_SYS_TYPES_H	1 /* <sys/types.h>	*/

# define HAVE_STRCASECMP	0 /* strcasecmp		*/
# define HAVE_STRNCASECMP	0 /* strncasecmp	*/

# define HAVE_INTPTR_T		0 /* intptr_t		*/
# define HAVE_UINTPTR_T		0 /* uintptr_t		*/

# else

# define HAVE_FCNTL_H		1 /* <fcntl.h>		*/
# define HAVE_INTTYPES_H	1 /* <inttypes.h>	*/
# define HAVE_MEMORY_H		1 /* <memory.h>		*/
# define HAVE_STDARG_H		1 /* <stdarg.h>		*/
# define HAVE_STDDEF_H		1 /* <stddef.h>		*/
# define HAVE_STDINT_H		1 /* <stdint.h>		*/
# define HAVE_STDLIB_H		1 /* <stdlib.h>		*/
# define HAVE_STRINGS_H		0 /* <strings.h>	*/
# define HAVE_STRING_H		1 /* <string.h>		*/
# define HAVE_TIME_H		1 /* <time.h>		*/
# define HAVE_UNISTD_H		0 /* <unistd.h>		*/

# define HAVE_SYS_STAT_H	1 /* <sys/stat.h>	*/
# define HAVE_SYS_TIMES_H	0 /* <sys/times.h>	*/
# define HAVE_SYS_TIME_H	0 /* <sys/time.h>	*/
# define HAVE_SYS_TYPES_H	1 /* <sys/types.h>	*/

# define HAVE_STRCASECMP	0 /* strcasecmp		*/
# define HAVE_STRNCASECMP	0 /* strncasecmp	*/

# define HAVE_INTPTR_T		1 /* intptr_t		*/
# define HAVE_UINTPTR_T		1 /* uintptr_t		*/

# endif

# if _MSC_VER <= 800

# define HAVE_WCHAR_H		0 /* <wchar.h>		*/
# define HAVE_WCHAR_T		0 /* wchar_t		*/
# define HAVE_WCSCPY		0 /* wcscpy		*/
# define HAVE_WCSLEN		0 /* wcslen		*/
# define HAVE_LONG_LONG_INT	0
# define HAVE_UNSIGNED_LONG_LONG_INT 0

# else

# define HAVE_WCHAR_H		1 /* <wchar.h>		*/
# define HAVE_WCHAR_T		1 /* wchar_t		*/
# define HAVE_WCSCPY		1 /* wcscpy		*/
# define HAVE_WCSLEN		1 /* wcslen		*/
# define HAVE_LONG_LONG_INT	1
# define HAVE_UNSIGNED_LONG_LONG_INT 1

# endif

# elif defined __IBMC__ || defined __IBMCPP__

/* config.h for IBM XL C/C++ on MVS and z/OS */

# define HAVE_FCNTL_H		1 /* <fcntl.h>		*/
# define HAVE_INTTYPES_H	1 /* <inttypes.h>	*/
# define HAVE_MEMORY_H		1 /* <memory.h>		*/
# define HAVE_STDARG_H		1 /* <stdarg.h>		*/
# define HAVE_STDDEF_H		1 /* <stddef.h>		*/
# define HAVE_STDINT_H		1 /* <stdint.h>		*/
# define HAVE_STDLIB_H		1 /* <stdlib.h>		*/
# define HAVE_STRINGS_H		1 /* <strings.h>	*/
# define HAVE_STRING_H		1 /* <string.h>		*/
# define HAVE_TIME_H		0 /* <time.h>		*/
# define HAVE_UNISTD_H		0 /* <unistd.h>		*/
# define HAVE_WCHAR_H		1 /* <wchar.h>		*/

# define HAVE_SYS_STAT_H	0 /* <sys/stat.h>	*/
# define HAVE_SYS_TIMES_H	0 /* <sys/times.h>	*/
# define HAVE_SYS_TIME_H	0 /* <sys/time.h>	*/
# define HAVE_SYS_TYPES_H	0 /* <sys/types.h>	*/

# define HAVE_STRCASECMP	0 /* strcasecmp		*/
# define HAVE_STRNCASECMP	0 /* strncasecmp	*/
# define HAVE_WCHAR_T		1 /* wchar_t		*/
# define HAVE_WCSCPY		1 /* wcscpy		*/
# define HAVE_WCSLEN		1 /* wcslen		*/

# define HAVE_INTPTR_T		1 /* intptr_t		*/
# define HAVE_UINTPTR_T		1 /* uintptr_t		*/
# define HAVE_LONG_LONG_INT	1
# define HAVE_UNSIGNED_LONG_LONG_INT 1

# else

/* config.h for GNU gcc/g++ on Linux and Cygwin */
/* also     for SUN cc/CC on Solaris */

# define HAVE_FCNTL_H		1 /* <fcntl.h>		*/
# define HAVE_INTTYPES_H	1 /* <inttypes.h>	*/
# define HAVE_MEMORY_H		1 /* <memory.h>		*/
# define HAVE_STDARG_H		1 /* <stdarg.h>		*/
# define HAVE_STDDEF_H		1 /* <stddef.h>		*/
# define HAVE_STDINT_H		1 /* <stdint.h>		*/
# define HAVE_STDLIB_H		1 /* <stdlib.h>		*/
# define HAVE_STRINGS_H		1 /* <strings.h>	*/
# define HAVE_STRING_H		1 /* <string.h>		*/
# define HAVE_TIME_H		1 /* <time.h>		*/
# define HAVE_UNISTD_H		1 /* <unistd.h>		*/
# define HAVE_WCHAR_H		1 /* <wchar.h>		*/

# define HAVE_SYS_STAT_H	1 /* <sys/stat.h>	*/
# define HAVE_SYS_TIMES_H	1 /* <sys/times.h>	*/
# define HAVE_SYS_TIME_H	1 /* <sys/time.h>	*/
# define HAVE_SYS_TYPES_H	1 /* <sys/types.h>	*/

# define HAVE_STRCASECMP	1 /* strcasecmp		*/
# define HAVE_STRNCASECMP	1 /* strncasecmp	*/
# define HAVE_WCHAR_T		1 /* wchar_t		*/
# define HAVE_WCSCPY		1 /* wcscpy		*/
# define HAVE_WCSLEN		1 /* wcslen		*/

# define HAVE_INTPTR_T		1 /* intptr_t		*/
# define HAVE_UINTPTR_T		1 /* uintptr_t		*/
# define HAVE_LONG_LONG_INT	1
# define HAVE_UNSIGNED_LONG_LONG_INT 1

# endif
