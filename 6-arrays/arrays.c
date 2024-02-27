#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    printf("Arrays são uma coleção de dados de um tipo!\n");
    printf("Você precisa dizer o tamanho do seu array\n");
    printf("O array é indicado pelo [] em frente do nome de uma variável, por exemplo ages[]\n");
    printf("O primeiro elemento sempre é o índice 0, por exemplo em um array de tamanho 10\n");
    printf("Ele se conta do índice 0 ao índice 9\n");

    int size = 10;
    int ages[] = {16, 18, 14, 16, 22, 26, 7, 15, 12, 20};

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", ages[i]);
    }

    // array de multiplas dimensões

    return 0;
}
