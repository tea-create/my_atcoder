#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = r;i < l;++i)

using namespace std;

signed main(void){
    int n = 0;
    int cnt = 0;
    int v = 0;
    cin >> n;
    cin >> v;
    vector<int> t(n);
    rep(i,0,n){
        cin >> t[i];
    }
    rep(i,0,n){
        cnt += ((t[i] & v) ? 1 : 0);
		cout << (t[i] & v) << endl;
    }
	cout << cnt << endl;
}