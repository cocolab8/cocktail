copy librucpp.lib "%ct_dir%"\lib
if not exist "%ct_dir%"\lib\cplusinc\%NULL% mkdir "%ct_dir%"\lib\cplusinc
copy *.h "%ct_dir%"\lib\cplusinc
copy ..\..\config.h "%ct_dir%"\lib\cplusinc
copy Errors.cxx "%ct_dir%"\lib\cplusinc
copy Position.cxx "%ct_dir%"\lib\cplusinc
