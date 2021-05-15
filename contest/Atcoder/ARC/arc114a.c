#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define all(v) v.begin(), v.end()
#define ll long long
#define _GLIBCXX_DEBUG
#define min(a,b) (a > b ? b : a)
#define max(a,b) (a > b ? a : b)
#define TRUE (0==0)
#define true TRUE
#define FALSE (!TRUE)
#define false FALSE
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
ll llead(){
    ll x=0; char c;
    while(((c=getchar())>'9' || c<'0')&&c!='-');
    const ll f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
    return f?-x:x;
} 
int read(){
    int x=0; char c;
    while(((c=getchar())>'9' || c<'0')&&c!='-');
    const int f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
    return f?-x:x;
}
int cmpnum(const void * n1, const void * n2){
  if (*(ll *)n1 > *(ll *)n2)
    return 1;
  else if (*(ll *)n1 < *(ll *)n2)	
    return -1;
  else	
    return 0;
}
int findF(int tar){
  for(int i=2;i<=(tar/2+1);i++){
    if(tar%i==0){
      return i;
    }
  }
  return tar;
}

int main(void){
  ll N = llead();
  ll X[N];
  ll F[N];
  ll num=0;
  ll flag=false;
  ll buf=0;
  rep(i,N){
    X[i] = read();
  }
  qsort(X, sizeof(X) / sizeof(X[0]), sizeof(ll), cmpnum);
  rep(i,N){
    PRINTLL(X[i]);
    buf=0;flag=false;
    rep(j,num){
      if(X[i]%F[j]==0){
        flag=true;
      }
    }
    if(flag){flag=false;continue;}
    buf = findF(X[i]);
    flag=false;
    rep(i,num){
      if(F[i] == buf)flag=true;
    }
    if(!flag)F[num++]=buf;buf=0;flag=false;
  }
  ll A=1;
  rep(i,num){
    A*=(ll)(F[i]);
    PRINTLL(F[i]);PRINTLL(A);
  }
  printf("%lld\n",A);
  return 0;
}