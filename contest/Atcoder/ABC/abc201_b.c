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
    int max1, max2;
    char s[1001][17];
    rep(i,n){
        scanf("%s %d", &(s[i]), &t);
         if(t > r1){
                r1 = t;
           		max1=i;
             	continue;
        }
        if(t  > r2){
                r2 = t;
          		max2 = i;
            	continue;
        }
    }
  printf("%s\n", s[max2]);
}