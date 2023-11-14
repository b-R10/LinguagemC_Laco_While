#include <stdio.h>
#include <stdlib.h>
int main(){
    int n, k = 0;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);
    while(k <= 10){
        printf("\n\t%d x %d = %d", n, k, n*k);
        k++;
    }
    return 0;
}