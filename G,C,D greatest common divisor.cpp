#include <stdio.h>
#include <math.h>
main(){
	int n1, n2, x, gcd;
	
	printf("enter first value :");
	scanf("%d", &n1);
	printf("enter second value :");
	scanf("%d", &n2);
	
	for(x=1; x <= n1 && x <= n2; ++x)
	
	if(n1%x==0 && n2%x==0)
	gcd = x;
	
	printf("G , C , D of %d and %d is : %d ", n1, n2, gcd);
	return 0;
	
}
