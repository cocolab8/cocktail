-- $Id:$

class MY_FILE

creation

    make_read, make_write, make_read_from_fp, make_write_from_fp

feature

    -- Creation

    make_read (fn : STRING) is
	    -- Open a readable file with fn as file name.  Use error to
	    -- determine whether the open succeeded.
	require
	    filename_not_void : fn /= void
	do
	    file_pointer := c_make_read (fn)
	    -- if file_pointer = null_pointer then error := true end
	end

    make_write (fn : STRING) is
	    -- Open a writable file with fn as file name.  Use error to
	    -- determine whether the open succeeded.
	require
	    filename_not_void : fn /= void
	do
	    file_pointer := c_make_write (fn)
	    -- if file_pointer = null_pointer then error := true end
	end

    make_read_from_fp (fp : POINTER) is
	    -- Open a readable file with fp as file pointer assumed to be
	    -- already open.  The standard input file pointer is accessable via
	    -- the stdin_fp feature.
	require
	    fp_not_null : -- fp /= null_pointer
	do
	    file_pointer := fp
	    -- if file_pointer = null_pointer then error := true end
	end

    make_write_from_fp (fp : POINTER) is
	    -- Open a writable file with fp as file pointer assumed to be
	    -- already open. The standard output and error file pointers are
	    -- accessable via the stdout_fp and stderr_fp features.
	require
	    fp_not_null : -- fp /= null_pointer
	do
	    file_pointer := fp
	    -- if file_pointer = null_pointer then error := true end
	end

feature

    -- Flushing and closing

    close is
	    -- Close file.
	do
	    c_close (file_pointer)
	end

    flush is
	    -- Flush any buffered output to the file without closing the file.
	do
	    c_flush (file_pointer)
	end

feature

    -- End-of-file detection behavior

    interactive : BOOLEAN
	    -- Which style of end-of-file detection does this file use?
	    -- Interactive end-of-file detection does not try to lookahead at
	    -- unread characters in the file, while non-interactive detection
	    -- does.

    interactive_mode is
	    -- Change this file's end-of-file detection to not use lookahead.
	    -- (Not the default).
	do
	    interactive := true
	ensure
	    is_interactive : interactive
	end

    non_interactive_mode is
	    -- Change this file's end-of-file detection to use lookahead.
	    -- (The default).
	do
	    interactive := false
	ensure
	    not_interactive : not interactive
	end

    end_of_file : BOOLEAN
	    -- Has an EOF been detected?

feature

    -- Error status

    error : BOOLEAN
	    -- Has an error occured on the file?

    clear_error is
	    -- Clear the error and end-of-file status for the file
	do
	    error := false
	    end_of_file := false
	end

feature

    -- Output routines

    putint (n : INTEGER) is
	    -- Write n at end of file.
	do
	    c_putint (file_pointer, n)
	end

    putpointer (p : POINTER) is
	    -- Write p at end of file.
	do
	    c_putpointer (file_pointer, p)
	end

    putbool (b : BOOLEAN) is
	    -- Write value of b at end of file (as true or false).
	do
	    c_putbool (file_pointer, b)
	end

    putreal (r : REAL) is
	    -- Write r at end of file.
	do
	    c_putreal (file_pointer, r)
	end

    putdouble (d : DOUBLE) is
	    -- Write d at end of file.
	do
	    c_putdouble (file_pointer, d)
	end

    putstring (s : STRING) is
	    -- Write s at end of file.
	do
	    c_putstring (file_pointer, s)
	end

    putchar (c : CHARACTER) is
	    -- Write c at end of file.
	do
	    c_putchar (file_pointer, c)
	end

    new_line is
	    -- Write a new line character at end of file.
	do
	    c_new_line (file_pointer)
	end

