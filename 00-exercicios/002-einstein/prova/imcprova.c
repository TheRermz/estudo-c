#include <stdio.h>

int main()
{
    // 4.	Faca um programa que calcule o IMC. O programa deve solicitar a altura e o peso da pessoa. Para calcular o IMC utilize a formula (IMC = peso/(altura*altura).  Com base no calculo do IMC, informe ao usuario sua situacao

    float peso, altura, imc;

    printf("Olar, buenas, tengo algo a perguntarte:\nQual es tu peso?\n");
    scanf("%f", &peso);
    printf("Ahora digame qual es tuya altura\n");
    scanf("%f", &altura);

    printf("Com estes dados irei calcular su IMC (Y)\n");

    imc = peso / (altura * altura);

    if (imc < 17)
    {
        printf("Muito abaixo do peso!\n");
    }

    else if (imc < 18.49)
    {
        printf("Abaixo do peso!\n");
    }

    else if (imc < 24.99)
    {
        printf("Peso Normal! :]\n");
    }

    else if (imc < 29.99)
    {
        printf("Acima do peso! (mas so um pouquinho)\n");
    }

    else if (imc < 34.99)
    {
        printf("Obesidade I!\n");
    }

    else if (imc < 39.99)
    {
        printf("Obesidade II!\n");
    }

    else
    {
        printf("Obesidade III! (toma cuidado :[)\n");
    }
}
