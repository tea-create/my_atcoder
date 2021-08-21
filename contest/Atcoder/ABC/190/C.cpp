#include <bits/stdc++.h>
using namespace std;
#define rep(i,r,l) for(int i = (r);(i)<(int)l;i++)

signed main(void){
  int n,m;
  scanf("%d %d", &n, &m);
  int a[m],b[m];

  rep(i,0,m){
    scanf("%d %d", &a[i], &b[i]);
    //a[i]--;b[i]--;
  }
  int k=0;
  scanf("%d", &k);
  int c[k], d[k];
  rep(i,0,k){
    scanf("%d %d", &c[i], &d[i]);
  }
  int max = 0;
  for(unsigned  bit=0;(1<<k) > bit;bit++){
    int cnt = 0, p[n+1]={0};
    rep(i,0,k){
      if((1<<i) & bit){
        p[c[i]]=1;
      }else{
        p[d[i]]=1;
      }
    }
    rep(i,0,m){
      //cout << a[i] <<"/"<< b[i] <<endl;
      if(p[a[i]]==1 && p[b[i]] == 1){
        cnt++;
      }

    }
    max = (max > cnt ? max : cnt );
  }
  cout << max << endl;

}