feature

    -- Input routines

    readint is
	    -- Read a new decimal integer from file.
	    -- Make result available as lastint.
	do
	    lastint := c_readint (file_pointer)
	end

    readpointer is
	    -- Read a new hexadecimal pointer from file.
	    -- Make result available as lastpointer.
	do
	    lastpointer := c_readpointer (file_pointer)
	end

    readdouble is
	    -- Read a new double from file.
	    -- Make result available as lastdouble.
	do
	    lastdouble := c_readdouble (file_pointer)
	end

    readreal is
	    -- Read a new real from file.
	    -- Make result available as lastreal.
	do
	    lastreal := c_readreal (file_pointer)
	end

    readchar is
	    -- Read a new character from file.
	    -- Make result available as lastchar.
	do
	    lastchar := c_readchar (file_pointer)
	end

    readbool is
	    -- Read a new boolean from file.
	    -- Make result available as lastbool.
	do
	    lastbool := c_readbool (file_pointer)
	end

    readline is
	    -- Read a string until a new line or an end of file is encountered.
	    -- Make result available in laststring.
	    -- New line will be consumed but not part of laststring.
	do
	    laststring := c_readline (file_pointer)
	end

    readstream (num_chars : INTEGER) is
	    -- Read a string of at most num_chars characters
	    -- or until end of file is encountered.
	    -- Make result available in laststring.
	do
	    laststring := c_readstream (file_pointer, num_chars)
	end

    readword is
	    -- Read a string excluding white space and stripping leading white
	    -- space. Make result available in laststring.
	do
	    laststring := c_readword (file_pointer)
	end

    next_line is
	    -- Move to next input line.
	do
	    c_next_line (file_pointer)
	end

feature

    -- Attributes to remember the last item read by the associated read*
    -- routines.

    lastchar : CHARACTER
	    -- Last character read by readchar.

    lastint : INTEGER
	    -- Last integer read by readint.

    lastreal : REAL
	    -- Last real read by readreal.

    lastpointer : POINTER
	    -- Last pointer read by readpointer.

    lastbool : BOOLEAN
	    -- Last boolean read by readbool.

    lastdouble : DOUBLE
	    -- Last double read by readdouble.

    laststring : STRING
	    -- Last string read by readline, readword, or readstream

feature

    -- Standard file pointers (suitable for use by the make_read_by_fp
    -- and make_write_by_fp routines).

    stdin_fp : POINTER
	    -- Standard input (corresponds to C's stdin)
	is external "C" alias "c_get_stdin" end

    stdout_fp : POINTER
	    -- Standard output (corresponds to C's stdout)
	is external "C" alias "c_get_stdout" end

    stderr_fp : POINTER
	    -- Standard error (corresponds to C's stderr)
	is external "C" alias "c_get_stderr" end

feature

    file_pointer : POINTER
	    -- File pointer as used by C's buffered files (stdio.h's FILE*)

feature {NONE}

    c_make_read		(n: STRING): POINTER		is external "C" end
    c_make_write	(n: STRING): POINTER		is external "C" end

    c_close		(f: POINTER)			is external "C" end
    c_flush		(f: POINTER)			is external "C" end
    c_putint		(f: POINTER; n: INTEGER)	is external "C" end
    c_putpointer	(f: POINTER; p: POINTER)	is external "C" end
    c_putbool		(f: POINTER; b: BOOLEAN)	is external "C" end
    c_putreal		(f: POINTER; r: REAL)		is external "C" end
    c_putdouble		(f: POINTER; d: DOUBLE)		is external "C" end
    c_putstring		(f: POINTER; s: STRING)		is external "C" end
    c_putchar		(f: POINTER; c: CHARACTER)	is external "C" end
    c_new_line		(f: POINTER)			is external "C" end

    c_readint		(f: POINTER): INTEGER		is external "C" end
    c_readpointer	(f: POINTER): POINTER		is external "C" end
    c_readdouble	(f: POINTER): DOUBLE		is external "C" end
    c_readreal		(f: POINTER): REAL		is external "C" end
    c_readchar		(f: POINTER): CHARACTER		is external "C" end
    c_readbool		(f: POINTER): BOOLEAN		is external "C" end
    c_readline		(f: POINTER): STRING		is external "C" end
    c_readstream	(f: POINTER; n: INTEGER): STRING is external "C" end
    c_readword		(f: POINTER): STRING		is external "C" end
    c_next_line		(f: POINTER)			is external "C" end

end -- class MY_FILE
