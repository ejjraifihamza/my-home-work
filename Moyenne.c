#include <stdio.h>

int main(){
	
	int nbr,somme;
	float i = 0;
	float moyenne;
	while(nbr != -1){
		printf("ecrire le nombre");
		scanf("%d",&nbr);
		somme =somme + nbr;
		i++;
	}
	if(nbr == -1){
		moyenne = (somme+1) /(i-1);
		printf("la moyenne des nombres entrées est %f",moyenne);
	}
}
