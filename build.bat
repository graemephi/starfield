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

set DOptimisationLevel=-Od -Ob1 -MTd
set OptimisationLevel=-Ox -Ob2 -MT
set MSVCOptions=-W3 -WX
set ClangOptions=-mfma -W0 -arch:AVX2
set CompilerOptions=-Zi -Oi %OptimisationLevel% -nologo -fp:fast

call %Starfield_Ion% -notypeinfo starfield
if errorlevel 1 goto end

mkdir build 2> nul
pushd build
REM call cl %MSVCOptions% %CompilerOptions% -I%SDLInclude% -Festarfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
call clang-cl %ClangOptions% %CompilerOptions% -I%SDLInclude% -Festarfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
popd

:end