#include <stdio.h>
int main()
{
    /*
        Faça um programa para ler dois valores inteiros, e depois mostrar na tela a soma desses números com uma
        mensagem explicativa, conforme exemplos
    */
    int x, y, sum;
    printf("Digite os valores para a equacao:\n");
    printf("x:\n");
    scanf("%d", &x);
    printf("y:\n");
    scanf("%d", &y);
    sum = x + y;
    printf("O Valor de %d + %d = %d", x, y, sum);
    return 0;
}
