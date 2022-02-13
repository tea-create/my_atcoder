@echo off
setlocal enabledelayedexpansion

rem supported: Atcoder, yukicoder, CodeForces, AOJ(contest)

echo Copyright (c) 2021 https://twitter.com/tea_creats
echo page: https://github.com/tea-create/my_atcoder/blob/main/new_contest.bat
echo Released under the Eclipse Public v1.0  license.
echo.
cd /d %~dp0
set asciistart=65
goto main

rem ////////////////////////////////////
rem AtCoder
rem ////////////////////////////////////
:AtCoder
	if not exist Atcoder mkdir AtCoder
	cd ./AtCoder/
    SET /P Contest_kind="Contest_kinda[ABC, ARC, AGC, others]:"
    if /i "!Contest_kind!" == "ABC" (
        goto ABC
    ) else if /i "!Contest_kind!" == "ARC" (
        goto ARC
    ) else if /i "!Contest_kind!" == "AGC" (
        goto AGC
    ) else (
        goto AC_Others
    )
exit /b

rem //////////////////////////////////////
rem Atcoder_Contests
rem //////////////////////////////////////
:AC_Others
    SET /P cid="contest_name[eg.typical90]:"
    if not exist others mkdir others
    cd ./others/
    if not exist !cid! mkdir !cid!
	if exist !cid! exit /b
    cd ./!cid!/
    SET /P Problem_Count="Problem_Count[0-25]:"
    SET /a end=!Problem_Count!+!asciistart!
    for /l %%n in (!asciistart!,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    exit /b
:ABC
:ARC
:AGC
    SET /P cid="contest_ID[xxx]:"
    if not exist !Contest_kind! mkdir !Contest_kind!
    cd ./!Contest_kind!/
	if exist !cid! exit /b
    if not exist !cid! mkdir !cid!
    cd ./!cid!/
    SET /a end=8+!asciistart!
    for /l %%n in (!asciistart!,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    mkdir Build
    mkdir Release
    mkdir debug
exit /b

rem //////////////////////////////////////
rem Yukicoder
rem //////////////////////////////////////
:yukicoder
    if not exist yukicoder mkdir yukicoder
    cd ./yukicoder/
    set /p cid="Problem_Number[first problem's number]:"
    set /p Problem_Count="Promlem_Count[how many problems?]:"
    set /a Problem_Count=!Problem_Count!-1
    for /L %%e in (0,1,!Problem_Count!) do (
		if exist No!cid!.cpp (
			goto skip
		)
        echo //new_created: > No!cid!.cpp
		:skip
        set /a pnum=pnum+1
    )
exit /b

rem //////////////////////////////////////
rem CodeForces
rem //////////////////////////////////////
:CodeForces
	if not exist CodeForces mkdir CodeForces
    cd ./CodeForces/
    set /P cid="Contest_ID[xxxx]:"
	if exist !cid! exit /b
    if not exist !cid! mkdir !cid!
    cd ./!cid!/
    if not exist problem mkdir problem
    cd problem
    SET /a end=6+!asciistart!
    for /l %%n in (!asciistart!,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    mkdir Build
    mkdir Release
    mkdir debug

exit /b

rem //////////////////////////////////////
rem AOJ(contest)
rem //////////////////////////////////////

:AOJ
	if not exist AOJ mkdir AOJ
	cd ./AOJ/
    SET /P cid="contest_name[eg.ACPC2020Day1]:"
    if not exist !cid! mkdir !cid!
	if exist !cid! exit /b
    cd ./!cid!/
    SET /P Problem_Count="Problem_Count[0-25]:"
    SET /a end=!Problem_Count!+!asciistart!
    for /l %%n in (!asciistart!,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    exit /b

rem //////////////////////////////////////
rem main
rem //////////////////////////////////////
:main
	SET /P Con="contest[Atcoder, YukiCoder, CodeForces, AOJ]:"
	if not exist contest (
		mkdir contest
		mkdir others
		mkdir lib
	)
	cd ./contest/
	if /i "!Con!" == "Atcoder" (
		goto Atcoder
	) else if /i "!Con!" == "YukiCoder" (
		goto Yukicoder
	) else if /i "!Con!" == "CodeForces" (
		goto CodeForces
	) else if /i "!Con!" == "AOJ" (
		goto AOJ
	)
	exit /b

:end
exit /b


rem for developer

rem func: Atcoder, AC_Others, AGC-ARC-ABC, yukicoder, CodeForces, AOJ, main
rem call-stack: main-      -> [Atcoder, yukicoder, CodeForces, AOJ]
rem             Atcoder    -> [AC_Others, ABC, ARC, AGC] -> exit
rem             yukicoder  -> exit
rem             CodeForces -> exit
rem             AOJ        -> exit
rem var: Con:[Atcoder, YukiCoder, CodeForces, AOJ] in main
rem      Contest_kind:[ABC,ARC,AGC,others] in AtCoder
rem      cid:[contest name]   in AC_Others
rem          [Contest_ID]     in ABC ARC AGC
rem          [Problem Number] in yukicoder
rem          [Contest_ID]     in CodeForces
rem          [contest_name]   in AOJ
rem      Problem_Count:[Problem count] in AC_Others
rem                    [problem count] in yukicoder
rem                    [Problem Count] in AOJ

rem * Released under the Eclipse Public v1.0 license.
rem * see https://www.eclipse.org/legal/epl-v10.html