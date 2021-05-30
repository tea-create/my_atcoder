#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

using namespace std;
///////////////////////////////
#define DEBUG
///////////////////////////////

#pragma region Macros

#define NULL ((void *)0)
#define null NULL
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define lep(i, n) for (long i = 0; i < (long)(n); i++)
#define llep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define repinf(i) for(int i = 0;;i++)
#define llepinf(i) for(ll i = 0;;i++)
#define _GLIBCXX_DEBUG

#define arr_cpy(from, to) memcpy(to, from, sizeof(from))

#define elif

#ifdef DEBUG

#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
#define RAW_PRINT(x) printf(#x "\n")

#else 

#define PRINTI(x)
#define PRINTLL(x)
#endif

#pragma endregion

#pragma region stdints

#define char char
#define uchar unsigned char

#define _short short
#define short int16_t
#define ushort uint16_t
#define WCHAR wchar_t

#define _int int
#define long int
#define _long int
#define int int32_t
#define uint int32_t

#define ll int64_t
#define ull uint64_t

#pragma endregion

ll llead(){
    ll x=0; char c;
    while(((c=getchar())>'9' || c<'0')&&c!='-');
    const ll f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
    return f?-x:x;
} 
int read(){
    int x=0; char c;
    while(((c=getchar())>'9' || c<'0')&&c!='-');
    const int f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
    return f?-x:x;
}
ll pow_(int a,int b){
  int x=a;int y=b;ll ret=1;
  if(a==0)return 0;
  tag:
  if(b==0) return ret;
  ret*=(ll)a;b-=1;
  goto tag;
}
int keta_(int tar, int keta){
    if(tar == 0){return 1;}
    if(tar /10 != 0){return keta_(tar/10, keta+1);}
    return keta;
}
int keta(int tar){
    return keta_(tar, 1);
}
int kaijo(int tar){
  int sum = 0;
  int i = tar;
  start:
  if ( i == 0)return sum;
  sum += i;
  i-=1;
  goto start;
}
int main(void){
    ll n = read(), k = read();
    return 0;
}