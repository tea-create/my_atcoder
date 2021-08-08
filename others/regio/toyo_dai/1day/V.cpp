#include <bits/stdc++.h>
#define rep(i,r,l) for(int (i) = (r); (i) < (l);i++)
#define rep2(i,l) for(int (i) = (0); (i) < (l);i++)
using namespace std;
int main (void){
	int n = 0;
	cin >> n;
	int t = 0, k = 0;
	int b1 = 0, b2 = 0;
	rep2(i,n){
		scanf("%d %d\n", &b1, &b2);
		if(b1 < b2) k = k + b2;
		if(b1 > b2) t = t + b1;
	}
	cout << (k < t?t:k) << endl;
	return 0; // AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24711857
}