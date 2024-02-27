#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 17;
    // se menor de 17
    if (age < 17)
    {
        printf("crianso\n");
    } // ainda se, maior de 17 OU menor de 20
    else if (age > 17 || age < 20)
    {
        printf("adolesente\n");
    }
    else // se não
    {
        printf("adutu\n");
    }
    // negador se idade menor 17
    if (!(age < 17))
    {
        printf("idade menor 17\n");
    } // se não vv
    else
    {
        printf("idade maior 17\n");
    }

    int menuChoice = 2;

    switch (menuChoice)
    {
    case 0:
        printf("case 0\n");
        break;
    case 1:
        printf("case 1\n");
        break;
    case 2:
        printf("case 2\n");
        break;
    default:
        printf("Default\n");
        break;
    }

    double balance = -5000;
    balance > 0 ? printf("chei da grana bicho\n") : printf("quebradolkkkkk\n");
    bool hasMoney;
    hasMoney = balance > 0 ? 1 : 0;
    printf("Has mone? 1 ye 0 no: %d\n", hasMoney);

    return 0;
}
