#include <stdio.h>


int read(){
	int x = 0; char c;
	while(((c=getchar())>'9' || c<'0')&&c!='-');
	const int f=(c=='-')&&(c=getchar());
	while(x=x*10-48+c,(c=getchar())>='0'&&c<='9');
	return f?-x:x;
}

int main(void){
	double a;
	double b;
	a = (double)read();
	b = (double)read();

	printf("%lf\n", (a-b)/3+b);
	return 0;//AC:https://atcoder.jp/contests/abc211/submissions/24495420
}