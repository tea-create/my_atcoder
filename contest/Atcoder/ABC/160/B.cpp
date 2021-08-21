#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = (r);i < (l);i++)
#define int long long
#define endl "\n"

#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")

using namespace std;


signed main(void){ios::sync_with_stdio(false);std::cin.tie(nullptr);


    int n = 0, k = 0;
    cin >> n; cin >> k;
	vector<int> h(n);
    rep(i,0,n){
    	cin >> h[i];
    }
    sort(h.begin(), h.end(), [](auto a, auto b){ return a > b;});

	int sum =0;
	rep(i,0,n){
		if(k-- > 0)continue;
		sum += h[i];
		// cout << sum << ":";
	}
    cout << sum << endl;// AC: https://atcoder.jp/contests/abc153/submissions/25183397
}