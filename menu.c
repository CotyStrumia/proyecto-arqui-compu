#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_PASSWORD 5

int main() {
    bool verificador = false;
    char lector_password[MAX_PASSWORD + 1];
    char password[MAX_PASSWORD + 1] = "daleB";
    int cant_intentos = 0;

    do {
        printf("Ingrese su password (5 digitos): ");
        scanf("%s", lector_password);

        verificador = true;
        for (int i = 0; i < MAX_PASSWORD; i++) {
            if (lector_password[i] != password[i]) {
                verificador = false;
                break;
            }
        }

        if (verificador) {
            printf("\nBienvenido al sistema\n");
            break;
        } else {
            printf("Password no valida\n\n");
            cant_intentos++;
        }
    } while (cant_intentos < 3 && !verificador);

    if (!verificador) {
        printf("Se han excedido los intentos permitidos. Acceso denegado.\n");
    }

    return 0;
}