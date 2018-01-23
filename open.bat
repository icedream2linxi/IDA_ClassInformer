set CURRENT_DIR=%~dp0
set QTDIR=%CURRENT_DIR%..\QTDIR
set IDASUPPORT=%CURRENT_DIR%..\my-ida-support-library
set IDADIR=%CURRENT_DIR%..\
call "%VS140COMNTOOLS%..\..\VC\vcvarsall.bat" x86
devenv "%CURRENT_DIR%IDA_ClassInformer.sln"