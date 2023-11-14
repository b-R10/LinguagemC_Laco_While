/*
Faça uma solução para somar dois número inteiros enquanto ambos forem pares.
Mostrar a soma ao final do processamento.
Antes da implementação, faça o algoritmo e o teste de mesa.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a=2,b=2;
    while(a%2!=1 && b%2!=1)
    {
    printf("Digite dois números inteiros:\n");
    scanf("%i", &a);
    scanf("%i", &b);
        printf("%i\n", a+b);
    }
    return 0;
}