#include <bits/stdc++.h>
#define rep(i,jh) for(int i = 0; i< (int)jh;i++)
using namespace std;
int main (void){
  int t = 0;
  int min = 1e9+7;
  int max = 0;
  rep(i,5){
    cin >> t;
    min = (min > t ? t : min);
	max = (max < t ? t : max);
  }
  cout << max << endl << min << endl;
  return 0;//AC:https://atcoder.jp/contests/regio2021touyou1/submissions/24705018
  }