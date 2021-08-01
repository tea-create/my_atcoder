#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t[5];
  rep(i,5){
    cin >> t[i];
  }
  sort(t,t + 5);
  cout << t[4] << endl << t[3] << endl;
  return 0;//AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24705198
  }