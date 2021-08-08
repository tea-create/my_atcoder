#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
	int t = 0;
	int b = 0;
	int val;
	cin >> val;
	int b1,b2,b3,t1,t2,t3;
	cin >> b1 >> b2 >> b3 >> t1 >> t2 >> t3;
	cout << val + b1 * t1 + b2 * t2 + b3 * t3 << endl;
	return 0;//AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24710769
}