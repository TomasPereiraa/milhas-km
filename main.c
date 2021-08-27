#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    float km,milhas,constante;
    constante = 1.61;

    printf("Escolha 0 para passar de Milhas para Kilometros\n");

    printf("Escolha 1 para passar de Kilometros para Milhas\n");

    printf("Escolha: ");

    scanf("%d", &a);

    switch(a)
    {
    case 0 :
        printf("Insira a distancia em milhas: ");
        scanf("%f",&milhas);
        printf("O valor em kilometros e: %3.0f",km=constante*milhas);
        break;
    case 1 :
        printf("Insira a distancia em kilometros: ");
        scanf("%f", &km);
        printf("O valor em milhas e: %3.0f", milhas=km/constante);
        break;
    default:
        printf("O numero que escolheu nao e valido");
    }
    return 0;
}
