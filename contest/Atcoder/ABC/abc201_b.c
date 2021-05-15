
#include <stdio.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int read(){
    int x=0; char c;
    while(((c=getchar())>'9' || c<'0')&&c!='-');
    const int f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
    return f?-x:x;
}

int main(void){
    int n = read();
    int r1,r2;
    int t;
    char s[1001][16];
    rep(i,n){
      t=0;
        scanf("%s %d", &(s[i]), &t);
        if(t  > r2){
                r1 = t;
          break;
        }
         if(t > r1){
                r2 = t;
           break;
        }
    }
    printf("%s\n", s[r2]);
}