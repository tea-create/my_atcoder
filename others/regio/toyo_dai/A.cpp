#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  int sum = 0;
  rep(i,5){
    cin >> t;
    sum += t;
  }
  cout << sum << endl;//AC: https://atcoder.jp/contests/regio2021touyou1/submissions/24704667
}