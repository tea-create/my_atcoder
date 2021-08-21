//new_created:
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

    int n = 0, w = 0;
    cin >> n; cin >> w;
	vector<int> weight(n),value(n);
    rep(i,0,n){
		cin >> weight[i];
		cin >> value[i];
    }
	vector<vector<int>> dp(n, vector<int>(w))

}