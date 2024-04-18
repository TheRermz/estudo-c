#include <stdio.h>

int main()
{
    // Faca um programa em C que determine a situacao de um aluno:

    float nota1, nota2, frequencia, media;

    printf("Eai! Bem-vindo(a)! Vamos calcular sua media :]\nPor favor, me diga sua primeira nota:\n");
    scanf("%f", &nota1);

    printf("Legal! Agora, me diga sua segunda nota:\n");
    scanf("%f", &nota2);

    printf("Beleza! :] Por ultimo, qual foi sua frequencia?\n");
    scanf("%f", frequencia);

    media = (nota1 + nota2) / 2;

    if (media >= 6 && frequencia >= 75)
    {
        printf("Boa! Sua frequencia e media estao boas. Voce foi aprovado, parabens!! :]");
    }

    else if (media >= 6 && frequencia < 75)
    {
        printf("Por mais que sua media tenha sido %f, sua frequencia foi %f. Desculpe, voce foi reprovado :[", media, frequencia);
    }

    else if (media < 6 && frequencia >= 75)
    {
        printf("Por mais que sua frequencia tenha sido %f, sua media foi %f. Desculpe, voce foi reprovado :[", frequencia, media);
    }

    else
    {
        printf("Foi mal, voce foi reprovado! :[ Esta tudo bem, voce consegue!!");
    }
}
