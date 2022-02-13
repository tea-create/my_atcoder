#include <bits/stdc++.h>

// #define int long long
#define endl '\n'

using namespace std;

#define rep(i,r,l) for(auto i = r;i<l;i++)

vector<vector<int>> map;

signed main(void) {
	int h, w;
	cin >> h;
	cin >> w;
	map = vector<vector<int>>(h, vector<int>(w, -1));
	char buf;
	rep(i, 0, h-1) {
		rep(j, 0, w-1) {
			cin >> map[i][j];
		}
	}
	vector<vector<int>> dp(h+10, vector<int>(w+10, -1));

	return 0;

}
