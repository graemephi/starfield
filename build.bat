@echo off

REM VSCodes no good sometimes
if "%1" == "clear" (
    clear
    clear
)

set BaseInclude=C:\code\include
set SDLInclude=%BaseInclude%\SDL2\include
set SDLLib=%BaseInclude%\SDL2\lib\x64\SDL2.lib %BaseInclude%\SDL2\lib\x64\SDL2main.lib

set LinkerOptions=-subsystem:windows

set DebugOptimisationLevel=-Od -Ob1
set OptimisationLevel=-Ox -Ob2
set CompilerOptions=-Zi -Oi %OptimisationLevel% -W3 -WX -nologo -fp:fast -MTd

call C:\code\cloned\bitwise\ion.exe starfield
if errorlevel 1 goto end

mkdir build 2> nul
pushd build
call cl.exe %CompilerOptions% -I%SDLInclude% -I%BaseInclude% -Fe:starfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
popd

:end