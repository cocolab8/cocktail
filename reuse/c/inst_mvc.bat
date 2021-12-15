copy libreuse.lib "%ct_dir%"\lib
if not exist "%ct_dir%"\lib\include\%NULL% mkdir "%ct_dir%"\lib\include
copy *.h "%ct_dir%"\lib\include
copy ..\..\config.h "%ct_dir%"\lib\include
copy Errors.c "%ct_dir%"\lib\include
copy Position.c "%ct_dir%"\lib\include
