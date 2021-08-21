@echo off
setlocal enabledelayedexpansion

rem * Released under the Eclipse Public v1.0 license.
rem * see https://www.eclipse.org/legal/epl-v10.html

echo Copyright (c) 2021 https://twitter.com/tea_creats
echo page: https://github.com/tea-create/my_atcoder/blob/main/new_contest.bat
echo Released under the Eclipse Public v1.0  license.
echo.
cd /d %~dp0
goto main

;////////////////////////////////////
;AtCoder
;////////////////////////////////////
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

;//////////////////////////////////////
;Atcoder_Contests
;//////////////////////////////////////
:AC_Others
    SET /P cid="contest_name[eg.typical90]:"
    if not exist others mkdir others
    cd ./others/
    if not exist !cid! mkdir !cid!
    cd ./!cid!/
    SET /P Problem_Count="Problem_Count[0-25]:"
    SET /a end=!Problem_Count!+65
    for /l %%n in (65,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    pause
    exit /b
:ABC
:ARC
:AGC
    SET /P cid="contest_ID[xxx]:"
    if not exist !Contest_kind! mkdir !Contest_kind!
    cd ./!Contest_kind!/
	if exist !cid! (
		goto end
	)
    if not exist !cid! mkdir !cid!
    cd ./!cid!/
    SET /a end=8+65
    for /l %%n in (65,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    mkdir Build
    mkdir Release
    mkdir debug
exit /b

;//////////////////////////////////////
;Yukicoder
;//////////////////////////////////////
:yukicoder
    if not exist yukicoder mkdir yukicoder
    cd ./yukicoder/
    set /p pnum="Problem_Number[first problem's number]:"
    set /p pcnt="Promlem_Count[how many problems?]:"
    set /a pcnt=pcnt-1
    for /L %%e in (0,1,!pcnt!) do (
		if exist 8No!pnum!.cpp (
			goto skip
	   )
        echo //new_created: > No!pnum!.cpp
		:skip
        set /a pnum=pnum+1
    )
exit /b

;//////////////////////////////////////
;CodeForces
;//////////////////////////////////////
:CodeForces
	if not exist CodeForces mkdir CodeForces
    cd ./CodeForces/
    set /P cid="Contest_ID[xxxx]:"
	if exist !cid! (
		goto end
	)
    if not exist !cid! mkdir !cid!
    cd ./!cid!/
    if not exist problem mkdir problem
    cd problem
    SET /a end=6+65
    for /l %%n in (65,1,!end!) do (
        cmd /c exit /b %%n
        set fn=!=ExitCodeAscii!.cpp
        echo //new_created: > !fn!
    )
    mkdir Build
    mkdir Release
    mkdir debug

exit /b

;//////////////////////////////////////
;main
;//////////////////////////////////////
:main
	SET /P Con="contest[Atcoder, YukiCoder, CodeForces]:"
	if not exist contest mkdir contest
	cd ./contest/
	echo !Con!
	if /i "!Con!" == "Atcoder" (
		goto Atcoder
	) else if /i "!Con!" == "YukiCoder" (
		goto Yukicoder
	) else if /i "!Con!" == "CodeForces" (
		goto CodeForces
	)
	exit /b

:end
exit /b