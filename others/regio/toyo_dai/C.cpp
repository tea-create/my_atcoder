#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  int min = 1e9+7;
  rep(i,5){
    cin >> t;
    min = t < min ? t : min;
  }
  cout << min << endl;
  //AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24704744
}