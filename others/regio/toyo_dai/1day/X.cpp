#include <bits/stdc++.h>
#define rep(i,r,l) for(int (i) = (r); (i) < (l);i++)
int main (void){
	int n = 0;
	cin >> n;
	int t = 1000 - n;
	int c = 0;
	
	st:
	if(t/500 > 0){
		t-=500;
		c++;
		goto st;
	}
	if(t/100 > 0){
		t-=100;
		c++;
		goto st;
	}
	if(t/50 > 0){
		t-=50;
		c++;
		goto st;
	}
	if(t/10 > 0){
		t-=10;
		c++;
		goto st;
	}
	if(t/5 > 0){
		t-=5;
		c++;
		goto st;
	}
	c++;
	end:
	return 0; // AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24711070
}