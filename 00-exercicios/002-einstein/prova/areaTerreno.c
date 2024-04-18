#include <stdio.h>

int main()
{
    // 1.	Faca um programa em C que calcule a area de um terreno. O usuario deve entrar com a largura e o comprimento do terreno. Considere area = largura * comprimento.

    float area, largura, comprimento;

    printf("Bem-vindo(a) a calculadora de area.\nPor gentileza, insira uma largura:\n");
    scanf("%f", &largura);

    printf("Valeu! :]\nAgora, insira um comprimento:\n");
    scanf("%f", &comprimento);

    area = largura * comprimento;

    printf("Baseado nos valores que voce me forneceu, a area do terreno sera %2.f", area);
}
