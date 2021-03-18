#include <cstdio>

int main(){
	float a,b;
	float result = 0;
	
	printf("Ingrese el primer numero: ");
	scanf("%f", &a);
	
	printf("\nIngrese el segundo numero: ");
	scanf("%f", &b);
	
	result = a + b;
	
	printf("El resultado es %.2f", result);
	
}

