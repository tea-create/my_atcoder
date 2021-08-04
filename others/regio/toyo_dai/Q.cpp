#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int n;
	cin >> n;
	int t = 0, v = 0;
	int max_v = 0, max_t = 0;
	rep(i,n){
		cin >> v;
		cin >> t;
		if(max_t < t){
			max_v = v;
			max_t = t;
		}
	}
	cout << max_v <<endl;
	return 0; //AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24708251
}