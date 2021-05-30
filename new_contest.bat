setlocal enabledelayedexpansion

goto main
;////////////////////////////////////
:AC
;////////////////////////////////////
cd ./Atcoder/
    SET /P Axx="Contest_kinda:"
    SET /P cid="contest_ID:"
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
    echo nul > A.c
    echo nul > B.c
    echo nul > C.c
    echo nul > D.c
    echo nul > E.c
    echo nul > F.c
    mkdir Build
    mkdir Release
    mkdir debug
exit /b

;//////////////////////////////////////
;Yukicoder
;//////////////////////////////////////
:Yukicoder
    set /p pnum="Problem_Number:"
    set /p pcnt="Promlem_Count:"
    set /a pcnt=pcnt-1
    for /L %%e in (0,1,!pcnt!) do (
        echo nul > No!pnum!.c
        set /a pnum=pnum+1
    )
exit /b

;//////////////////////////////////////
;CodeForces
;//////////////////////////////////////
:CodeForces
    cd ./CodeForces/
    set /P cid="Contest_ID:"
    mkdir !cid!
    cd ./!cid!/
    mkdir problem
    cd problem
    echo nul > A.c
    echo nul > B.c
    echo nul > C.c
    echo nul > D.c
    echo nul > E.c
    echo nul > F.c
    mkdir Build
    mkdir Release
    mkdir debug

exit /b

;//////////////////////////////////////
;main
;//////////////////////////////////////
:main

SET /P Con="contest:"
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