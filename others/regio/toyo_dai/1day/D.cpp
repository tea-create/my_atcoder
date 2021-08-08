#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  int sum = 0;
  rep(i,5){
    cin >> t;
    sum += (t % 2 == 0 ? 0 : t);
  }
  cout << sum << endl;
  return 0;//AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24704800
  }