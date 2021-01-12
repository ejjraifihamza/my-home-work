#include <stdio.h>

main(){
	
	
	float pi=3.14,s,d,p,r;
	 
	printf("\nEnter the raduis value :");
	scanf("%f", &r);
	s=pi*r*r;
	printf("\nsurface of circle=%f",s);
	d=r+r;
	printf("\ndiametre of circle=%f",d);
	p=pi*d;
	printf("\nperimeter of circle=%f",p);

	
}
