#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int t[5];
	int sum =0;
	rep(i,5){
		cin >> t[i];
		sum += (t[i] > 40 ? t[i] : 40);
	}
	cout << sum/5 << endl;
	return 0; // AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24708027
}