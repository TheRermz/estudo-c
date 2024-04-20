#include <stdio.h>

int main()
{
    float n1, n2, n3, mf;
    printf("Por favor, insira as 3 notas do aluno separada por espaco:\n");
    scanf("%f %f %f", &n1, &n2, &n3);

    mf = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;

    if (mf >= 6)
    {
        printf("Com a nota %.2f o aluno foi aprovado", mf);
    }
    else
    {
        printf("Com a nota %.2f o aluno foi reprovado", mf);
    }
}
