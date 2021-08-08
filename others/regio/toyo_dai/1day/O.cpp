#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int n;
    cin >> n;
	int t[n];
	rep(i,n){
		cin >> t[i];
	}
	sort(t,t + n);
	cout << t[n-1] << endl << t[0] << endl;
	return 0; // AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24707726
}