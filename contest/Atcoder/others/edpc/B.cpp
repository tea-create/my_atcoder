#include <bits/stdc++.h>
#pragma region Macros
///////////DEBUG///////////////////////
#ifdef DEBUG
#pragma GCC optimize("O0", "unroll-loops", "omit-frame-pointer", "inline")
#define _GLIBCXX_DEBUG
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
#define RAW_PRINT(x) printf(#x "\n")
#else
#pragma GCC optimize("O3", "unroll-loops", "omit-frame-pointer", "inline")
#define PRINTI(x)
#define PRINTLL(x)
#define RAW_PRINT(x)
#endif
///////////////////////////////////////
///////////CONST///////////////////////
#define PI 3.14159265359
#define MOD 1000000007
#define endl "\n"
#define inf 1e18
#define int long long
///////////////////////////////////////
///////////////////////////////////////

///////////////////////////////////////
////////////////FUNC///////////////////
#define SWAP(a, b) a = a ^ b ^ (b = a);
#define arr_cpy(from, to) memcpy(to, from, sizeof(from))
#define rep(i, m, n) for (auto i = m; i < (n); i++)
#define repinf(i) for(auto i = 0;;i++)
#define tf(t) (t = (x ^ (1<<1)))
///////////////////////////////////////
#define elif else if
#pragma endregion

using namespace std;


signed main(void){
	#ifndef DEBUG
	ios::sync_with_stdio(false);std::cin.tie(nullptr);
	#endif

    int n = 0;
    cin >> n;
	vector<int> a(n), b(n), c(n);
    rep(i,0,n){
		cin >> a[i];
		cin >> b[i];
		cin >> c[i];
    }
	vector<vector<int>> dp(n,vector<int>(3, -1));
	dp[0] = {a[0], b[0], c[0]};
	rep(i,1,n){

		dp[i][0] = max(dp[i-1][1], dp[i-1][2]) + a[i];
		dp[i][1] = max(dp[i-1][2], dp[i-1][0]) + b[i];
		dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + c[i];

	}
	cout << max(max(dp[n-1][0], dp[n-1][1]), dp[n-1][2]) << endl;// AC:https://atcoder.jp/contests/dp/submissions/25186740

}