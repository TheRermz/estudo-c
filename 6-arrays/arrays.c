#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Arrays s�o uma cole��o de dados de um tipo!\n");
    printf("Voc� precisa dizer o tamanho do seu array\n");
    printf("O array � indicado pelo [] em frente do nome de uma vari�vel, por exemplo ages[]\n");
    printf("O primeiro elemento sempre � o �ndice 0, por exemplo em um array de tamanho 10\n");
    printf("Ele se conta do �ndice 0 ao �ndice 9\n");

    int size = 10;
    int ages[] = {16, 18, 14, 16, 22, 26, 7, 15, 12, 20};

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ages[i]);
    }

    // array de multiplas dimens�es

    return 0;
}
