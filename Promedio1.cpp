#include <cstdio>

int main(){
	float calif1, calif2, calif3, calif4, calif5;
	float promedio = 0;
	char nombre[80];
	
	printf("Ingrese su nombre: ");
	scanf("%79s", nombre);
	
	printf("Ingrese la primera calificacion: ");
	scanf("%f", &calif1);
	
	printf("Ingrese la segunda calificacion: ");
	scanf("%f", &calif2);
	
	printf("Ingrese la tercera calificacion: ");
	scanf("%f", &calif3);
	
	printf("Ingrese la cuarta calificacion: ");
	scanf("%f", &calif4);
	
	printf("Ingrese la quinta calificacion: ");
	scanf("%f", &calif5);
	
	promedio = (calif1+calif2+calif3+calif4+calif5)/5;
	printf("\nNombre del alumno: %s", nombre);
	printf("\nSu promedio del primer parcial es: %.2f", promedio);
}
//Osvaldo Salomon Vazquez
