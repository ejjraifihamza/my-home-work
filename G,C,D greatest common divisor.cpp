#include <stdio.h>
#include <math.h>
main(){
	int n1, n2, i, gcd;
	
	printf("enter first value :");
	scanf("%d", &n1);
	printf("enter second value :");
	scanf("%d", &n2);
	
	for(i=1; i <= n1 && i <= n2; ++i)
	
	if(n1%i==0 && n2%i==0)
	gcd = i;
	
	printf("G , C , D of %d and %d is %d", n1, n2, gcd);
	return 0;
	
}
