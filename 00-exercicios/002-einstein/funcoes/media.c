#include <stdio.h>

float media(float nota1, float nota2)
{
    float media;
    media = (nota1 + nota2) / 2;
    return printf("%f", media);
}

int main()
{
    float nota1, nota2;
    printf("Insira a primeira nota\n");
    scanf("%f", &nota1);
    printf("Insira a segunda nota\n");
    scanf("%f", &nota2);
    media(nota1, nota2);
}
