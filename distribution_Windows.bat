rmdir /S /Q .\bin\Windows\
mkdir .\bin\Windows\images
xcopy /Y .\src\build\Desktop_Qt_6_7_0_MSVC2019_64bit-Release\ExamWebBrowser.exe .\bin\Windows\
xcopy /Y .\images\ExamWebBrowser.png .\bin\Windows\images
xcopy /Y .\images\home.svg .\bin\Windows\images
REM del .\bin\Windows\ExamWebBrowser.ini
X:\Qt\6.7.0\msvc2019_64\bin\windeployqt .\bin\Windows\ExamWebBrowser.exe
cd bin
tar.exe -a -cf X:\ExamWebBrowser\distribution\ExamWebBrowser_Win.zip Windows
cd ..
"X:\Program Files (x86)\NSIS\makensis.exe" ExamWebBrowser.nsi
pause
