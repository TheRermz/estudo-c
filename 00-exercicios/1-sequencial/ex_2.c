#include <stdio.h>
#include <math.h>

int main()
{
    // %c - for character data type
    // %d or %i - for integer data type
    // %f - for float data type
    // %lf - for double data type
    // %s - for string (array of characters)
    /*
     *
     * Faça um programa para ler o valor do raio de um círculo, e depois mostrar o valor da área deste * círculo com quatro
     *
     * Fórmula da área: area = π . raio2
     * Considere o valor de π = 3.14159
     *
     */

    double r, area;
    double pi = 3.14159;
    printf("Digite o raio do circulo a ser calculado:\n");
    scanf("%lf", &r);
    area = pi * pow(r, 2);
    printf("A area do circulo e %lf\n", area);

    return 0;
}
