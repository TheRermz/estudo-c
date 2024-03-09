#include <stdio.h>

int main()
{
    // calculo de terreno, usuario insere largura e comprimento, calcular e mostrar a area
    float largura, comprimento, area;

    // o usuario insere a largura e ela e armazenada na variavel e espaco de memoria
    printf("Por favor, insira a largura:\n");
    scanf("%f", &largura);

    // o usuario em seguida insere o comprimento e a mesma tambem e armazenada na variavel e espaco de memoria
    printf("Agora, insira o comprimento:\n");
    scanf("%f", &comprimento);

    // calculo da area e a impressao dela, mostrando o resultado
    area = largura * comprimento;
    printf("A area do terreno sera %.2f!!!", area);
}

/*
   Conversao em algoritmo!!

Algoritimo "terreno"
var
   largura: real;
   comprimento: real;
   area: real;

   largura <- 0
   comprimento <- 0
   area <- 0

inicio
   Escreva("Por favor, insira a largura");
   Leia(largura);

   Escreva("Agora, insira o comprimento");
   Leia(comprimento);

   area = largura * comprimento;
   Escreva("A area do terreno sera ",area);

fimalgoritmo

*/
