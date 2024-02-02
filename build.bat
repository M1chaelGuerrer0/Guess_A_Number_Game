@echo off

IF NOT EXIST bin mkdir bin
IF NOT EXIST bin-int mkdir bin-int

pushd bin-int

cl ..\main.cpp ..\game.cpp /c
cl main.obj game.obj /link /out:run.exe

popd

move bin-int\run.exe bin\run.exe