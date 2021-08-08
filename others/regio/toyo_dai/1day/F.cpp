#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  double sum = 0;
  rep(i,5){
    cin >> t;
    sum += (double)t;
  }
  cout << sum / 5.0 << endl;
  return 0;//AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24704932
  }