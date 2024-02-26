#include <stdio.h>

/*Fazer um programa que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por
hora e calcula o salário desse funcionário. A seguir, mostre o número e o salário do funcionário, com duas casas
decimais.
*/

int main()
{
    int n, h;
    double sph, salary;

    printf("Digite o numero do funcionario, suas horas trabalhadas e seu salario por hora:\n");
    printf("Numero:\n");
    scanf("%d", &n);

    printf("Horas trabalhadas:\n");
    scanf("%d", &h);

    printf("Salario por hora:\n");
    scanf("%lf", &sph);

    salary = sph * h;

    printf("Funcionario numero %d\n", n);
    printf("Recebera o salario de R$%.2lf\n", salary);

    return 0;
}
