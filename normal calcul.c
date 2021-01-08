#include<stdio.h>
main(){
	
	int	a, b;
	
	printf("1)Enter a value:");
	scanf("%d", &a);
	
	printf("2)Enter a value:");
	scanf("%d", &b);
	
	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d mod %d = %d\n", a, b, a%b);
	return 0;
	

}
