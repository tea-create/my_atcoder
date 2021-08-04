#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int n ;
	cin >> n;
	int t[9];
	int sum =0;
	rep(i,9){
		cin >> t[i];
		sum += t[i];
	}
	cout << n-sum << endl;
	return 0; // AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24708121
}