#include <stdio.h>
int esPerfecto(int num);

int main(void) {
    int numero, perfectos;

    printf("Ingrese un numero ");
    scanf("%d", &numero);


    while (numero > 0)
    {
        if(esPerfecto(numero) == 1){
            puts("El numero es Perfecto");
            perfectos++;
        } 
        else {
            puts("El numero no es Perfecto");
        }
        puts("Ingrese un numero");
        scanf("%d", &numero);
    }
    
    printf("Cantidad de numeros perfectos: %d", perfectos);

    return 0;
}

int esPerfecto(int num){
    int suma=0;
    for (int i = 1; i < num; i++)
    {
        if(num % i == 0){
            suma += i;
        }
    }
    if (suma == num){
        return 1;
    }
    return 0;
}