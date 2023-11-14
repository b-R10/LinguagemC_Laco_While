#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = -1, k = 0;
    float s = 0, nota = -1;
    while(n <= 0){
        printf("Digite o número de alunos: ");
        scanf("%d", &n);
    }
    while(k<n){
        nota = -1;
        while(nota < 0 || nota > 10){
            printf("Digite a nota do aluno %d: ", k + 1);
            scanf("%f", &nota);
            if(nota < 0 || nota > 10){ printf("\t ERRO: nota fora do intervalo [0, 10].\n");}
        }
        s += nota;      // s = s + nota //
        k++;
    }
    printf("\nMedia da turma = %.1f", s/n);
    return 0;
}