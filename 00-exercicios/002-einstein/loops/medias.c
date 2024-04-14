#include <stdio.h>

int main()
{
    // Faca o programa de calculo das medias para 10 alunos. Apresente as medias individuais e a media geral da sala.
    float nota1, nota2, media, media_geral;
    int i = 0;

    do
    {
        printf("Por favor, insira a primeira nota:\n");
        scanf("%f", &nota1);

        printf("Por favor, insira a segunda nota:\n");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2;
        media_geral += media;

        printf("Sua media e: %2.f\n", media);

        i++;
    } while (i < 10);

    printf("A media geral e: %2.f", media_geral / 10);
}
