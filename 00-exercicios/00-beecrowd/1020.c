#include <stdio.h>

// Leia um valor inteiro correspondente � idade de uma pessoa em dias e informe-a em anos, meses e dias

// Obs.: apenas para facilitar o c�lculo, considere todo ano com 365 dias e todo m�s com 30 dias. Nos casos de teste nunca haver� uma situa��o que permite 12 meses e alguns dias, como 360, 363 ou 364. Este � apenas um exerc�cio com objetivo de testar racioc�nio matem�tico simples.

// Entrada
// O arquivo de entrada cont�m um valor inteiro.

int main()
{
    int ageDays, ageYear, ageMonth, ageDay;

    printf("Digite sua idade em dias:\n");
    scanf("%d", &ageDays);

    ageYear = ageDays / 365;
    printf("Anos: %d\n", ageYear);

    ageMonth = (ageDays % 365) / 30;
    printf("Meses: %d\n", ageMonth);

    ageDay = (ageDays % 365) % 30;
    printf("Dias: %d\n", ageDay);

    return 0;
}
