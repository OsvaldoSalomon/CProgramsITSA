#include "cstdio"

int main() {
    int edad;
    printf("Ingrese su edad\n");
    scanf("%d", &edad);

    if (edad < 18) {
        printf("Usted es menor de edad");
    } else {
        printf("Usted es mayor de edad");
    }
}