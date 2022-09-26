#include <stdio.h>

int maximo_comun_divisor(int a, int b);
int minimo_comun_multiplo(int a,int  b);

int main(){
    int num1, num2, aux, minimo;
    {
        for (int i = 0; i < 6; i++)
        {
            printf("Escribir num1: ");
            scanf("%d",&num1);

            printf("Escribir num2: ");
            scanf("%d",&num2);
            if (num1==0 && num2 ==0) {
                break;
            }
            if (num1<num2)
            {
                aux= num1;
                num1= num2;
                num2= aux;
            }

            printf("Minimo: ");
            printf("%d \n", minimo_comun_multiplo(num1,num2));
        }
    }

    return 0;
}

int maximo_comun_divisor(int a, int b) {
    int temporal;//Para no perder b
    while (b != 0) {
        temporal = b;
        b = a % b;
        a = temporal;
    }
    return a;
}

int minimo_comun_multiplo(int a,int b) {
    return (a * b) / maximo_comun_divisor(a, b);
}