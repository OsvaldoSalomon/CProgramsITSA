#include <stdio.h>
#include <stdlib.h>

main(){
	int aNacim, aActual;
	int edad = 0;
	
	printf("Ingrese el año de nacimiento: ");
	scanf("%i", &aNacim);
	
	printf("\nIngrese el año actual: ");
	scanf("%i", &aActual);
	
	edad = aActual - aNacim;
	
	printf("Su edad es: %i", edad);
	
}

//Osvaldo Salomon Vazquez
