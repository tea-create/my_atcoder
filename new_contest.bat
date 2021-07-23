@echo off
setlocal enabledelayedexpansion

goto main


;////////////////////////////////////
:AC
;////////////////////////////////////
cd ./Atcoder/
    SET /P Axx="Contest_kinda[ABC, ARC, AGC, others]:"
    SET /P cid="contest_ID[xxx]:"
    if /i "!Axx!" == "ABC" ( 
        goto ABC
    ) else if /i "!Axx!" == "ARC" ( 
        goto ARC
    ) else if /i "!Axx!" == "AGC" ( 
        goto AGC
    ) else (
        goto AC_Others
    )
exit /b

;//////////////////////////////////////
;ABC
;//////////////////////////////////////
:AC_Others
cd ./others/
:ABC
:ARC
:AGC
    mkdir !Axx!
    cd ./!Axx!/
    mkdir !cid!
    cd ./!cid!/
    echo //new_created: > A.cpp
    echo //new_created: > B.cpp
    echo //new_created: > C.cpp
    echo //new_created: > D.cpp
    echo //new_created: > E.cpp
    echo //new_created: > F.cpp
    mkdir Build
    mkdir Release
    mkdir debug
exit /b

;//////////////////////////////////////
;Yukicoder
;//////////////////////////////////////
:Yukicoder
    cd ./yukicoder/
    set /p pnum="Problem_Number[first problem's number]:"
    set /p pcnt="Promlem_Count[how many problems?]:"
    set /a pcnt=pcnt-1
    for /L %%e in (0,1,!pcnt!) do (
        echo //new_created: > No!pnum!.cpp
        set /a pnum=pnum+1
    )
exit /b

;//////////////////////////////////////
;CodeForces
;//////////////////////////////////////
:CodeForces
    cd ./CodeForces/
    set /P cid="Contest_ID[xxxx]:"
    mkdir !cid!
    cd ./!cid!/
    mkdir problem
    cd problem
    echo //new_created: > A.cpp
    echo //new_created: > B.cpp
    echo //new_created: > C.cpp
    echo //new_created: > D.cpp
    echo //new_created: > E.cpp
    echo //new_created: > F.cpp
    mkdir Build
    mkdir Release
    mkdir debug

exit /b

;//////////////////////////////////////
;main
;//////////////////////////////////////
:main

SET /P Con="contest[Atcoder, YukiCoder, CodeForces]:"
cd ./contest/
echo !Con!
if /i "!Con!" == "Atcoder" ( 
    goto AC
) else if /i "!Con!" == "YukiCoder" ( 
    goto Yukicoder
) else if /i "!Con!" == "CodeForces" ( 
    goto CodeForces
)
exit /b