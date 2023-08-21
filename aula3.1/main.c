#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A, B, soma,subtr,mult,divis;

        printf("Digite o primeiro valor:\n");
        scanf("%d", &A);
        printf("digite o segundo valor:\n");
        scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

        printf("Resultado: \n");
        printf("Soma: %d.\n", soma);
        printf("Subtr: %d.\n", subtr);
        printf("Mult: %d \n", mult);
        printf("Divis: %d. \n", divis);

     /*printf("Resultado das somas:\n");
     printf("Soma: %d.\n," soma);
     printf("subtra: %d.\n," subtra);
     printf("Multiplic.: %d.\n," Multiplic);
     printf("Divis: %d.\n," Divis);*/
}

