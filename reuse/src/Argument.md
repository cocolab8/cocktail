FOREIGN MODULE Argument;

   TYPE ArgTable =
      POINTER TO ARRAY [0..999] OF
      POINTER TO ARRAY [0..999] OF CHAR;

   PROCEDURE GetArgs (VAR argc: SHORTCARD; VAR argv: ArgTable);

   PROCEDURE GetEnv (VAR env: ArgTable);

END Argument.
