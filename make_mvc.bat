cd %1
if "%WIBU%"=="1" goto wibu
nmake /c /f makefile.mvc
goto endif

:wibu
nmake WIBU_FLAGS="/IC:\Programme\WibuKey\DevKit\include /DWITH_WIBU_KEY" WIBU_OBJ=license.obj WIBU_LIB=C:\Programme\WibuKey\DevKit\lib\Wkwin32.lib /c /f makefile.mvc
:endif
cd ..\..
