//new_created:
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

#define check_bit(i) (bit & (1<<i))
#define set_bit(i) (bit｜= (1<<i))
#define unset_bit(i) (bit &= ~(1<<i))


#include <cmath>
#include <limits>
#include <strings>
#include <iostream>
using namespace std;
int main(void){
	int t[8] = {0};
	char c = 0;
	char s[1e5+1];
	int l =0;
	{
		int i = 0;
		while((s[i] = getchar()) != EOF){

		}
		l = i;
	}


}