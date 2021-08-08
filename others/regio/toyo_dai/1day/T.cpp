#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int t = 0;
	int b = 0;
	int sum =0;
	rep(i,3){
		cin >> b;
		cin >> t;
		sum += t * b;
	}
	cout << sum << endl;
	return 0; //AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24708179
}