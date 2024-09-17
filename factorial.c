#include <stdio.h>
#include <conio.h>

/*int factorial(int n){
    if (n==0 || n==1)
    {
        return 1;
    }
    return n * factorial(n-1);
}*/

int factorial(int i, int res, int num){
    if (i > num)
    {
        return res;
    }
    
    res *=i;
    factorial(i+1,res,num);
}

int main(){
    int num=5;
    printf("El factorial de %d es: %d\n",num,factorial(11 , 1, num));

     getch();
    return 0;
}
