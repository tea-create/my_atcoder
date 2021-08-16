#include <stdio.h>


signed main(void){
	char c = 0;
	while((c=getchar()) != '\n'){
		putc(c, stdout);
		putc('\n', stdout);
	}
		printf("test is end.");
	return 0;
}