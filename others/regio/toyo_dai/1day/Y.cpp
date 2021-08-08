#include <bits/stdc++.h>
#define rep(i,r,l) for(int (i) = (r); (i) < (l);i++)
#define rep2(i,l) for(int (i) = (0); (i) < (l);i++)
using namespace std;
int main (void){
	int t = 301;
	int k = 0;
	int rnd = 0;
	int c1, c2, c3;
	int sum = 0;
	rep(i,10){
		cin >> c1;
		cin >> c2;
		cin >> c3;
		sum = c1 + c2 + c3;
		if(t - sum > 0) {
			t = t - sum;
			continue;
		}
		if(t -sum == 0){
			cout << i + 1 << endl;
			break;
		}
	}
	return 0; 
}