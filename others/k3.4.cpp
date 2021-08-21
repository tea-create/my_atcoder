#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = r;i < l;++i)

using namespace std;

signed main(void){
    int n = 0;
    cin >> n;
    vector<int> t(n);
    rep(i,0,n){
        cin >> t[i];
    }
    sort(t.begin(), t.end());

	cout << t[n-1] - t[0] << endl;
}