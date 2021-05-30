#include <stdio.h>
int main(void){
    int n;
    scanf("%d", &n);
    int r1,r2;
    int t;
    int max1, max2;
    char s[1001][17];
    for (register int i = 0; i < n; i++){
        scanf("%s %d", &(s[i]), &t);
         if(t > r1){
                r2 = r1;
                max2 = max1;
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
  return 0;//AC
}