#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = r;i < l;++i)

using namespace std;

signed main(void){
    int k = 0, s = 0;
    cin >> k;
	cin >> s;
	int sum = 0;
	rep(x,0,k){
		rep(y,0,k-x){
			z = s - x - y;
			if(z < 0)continue;
			sum++;
		}
	}

	cout << sum << endl;
}