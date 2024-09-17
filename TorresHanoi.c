#include <stdio.h>
#include <conio.h>

int movimientos = 0;

void torresHanoi(int n, char origen, char destino, char auxiliar)
{
    if (n == 1)
    {
        movimientos++;
        printf("Mover disco 1 desde la varilla %c hasta la varilla %c\n", origen, destino);
    }
    else
    {

        torresHanoi(n - 1, origen, auxiliar, destino);

        movimientos++;
        printf("Mover disco %d desde la varilla %c hasta la varilla %c\n", n, origen, destino);

        torresHanoi(n - 1, auxiliar, destino, origen);
    }
}

int main()
{
    int n;

    printf("Introduce el numero de discos: ");
    scanf("%d", &n);

    torresHanoi(n, 'O', 'A', 'D');

    printf("Numero de movimientos: %d\n", movimientos);

    getch();
    return 0;
}
