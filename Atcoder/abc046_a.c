#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define ll long long
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define lep(i, n) for (long i = 0; i < (long)(n); i++)
#define llep(i, n) for (ll i = 0; i < (ll)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define repinf(i) for(int i = 0;;i++)
#define _GLIBCXX_DEBUG
#define min_(a,b) (a > b ? b : a)
#define max_(a,b) (a > b ? a : b)
#define quick_sort(X,Func) qsort(X, sizeof(X) / sizeof(X[0]), sizeof(X[0]), _upper_sort);
#define down_sort(X) quick_sort(X, _down_sort);
#define upper_sort(X) quick_sort(X, _upper_sort);
// #define TRUE (0==0)
// #define true TRUE
// #define FALSE (!TRUE)
// #define false FALSE
#define elif

///////////////////////////////
// #define HONBAN
///////////////////////////////
#ifndef HONBAN
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
#else 
#define PRINTI(x)
#define PRINTLL(x)
#endif

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
int _down_sort(const void * n1, const void * n2){
return 
    (*(ll *)n1 > *(ll *)n2) ? -1
  : (*(ll *)n1 < *(ll *)n2) ? 1
  :0;
}
int _upper_sort(const void * n1, const void * n2){
  return 
    (*(ll *)n1 > *(ll *)n2) ? 1
  : (*(ll *)n1 < *(ll *)n2) ? -1
  :0;
}
ll pow_(int a,int b){
  int x=a;int y=b;ll ret=1;
  if(a==0)return 0;
  tag:
  if(b==0) return ret;
  ret*=(ll)a;b-=1;
  goto tag;
}

int main(void){
    int a=read(), b=read(), c=read();int flag=1;
    printf("%s\n", (a+b==c || a+c==b||c+b==a)?"Yes":"No");
    return 0;
    // AC
}