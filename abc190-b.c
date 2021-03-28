#include <stdio.h>
int read(){
	int x=0; char c;
    while (((c=getchar())>'9' || c<'0' )&&c!='-');
    const int f=(c=='-')&&(c=getchar());
    while(x=x*10-48+c,(c=getchar())>='0'&&c<'9');
    return f?--x:x;
}
int main(){
	int n = read(), s = read(), d = read(),ans=0;
  	for(int i = 0; i < n; i++){
      	if(read()<s)
          if(read()>d){
          	ans=100;
            break;
          }
      	read();
    }
  	printf("%s+%d", ans!=0 ? "Yes":"no", ans);
}