#include <stdio.h>
#include <conio.h>

void decimalBinario(int n){
    if (n==0) {
        return;
    }
    decimalBinario(n / 2 );// llamada recursiva 
    printf("%d", n % 2);
}

int main(){
    int num=0;

    printf("Numero a convertir: ");
    scanf("%d" , &num);

    if (num > 0)
    {
    printf("La presentacioon binaria de %d es: ", num);
    decimalBinario(num);
    printf("\n");
    }else
    {
     printf("El numero tiene que ser mayor a 0");   
    }

    
    getch();
    return 0;
}