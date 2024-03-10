#include <stdio.h>

int main()
{
    float numero1, numero2, resultado;
    int tipo;

    while (tipo != 5)
    {
        printf("Para soma, digite 1, para subtracao digite 2, para multiplicacao digite 3, para divisao digite 4, para sair digite 5\n");
        scanf("%i", &tipo);

        printf("Insira o valor 1:\n");
        scanf("%f", &numero1);

        printf("Insira o valor 2:\n");
        scanf("%f", &numero2);

        // if(tipo == 1){
        //     resultado = numero1 + numero2;
        //     printf("O resultado e %f\n", resultado);
        // }

        switch (tipo)
        {
        case 1:
            resultado = numero1 + numero2;
            printf("O resultado e %f\n", resultado);
            break;
        case 2:
            resultado = numero1 - numero2;
            printf("O resultado e %f\n", resultado);
            break;
        case 3:
            resultado = numero1 * numero2;
            printf("O resultado e %f\n", resultado);
            break;
        case 4:
            resultado = numero1 / numero2;
            printf("O resultado e %f\n", resultado);
            break;

        default:
            printf("Saindo!\n");
            return 1;
            break;
        }
    }
}
