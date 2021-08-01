#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  int max = 0;
  rep(i,5){
    cin >> t;
    max = t > max ? t : max;
  }
  cout << max << endl;
  //AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24704697
}