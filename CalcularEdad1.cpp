#include <stdio.h>
#include <stdlib.h>

main(){
	int aNacim, aActual;
	int edad = 0;
	
	printf("Ingrese el a�o de nacimiento: ");
	scanf("%i", &aNacim);
	
	printf("\nIngrese el a�o actual: ");
	scanf("%i", &aActual);
	
	edad = aActual - aNacim;
	
	printf("Su edad es: %i", edad);
	
}

//Osvaldo Salomon Vazquez
