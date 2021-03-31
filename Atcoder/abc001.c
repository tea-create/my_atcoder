#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, m, n) for (int i = m-1; i < (int)(n); i++)
#define elif else if

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

#define PRINT_STRING(x) printf(#x)

///////////////////////////////
#define HONBAN
///////////////////////////////
#ifdef HONBAN
#define PRINTI(x) printf(#x " = %d\n", (x))
#define PRINTLL(x) printf(#x " = %lld\n", (x))
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
  int deg = read();
  int dis = read();
  int mps = ((dis/6) == ((dis/6)*6)) ? dis/6 : dis/6+1;
  if(mps <= 2) {printf("C 0\n");return 0;}
  // printf("%s %d\n", (115  <= deg ? 335 < deg ? 565 <= deg ? 785 < deg ? 1215 <= deg ? 1235< deg ? 1465<= deg ? 1685< deg ? 1915<= deg ? 2135< deg ? 2365<= deg ? 2585< deg ?2815<= deg ?3035< deg ?326<= deg ?deg <= 3485?"NNW":"N":"NW":"WNW":"W":"WSW":"SW":"SSW":"S":"SSE":"SE":"ESE":"E":"ESE":"NE":"NNE":"N"), (3  <= mps ? 16 <= mps ? 34 <= mps ? 55 <= mps ? 80 <= mps ? 108<= mps ? 139<= mps ? 172<= mps ? 208<= mps ? 245<= mps ? 285<= mps ? 327<= mps ? 12:11:10:9:8:7:6:5:4:3:2:1:0));
  printf("%s %d\n", (
    112 < deg ? 
     337 < deg ? 
      562 < deg ? 
       787 < deg ? 
        1212 < deg ? 
         1237< deg ? 
          1462< deg ? 
           1687< deg ? 
            1912< deg ? 
             2137< deg ? 
              2362< deg ? 
               2587< deg ?
                2812< deg ?
                 3037< deg ?
                  3262< deg ?
                   deg < 3485?
                    "NNW"
                   :"N"
                  :"NW"
                 :"WNW"
                :"W"
               :"WSW"
              :"SW"
             :"SSW"
            :"S"
           :"SSE"
          :"SE"
         :"ESE"
        :"E"
       :"ESE"
      :"NE"
     :"NNE"
    :"N"), (
    3  <= mps ? 
     16 <= mps ? 
      34 <= mps ? 
       55 <= mps ? 
        80 <= mps ? 
         108<= mps ? 
          139<= mps ? 
           172<= mps ? 
            208<= mps ? 
             245<= mps ? 
              285<= mps ? 
               327<= mps ? 
                12
               :11
              :10
             :9
            :8
           :7
          :6
         :5
        :4
       :3
      :2
     :1
    :0)); 
  return 0;
}