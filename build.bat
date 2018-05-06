@echo off

clear
clear
clear
clear

set "IONHOME=C:\code\cloned\bitwise\ion"

set "PATH=C:\Visual Studio 2017\MSBuild\15.0\Bin\amd64;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\bin\Hostx64\x64;C:\Visual Studio 2017\Common7\IDE\VC\vcpackages;C:\Visual Studio 2017\Common7\IDE;C:\Visual Studio 2017\Common7\Tools;%PATH%"
set "INCLUDE=C:\Program Files (x86)\Windows Kits\10\Include\10.0.16299.0\um;C:\Program Files (x86)\Windows Kits\10\Include\10.0.16299.0\shared;C:\Program Files (x86)\Windows Kits\10\Include\10.0.16299.0\ucrt;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\include;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\atlmfc\include;%INCLUDE%"
set "LIB=C:\Program Files (x86)\Windows Kits\10\Lib\10.0.16299.0\ucrt\x64;C:\Program Files (x86)\Windows Kits\10\Lib\10.0.16299.0\um\x64;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\lib\x64;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\atlmfc\lib\x64;%LIB%"
set "LIBPATH=C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\lib\x64;C:\Visual Studio 2017\VC\Tools\MSVC\14.12.25827\atlmfc\lib\x64;%LIBPATH%"

set BaseInclude=C:\code\include
set SDLInclude=%BaseInclude%\SDL2\include
set SDLLib=%BaseInclude%\SDL2\lib\x64\SDL2.lib %BaseInclude%\SDL2\lib\x64\SDL2main.lib

set LinkerOptions=-subsystem:windows

set DebugOptimisationLevel=-Od -Ob1
set OptimisationLevel=-Ox -Ob2
set CompilerOptions=-Zi -Oi %OptimisationLevel% -W3 -WX -nologo -fp:fast -MTd

call ion.exe starfield
if errorlevel 1 goto end

mkdir build 2> nul
pushd build
call cl.exe %CompilerOptions% -I%SDLInclude% -I%BaseInclude% -Fe:starfield.exe ..\out_starfield.c %SDLLib% -link %LinkerOptions%
popd

:end