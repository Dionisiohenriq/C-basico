#include<stdio.h>
#include<stdlib.h>


main(){
	
	int n, sum;
	
	scanf("%d", &n);
	
	while( n > 0){
		
		sum += n % 10;
		n /= 10;
		
	}
	
	
	printf("%d\n", sum);
	
	
	system("pause");
	
	
}
