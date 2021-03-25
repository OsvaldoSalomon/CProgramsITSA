#include <stdio.h>

int main() {

    int saldo = 15000;
    int opcion, retiro;
    do {
        printf("----------- BANCO AZTECA -----------\n\n");
        printf("1.- Consultar saldo inicial\n");
        printf("2.- Retirar efectivo\n");
        printf("3.- Salir\n");
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                printf("el saldo inicial es de :%d\n", saldo);
                break;
            case 2:
                printf("Ingrese cantidad a retirar\n");
                scanf("%d", &retiro);
                saldo = saldo - retiro;
                printf("el nuevo saldo es:%d\n", saldo);
                break;
        }
    } while (opcion != 3);

}