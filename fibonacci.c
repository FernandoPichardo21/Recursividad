#include <stdio.h>
#include <conio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}


int verificarFibonacci(int num, int a, int b) {
    if (a == num) {
        return 1; // El número pertenece a la sucesión
    }
    if (a > num) {
        return 0; // El número no pertenece a la sucesión
    }
    return verificarFibonacci(num, b, a + b); 
}

int main() {
    int opcion, num;

    printf("1 para elegir la posicion en la sucesion Fibonacci\n");
    printf("2 para verificar si un numero esta en la sucesion Fibonacci\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Introduce la posicion en la sucesion Fibonacci: ");
        scanf("%d", &num);
        printf("El numero Fibonacci en la posicion %d es: %d\n", num, fibonacci(num));
    } 
    else if (opcion == 2) {
        printf("Introduce el numero a verificar: ");
        scanf("%d", &num);
        if (verificarFibonacci(num, 0, 1)) {
            printf("El numero %d pertenece a la sucesion Fibonacci.\n", num);
        } else {
            printf("El numero %d no pertenece a la sucesion Fibonacci.\n", num);
        }
    } 
    else {
        printf("Opcion no valida.\n");
    }

    getch();
    return 0;
}


