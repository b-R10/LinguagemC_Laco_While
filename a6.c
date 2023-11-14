/*
Faça uma solução para imprimir a tabuada do 7, de 1 até 10.
Antes da implementação, faça o algoritmo e o teste de mesa.

*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int a=7, i=1;
    while(i <= 10)
    {
        printf("%i\n", a*i);
        i++;
    }
}