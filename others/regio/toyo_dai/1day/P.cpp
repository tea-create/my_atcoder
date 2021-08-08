#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int n;
	cin >> n;
	int t[n];
	int sum =0;
	rep(i,n){
		cin >> t[i];
		sum += t[i];
	}
	printf("%d %.1f\n", sum, (double)sum / (double)n);
	return 0; // AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24707866
}