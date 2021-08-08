#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t[5];
  int d[4];
  rep(i,5){
    cin >> t[i];
  }
  int k = 0;
  int l = 0;
  
  rep(i,5){
      int flag = 1;
	  rep(j,5){
		  if(j == i) continue;
		  k = (i + 1) % 5;
          l = (i + 2) % 5;
		  if ((t[j] - t[l]) * (k - l) != (t[k] - t[l]) * (j - l)) flag = 0;
	  }
	  if(flag){
        cout << i + 1 << endl;
        break;
      }
    
  }
  return 0; //AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24706247
  }