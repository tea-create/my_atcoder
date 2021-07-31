//new_created: 
#include <iostream>
#include <cmath>
#include <cstdio>

///////////////////////////////
#define DEBUG
///////////////////////////////

#pragma region Macros // macros
#define PI 3.14159265359
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define lep(i, n) for (long i = 0; i < (long)(n); i++)
#define llep(i, n) for (long long i = 0; i < (long long)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define lep2(i, m, n) for (long i = m-1; i < (long)(n); i++)
#define llep2(i, m, n) for (long long i = m-1; i < (long long)(n); i++)
#define repinf(i) for(int i = 0;;i++)
#define lepinf(i) for(long i = 0;;i++)
#define llepinf(i) for(long long i = 0;;i++)
#define _GLIBCXX_DEBUG

#define SWAP(type, a, b) { const type tmp = a; a = b; b = tmp; }
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

#pragma region stdints // ctype
#include <stdint.h>
#define char char
#define uchar unsigned char
#define _short short
#define short int16_t
#define ushort uint16_t
#define long int
#define _long int
#define _int int
#define int int32_t
#define uint int32_t
#define ll int64_t
#define ull uint64_t
#pragma endregion

#pragma region readers // readers

long long llead(){
	long long x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const long long f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

int read(){
	int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

int lead(){
	long x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const long f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

int sead(){
	short int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const short int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

#pragma endregion

long long pow(int a,int b){
	int x=a, y=b;long long ret=1;
	if(a==0)return 0;
	loop:{
		if(b==0) return ret;
		ret*=(long long)a;b-=1;
	}
	goto loop;
}

long long keta(long long tar){
	long long a = tar, b = 1;
	loop: {
		if(a == 0){return 1;}
		if(tar / 10 != 0) {a=a/10;b++;goto loop;}
		return b;
	}
}

long long kaijo(long long tar){
	long long sum = 0;
	long long i = tar;
	loop:{
		if(i == 0)return sum;
		sum += i;
		i-=1;
		goto loop;
	}
}
#define gi (getchar() - '0')
int main(void){
	int a = gi, b = gi, c = gi, d = gi;
	if(a == b == c == d)goto weak;
	if((a+1) == b && (b+1) == c && (c+1) == d)goto weak;
	if(a == 9 || b == 9 || c == 9)
		if(a ==9){ if(b == 0 && c == 1 && d == 2) goto weak;}
		else if(b == 9){if(a==8 && c == 0 && d == 1 goto weka;}
		else if(c == 9){if(a == 7 && b == 8 && d == 0)}

	printf("Strong");
	return 0;
	weak:
	printf("Weak\n");
	return 0;//AC: https://atcoder.jp/contests/abc212/submissions/24671017
}
