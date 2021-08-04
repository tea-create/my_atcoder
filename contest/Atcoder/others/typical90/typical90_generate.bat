@echo off
setlocal enabledelayedexpansion
 
for /l %%n in (1,1,90) do (
  set num=0%%n
  set num=!num:~-2,2!
  echo //new_created: > typical_!num!.cpp
)
 
endlocal