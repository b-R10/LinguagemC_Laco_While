/*
Faça uma solução para solicitar a idade de 10 pessoas
mostrar quantas são do sexo masculino e quantas são do sexo feminino.
Mostrar também a média de idades de ambos os sexos
Mostrar o percentual de homens e mulheres que participaram da pesquisa.
Antes da implementação, faça o algoritmo e o teste de mesa
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i=1, idade, masc=0, fem=0;
    float media_idade, percent_sexo_m, percent_sexo_f;
    char sexo='a';
    while(i<=10)
    {
        printf("Digite o sexo da pessoa %i: (m/f)", i);
        scanf("%c", &sexo);
        sexo = tolower(sexo);
        while((sexo != 'm') && (sexo != 'f'))
        {
            if (sexo == 'm')
                masc++;
            else if (sexo == 'f')
                fem++;
            printf("Digite a idade da pessoa %i: ", i);
            scanf("%i", &idade);
            media_idade += idade;
        i++;
        }
    }
    media_idade = media_idade/10;
    percent_sexo_m = (100*masc)/10;
    percent_sexo_f = (100*fem)/10;
    printf("Pessoas do sexo masculino: %i", masc);
    printf("Pessoas do sexo feminino: %i", fem);
    printf("Media de idade de ambos os sexos: %f", media_idade);
    printf("Porcentagem do sexo masculino: %f", percent_sexo_m);
    printf("Porcentagem do sexo feminino: %f", percent_sexo_f);
    return 0;
}