#include <bits/stdc++.h>
#define rep(i,r,l) for(int i = r; i< (int)l;i++)
using namespace std;
int main (void){
  int t[5];
  rep(i,0,5){
    cin >> t[i];
  }
  int cnt = 0;
  rep(i,0,5){
	  rep(j,1+i,5){
		  rep(k,1+j,5){
			  if(t[i] + t[j] > t[k] && t[j] + t[k] > t[i] && t[k] + t[i] > t[j]){
				  cnt++; cout << i,j,k<<endl;
			  }
		  }
	  }
  }
  cout << cnt << endl;
  return 0; //AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24706515
  }