#include <stdio.h>
#include <stdbool.h>

int main()
{
    int a = 10;
    double b = 10.5; // 8 bytes --> 64 bits
    printf("%lu\n", sizeof(b));
    double c = 10.5; // 4 bytes --> 32 bits
    printf("%lu\n", sizeof(c));
    char d = 'd';
    char e[] = "Character array"; // aka string
    bool f = false;

    int slices = 17;
    int ppl = 2;

    // casting
    double slicesPerPpl = (double)slices / ppl;

    double t1 = 25 / 2 * 2;   // 24.00
    double t2 = 25 / 2 * 2.0; // 24.00

    double t3 = 25.0 / 2 * 2;       // 25.00
    double t4 = (double)25 / 2 * 2; // 25.00

    return 0;
}
