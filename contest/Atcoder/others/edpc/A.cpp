#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = (r);i < (l);i++)
#define int long long
#define endl "\n"
#define inf 1e18

#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")

using namespace std;


signed main(void){ios::sync_with_stdio(false);std::cin.tie(nullptr);


    int n = 0;
    cin >> n;
	vector<int> a(n);
    rep(i,0,n){
		cin >> a[i];
    }
	vector<int> dp(n,inf);
	dp[0] = 0;
	dp[1] = abs(a[1] - a[0]);
	rep(i,0,n-1){
		dp[i+1] = min(dp[i+1], dp[i] + abs(a[i+1]-a[i]) );
		if(i != n-2)
			dp[i+2] = min(dp[i+2], dp[i] + abs(a[i+2]-a[i]) );
	}
	cout << dp[n-1] << endl; // AC:https://atcoder.jp/contests/dp/submissions/25185133
}