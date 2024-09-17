#include <stdio.h>

int potencia(int x){
    return x * x;
}

void mensaje(){
    printf("Este es una funcion que no retorna nada \n");
}


int suma(int a, int b){
    return a + b;
}

int main(){
    int num = 5;
    int resultado = potencia(num); //llamada a la función suma
    printf("La potencia de 5 es : %d\n", resultado);

    mensaje();

    int res = suma(5,3); //llamada a la función suma
    printf("Ls suma de 5 y 3 es: %d\n", res);
  




}