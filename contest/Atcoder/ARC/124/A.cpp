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
#pragma endregion


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
using namespace std;


int main(void){
	int n = read(), k = read();
	vector<int> c, k;
	rep(i,n){
		c[i] = read();
		k[i] = read();
	}
	int dp[n];

	return 0;
}
