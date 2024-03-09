#include <stdio.h>
#include <math.h>

int main()
{
    // calculo de imc, usuario insere peso e altura, calcular e mostrar o imc
    float peso, altura, imc;

    // o usuario insere o peso e ele e armazenado na variavel e espaco de memoria
    printf("Por favor, insira seu peso:\n");
    scanf("%f", &peso);

    // o usuario insere a altura e ela e armazenada na variavel e espaco de memoria
    printf("Agora, insira sua altura:\n");
    scanf("%f", &altura);

    // calculo do imc e a impressao dele, mostrando o resultado
    imc = peso / (altura * altura);
    printf("Seu imc e %f", imc);
    return 0;
}
/*
  Conversao em algoritmo!!

Algoritimo "imc"
var
   peso: real;
   altura: real;
   imc: real;

   peso <- 0
   altura <- 0
   imc <- 0

inicio
   Escreva("Por favor insira seu peso");
   Leia(peso);

   Escreva("Agora, insira sua altura");
   Leia(altura);

   imc = peso / (altura * altura);
   Escreva("Seu imc sera ", imc);

fimalgoritmo

*/
