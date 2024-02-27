#include <stdio.h>
#include <math.h>
/*
 * Fazer um programa que leia três valores com ponto flutuante de dupla
 * precisão: A, B e C. Em seguida, calcule e
 * mostre:
 * a) a área do triângulo retângulo que tem A por base e C por altura. || bh/2
 * b) a área do círculo de raio C. (pi = 3.14159) || pi.r²
 * c) a área do trapézio que tem A e B por bases e C por altura.|| (a+b)/2.h
 * d) a área do quadrado que tem lado ||B. b²
 * e) a área do retângulo que tem lados A e B.|| a.b
 */

int main()
{
    double a, b, c, triangulo, circulo, trapezio, quadrado, retangulo;
    double pi = 3.14159;
    printf("Informe tres dados para calcular a area de forma geometricas:\n");

    printf("A:\n");
    scanf("%lf", &a);

    printf("B:\n");
    scanf("%lf", &b);

    printf("C:\n");
    scanf("%lf", &c);

    triangulo = a * c / 2;
    circulo = pi * pow(c, 2);
    trapezio = (a + b) / 2 * c;
    quadrado = pow(b, 2);
    retangulo = a * b;

    printf("Triangulo:%.2lf\nCirculo:%.2lf\nTrapezio:%.2lf\nQuadrado:%.2lf\nRetangulo:%.2lf\n", triangulo, circulo, trapezio, quadrado, retangulo);
    return 0;
}
