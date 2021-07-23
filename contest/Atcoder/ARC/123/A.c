#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////
#define DEBUG
///////////////////////////////

#pragma region Macros // macros
#define NULL ((void *)0)
#define null NULL
#define PI 3.14159265359
#define MOD 1000000007
#define ll long long
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

long lead(){
	long x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const long f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

short int sead(){
	short int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const short int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

#pragma endregion

ll abs_ll(ll a){
	return a<0?-a:a;
}

int cmpnum(const void * n1, const void * n2)
{
	if (*(long *)n1 > *(long *)n2)
	{
		return 1;
	}
	else if (*(long *)n1 < *(long *)n2)
	{
		return -1;
	}
	else
	{
		return 0;
	}
}

int main(void){
	ll a = llead(), b = llead(), c = llead();
	ll X = 2 * b - a - c ;
	return 0;// wa
}
