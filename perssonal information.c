#include <stdio.h>
main(){
	
	char Name[20], last_name[20], Age[20], Gender[20], telephone_number[20];
	
	printf("please enter your Name:");
	scanf("%s", Name);
	printf("please enter your last name:");
	scanf("%s", last_name);
	printf("please enter your Age:");
	scanf("%s", Age);
	printf("please enter your Gender:");
	scanf("%s", Gender);
	printf("please enter your telephone number:");
	scanf("%s", telephone_number);
	printf("%s %s %s %s %s\n", Name, last_name, Age, Gender, telephone_number);
	return 0;
}
