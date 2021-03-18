#include <cstdio>

int main(){
	float cantHombres, cantMujeres;
	float total;
	float porcenHombres;
	float porcenMujeres;
	
	printf("Ingrese el numero de hombres: ");
	scanf("%f", &cantHombres);
	
	printf("\nIngrese el numero de mujeres: ");
	scanf("%f", &cantMujeres);
	
	total = cantHombres + cantMujeres;
	
	porcenHombres = (cantHombres/total)*100;
	
	porcenMujeres = (cantMujeres/total)*100;
	
	printf("\ncantHombres es: %.0f", cantHombres);
	printf("\ncantMujeres es: %.0f", cantMujeres);
	printf("\nEl total es: %.0f", total);
	printf("\nEl porcentaje de hombres es: %.0f", porcenHombres);
	printf("\nEl porcentaje de mujeres es: %.0f", porcenMujeres);
	
}
//Osvaldo Salomon Vazquez
