#include <stdio.h>
#include <stdlib.h>

void troca (int *pa, int *pb){
	
	int t;
	
	t = *pa; *pa = *pb; *pb = t;
	
}


main(){
	
	
	char x[] = {"a, b, c, d, e"}, *p = x;
	
	//troca(x + 1, x + 4);
	
	
	
	while(*p){
		
		printf("%c", *p);
		
		
		*p++;
	}
	
	
}
