#include <stdio.h>

int esVocal(char oracion);

int main(){

    char oracion;
    int cantDiptongo=0,cantVocal= 0, vocalAnterior;

    printf("Escriba oracion: \n");
    scanf("%c",&oracion);

    while (oracion!='.')
    {
        if (esVocal(oracion)==1 && esVocal(vocalAnterior) == 1)
        {
            cantDiptongo +=1;
        }
        vocalAnterior = oracion;
        scanf("%c",&oracion);
    }
    printf("cant dip: %d",cantDiptongo);
    

    return 0;
}

int esVocal(char oracion){

    if (oracion=='a' || oracion=='e' || oracion=='i' ||
        oracion=='o' ||oracion=='u')
    {
        return 1;
    }
    return 0;
    
}