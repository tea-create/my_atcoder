#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = (r); i < (l);i++)
using namespace std;

int main(void){
	int a, b,x,y;
	rep(i,0,4){
		cin >> x;
		a += x;
	}
	rep(i,0,4){
		cin >> y;
		b += y;
	}
	cout << (x>y?x:y) << endl;
}
