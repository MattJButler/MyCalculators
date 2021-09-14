@echo off
cls
:main
	cls
	echo Please Enter A Number for different options
	echo 1) addition
	echo 2) subtraction
	echo 3) multiplication
	echo 4) division
	set /p option=Pick the number!!!!: 
	
:learning	
	if ["%option%"] == ["1"] goto :addition
	if ["%option%"] == ["2"] goto :subtractionmain
	if ["%option%"] == ["3"] goto :Multiplication
	if ["%option%"] == ["4"] goto :division
:invalid_input
	echo invalid input!!
	pause
	goto :main


:labelpos
	if "%option%" == "1" goto :learning else goto :label
:labelneg
	if "%option%" == "2" goto :learning 
:labeldiv
	if "%option%" == "3" goto :learning
:labelmult:
	if "%option%" == "4" (goto :learning) else (goto :invalid_input)



:learning	
	if ["%option%"] == ["1"] goto :addition
	if ["%option%"] == ["2"]goto :subtractionmain
	if ["%option%"] == ["3"] goto :Multiplication
	if ["%option%"] == ["4"] goto :division

:division
	set /p divnum1=Enter First Number: 
	set /p divnum2=Enter Second Number: 
	set /a m= %divnum1% / %divnum2%
	set /a mod=%divnum1% %% %divnum2%
	echo %m% remainder %mod%
	pause
	goto :menu
:end
	cls
	echo Quit?
	pause
	exit



:addition
	set /p num1=Enter First Number: 
	set /p num2=Enter Second Number: 
	set  /a additionanswer = %num1% + %num2%
	echo %num1% + %num2% is %additionanswer%
	pause
	goto :menu


:subtractionmain
	set /p subtractionnum1=Enter First Number: 
	set /p subtractionnum2=Enter Second Number: 
	set /a subtractionadditionanswer = %subtractionnum1% - %subtractionnum2%
	echo %subtractionnum1% - %subtractionnum2% is %subtractionadditionanswer%
	pause
	goto :menu

:Multiplication
	set /p multnum1=Enter First Number: 
	set /p multnum2=Enter Second Number: 
	set /a multanswer = %multnum1% * %multnum2%
	echo %multnum1% x %multnum2% is %multanswer%
	pause
	goto :menu

:invalid_input
	echo invalid input!!
	pause
	goto :main

:menu 
	cls
	echo enter answer
	echo 1) Main Menu
	echo 2) Quit
	set /p menuanswer=Enter answer
	if "%menuanswer%" == "1" (goto :main) 
	)
	if "%menuanswer%" == "2" (goto :end) 
:eof

