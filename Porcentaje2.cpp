#include <iostream>
using namespace std;

int main(){
	float cantHombres, cantMujeres;
	float total;
	float porcenHombres;
	float porcenMujeres;
	
	cout << "Ingrese el numero de hombres: ";
	cin >> cantHombres;
	
	cout << "Ingrese el numero de mujeres: ";
	cin >> cantMujeres;
	
	total = cantHombres + cantMujeres;
	
	porcenHombres = (cantHombres/total)*100;
	
	porcenMujeres = (cantMujeres/total)*100;
	
	cout << "La suma total es: " << total << "\n";
	cout << "El porcentaje de hombres es: " << porcenHombres << "\n";
	cout << "El porcentaje de mujeres es: " << porcenMujeres << "\n";
	
	return 0;	
}
//Osvaldo Salomon Vazquez
