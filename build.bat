@echo off

REM
REM %Starfield_SDL%: Location of SDL
REM %Starfield_Ion$: Location of ion executable
REM

set SDLInclude=%Starfield_SDL%\include
set SDLLib=%Starfield_SDL%\lib\x64\SDL2.lib %Starfield_SDL%\lib\x64\SDL2main.lib

set LinkerOptions=-subsystem:windows

set NOpt=-Od -Ob1 -MTd
set Opt=-O2 -GL -Ob2 -MT
set MSVCOptions=-W3 -WX -wd4101
set ClangOptions=-mfma -W0 -arch:AVX2
set CompilerOptions=-Zi -Oi %Opt% -nologo -fp:fast

call %Starfield_Ion% -notypeinfo starfield
if errorlevel 1 goto end

mkdir build 2> nul
pushd build
call cl %MSVCOptions% %CompilerOptions% -I%SDLInclude% -Festarfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
REM call clang-cl %ClangOptions% %CompilerOptions% -I%SDLInclude% -Festarfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
popd

:end
