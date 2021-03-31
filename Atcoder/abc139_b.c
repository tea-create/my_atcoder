#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define ll long long
#define _GLIBCXX_DEBUG
#define min(a,b) (a > b ? b : a)
#define max(a,b) (a > b ? a : b)
#define quick_sort(X,Func) qsort(X, sizeof(X) / sizeof(X[0]), sizeof(X[0]), _upper_sort);
#define down_sort(X) quick_sort(X, _down_sort);
#define upper_sort(X) quick_sort(X, _upper_sort);
#define TRUE (0==0)
#define true TRUE
#define FALSE (!TRUE)
#define false FALSE
#define elif

///////////////////////////////
#define HONBAN
///////////////////////////////
#ifndef HONBAN
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
#else PRINTI(x)
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
 
int main(void){
  int a = read(), b = read();
  int n = 1;
  int i = 0;
  for(i = 0; n<b; i++){ // a口が1つ増えると a-1増えることを記述する。
    n+= a-1;
  }
  printf("%d\n", i);
  return 0;
}