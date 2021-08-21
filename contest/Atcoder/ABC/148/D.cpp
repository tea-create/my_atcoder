#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = (r);i < (l);i++)
#define int long long
#define endl "\n"

#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")

using namespace std;


signed main(void){ios::sync_with_stdio(false);std::cin.tie(nullptr);


    int n = 0;
    cin >> n;
	vector<int> a(n);
    rep(i,0,n){
		cin >> a[i];
    }

	int sum =1;
	int cnt = 0;
	rep(i,0,n){
		if(sum == a[i])sum++;
		else cnt ++;
	}
	if(sum == 1) return cout << -1 << endl, 0;
    cout << n-(sum-1) << endl;//AC: https://atcoder.jp/contests/abc148/submissions/25183852
}
