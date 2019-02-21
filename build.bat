@echo off

REM
REM %Starfield_SDL%: Location of SDL
REM %Starfield_Ion$: Location of ion executable
REM

REM VSCodes no good sometimes
if "%1" == "clear" (
    clear
    clear
)

set SDLInclude=%Starfield_SDL%\include
set SDLLib=%Starfield_SDL%\lib\x64\SDL2.lib %Starfield_SDL%\lib\x64\SDL2main.lib

set LinkerOptions=-subsystem:windows

set DOptimisationLevel=-Od -Ob1
set OptimisationLevel=-Ox -Ob2
set CompilerOptions=-Zi -Oi %OptimisationLevel% -W3 -WX -nologo -fp:fast -MTd

call %Starfield_Ion% starfield
if errorlevel 1 goto end

mkdir build 2> nul
pushd build
call cl.exe %CompilerOptions% -I%SDLInclude% -Fe:starfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
popd

:end