@echo off

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

pushd bin-int

cl ..\main.cpp /link /out:run.exe

popd

move bin-int\run.exe bin\run.exe