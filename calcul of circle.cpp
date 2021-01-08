#include <stdio.h>

main(){
	
	int r;
	float pi=3.14,s,d,p;
	 
	printf("\nEnter the raduis value :");
	scanf("%d", &r);
	s=pi*r*r;
	printf("\nsurface of circle=%f",s);
	d=r+r;
	printf("\ndiametre of circle=%f",d);
	p=pi*d;
	printf("\nperimeter of circle=%f",p);

	
}
