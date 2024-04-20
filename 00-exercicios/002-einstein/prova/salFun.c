#include <stdio.h>
#include <locale.h>

int main()
{
    // 3.	Faca um programa em C que calcula o salario final de um funcionario. Serao atribuidos bonus ao salario do funcionario de acordo com pontuacoes atingidas, de acordo com a tabela abaixo. SalarioFinal = Salario + Bonus. (obs: o usuario entra com a pontuacao). (2 pontos)
    float salario, bonus;

    printf("Fala, meu consagrado!\nMe diz ai teu salario, por gentileza:\n");
    scanf("%f", &salario);

    printf("Dahora :]\nAgora, me diz ai quantos pontos vc fez:\n");
    scanf("%f", &bonus);

    if (bonus >= 1000)
    {
        printf("WOW! Seu salario final vai ser %2.f!! (So nao e maior que meu pau >:])", salario + 500);
    }

    else
    {
        printf("Legal! Seu salario final entao e %2.f! :D", salario + 300);
    }
}
