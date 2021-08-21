#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = (r);i < (l);i++)
#define int long long
#define endl "\n"

#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")

using namespace std;


signed main(void){ios::sync_with_stdio(false);std::cin.tie(nullptr);


    int n = 0;
    cin >> n;
    vector<pair<int, int>>t(n);
    rep(i,0,n){
    cin >> t[i].first;
    cin >> t[i].second;
    }
    sort(t.begin(), t.end(), [](auto a, auto b){return a.second < b.second;});

    int sum =0;
    int now = -1;

    rep(i,0,n){
		// cout << now << ":";
        if(!(now < t[i].first))continue;
        sum++;
        now = t[i].second;
    }
    cout << sum << endl;;//AC: https://atcoder.jp/contests/typical-algorithm/submissions/25183076
}