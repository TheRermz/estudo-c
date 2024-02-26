#include <stdio.h>
#include <stdbool.h>

/*
 *
 *
 *  ref https://www.tutorialspoint.com/cprogramming/c_operators.htm
 *
 *   type of operators
 *   unary, binary and ternary
 *
 *   unary ==> + , - --> plus and minus
 *   unary ==> ++, -- --> increment and decrement
 *
 *   binary ==> +,-,/,*,% --> arithmetic operators
 *   binary ==> =,+=,-=,/=,*=,%= --> assignment operators
 *   binary ==> ==, !=, <,>,<=,>= --> comparison operators
 *   binary ==> &&, ||, ! --> logical operators
 *
 *   ternary ==> ? : Conditional Operator
 *
 *
 */

int main()
{
    printf("\nForce precedence with()\n");
    int x = 2 * (3 + 3);
    int y = (2 * 3) + 3;

    printf("x=%d\n", x);
    printf("y=%d\n", y);

    printf("Modulus operator: \n");
    int c = 10 % 3;
    printf("10 %% 3 = %d\n", c);

    printf("Unary minus:\n");
    int a = 5;
    int b = -a;

    printf("b = %d\n", b);
    printf("a = %d\n", a); // a doesn`t change

    printf("post increment:\n");

    a = 5;
    b = 5;
    b = a++;

    printf("b = %d\n", b); // b gets assigned to first
    printf("a = %d\n", a); // then a is incremented

    b = 5;
    a = 5; // start fresh
    b = ++a;

    printf("pre increment:\n");
    printf("b = %d\n", b); // b gets assigned to second
    printf("a = %d\n", a); // a is incremented first

    printf("Assignment operators:\n");
    a = 5;
    b = 5;
    b += a;

    printf("b += a = %d\n", b); // 5+5
    a *= 30;
    printf("a *= 30 = %d\n", a); // 5*30
    a %= 140;
    printf("a %%= 140 = %d\n", a); // 150 % 140

    return 0;
}
