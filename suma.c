#include <stdio.h>
int suma(int a, int b){
    return a + b;
}

int main(){
    int resultado= suma(5,3); //llamada a la función suma
    printf("Ls suma de 5 y 3 es: %d\n", resultado);

    return 0;

}