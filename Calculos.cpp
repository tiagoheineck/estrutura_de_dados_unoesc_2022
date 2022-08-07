#include <stdio.h>
#include "Calculos.h"

void soma()
{
    int a = 0;
    int b = 0;
    int soma = 0;


    printf("Digite A \n");
    scanf_s("%d", &a);
    printf("Digite B: \n");
    scanf_s("%d", &b);

    soma = a + b;

    printf("A soma é %d\n", soma);
    
}