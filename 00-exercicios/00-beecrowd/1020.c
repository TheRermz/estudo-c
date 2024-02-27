#include <stdio.h>

// Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias

// Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

// Entrada
// O arquivo de entrada contém um valor inteiro.

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
