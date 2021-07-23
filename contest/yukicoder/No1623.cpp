#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

///////////////////////////////
#define DEBUG
///////////////////////////////

#define PI 3.14159265359
#define MOD 1000000007
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



int read(){
	int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

#include <cmath>
#include <limits>
#include <iostream>

int maxim(int a, int b, int c){
	return 	a < b ?
				b < c ? 
			 		c
				:b
			:b>c?
				a
			:a>c?
				a
			:c;
}

int main(void){
	int n = read();
	int r[n], g[n], b[n];
	rep(i,n){
		r[i] = read();
	}
	rep(i,n){
		g[i] = read();
	}
	rep(i,n){
		b[i] = read();
	}
	double max = 0;
	int cnt = 0;
	double s = 0;
	double sq = 0;
	int m = 0;
	for(int i = 0; i < n;i++){
		for(int j = 0;j < n;j++){
			for(int k = 0; k < n;k++){
				if(r[i] != maxim(r[i],g[j],b[k])) continue;
				if(!(r[i] < g[j] + b[k]) || !(r[i] + g[j] > b[k]) || !(r[i]+ b[k] > g[j])) continue;
				// printf("%d[%d],%d[%d],%d[%d]\n", r[i],i+1,g[j],j+1,b[k],k+1);
				cnt +=1;
			}
		}
	}
	printf("%d\n",cnt);

return 0;// TLE: https://yukicoder.me/problems/no/1623
}