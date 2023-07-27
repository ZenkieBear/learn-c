#include <stdio.h>

int main()
{
    int a = 21;
    int b = 10;
    int c;

    printf("### arithmetic operators\n");
    c = a + b;
    printf("Line 1 --- c is: %d\n", c);
    c = a - b;
    printf("Line 2 --- c is: %d\n", c);
    c = a * b;
    printf("Line 3 --- c is: %d\n", c);
    c = a / b;
    printf("Line 4 --- c is: %d\n", c);
    c = a % b;
    printf("Line 5 --- c is: %d\n", c);
    c = a++; // first assign, then add
    printf("Line 6 --- c is: %d\n", c );
    c = a--; // first assign, then cut
    printf("Line 7 --- c is: %d\n", c );


    printf("### first assign, then operating\n");
    a = 10;
    c = a++;
    printf("Line 1 --- c is: %d, a is: %d\n", c, a);
    a = 10;
    c = a--;
    printf("Line 2 --- c is: %d, a is: %d\n", c, a);
    printf("\n### first operating, then assign\n");
    a = 10;
    c = ++a;
    printf("Line 1 --- c is: %d, a is: %d\n", c, a);
    a = 10;
    c = --a;
    printf("Line 2 --- c is: %d, a is: %d\n", c, a);


    printf("\n### relation operators\n");
    a = 21, b = 10, c = 0;
    if (a == b) printf("Line 1 --- a equals b\n");
    else printf("Line 1 --- a is not equal to b\n");
    if (a < b) printf("Line 2 --- a is less than b\n");
    else printf("Line 2 --- a is bigger than b\n");
    if (a > b) printf("Line 3 --- a is bigger than b\n");
    else printf("Line 3 --- a is less than b\n");
    // change the value
    a = 5;
    b = 20;
    if (a <= b) printf("Line 4 --- a is less or equals b\n");
    if (b >= a) printf("Line 5 --- b is bigger or equals a\n");


    printf("\n### logical operators\n");
    if (a && b) printf("Line 1 --- condition is true\n");
    if (a || b) printf("Line 2 --- condition is true\n");

    a = 0, b = 10;
    if (a && b) printf("Line 3 --- condition is true\n");
    else printf("Line 3 --- condition is false\n");

    if (!(a && b)) printf("Line 4 --- condition is true\n");


    printf("\n### bitwise operators\n");
    unsigned int A = 60; // 60 = 0011 1100
    unsigned int B = 13; // 13 = 0000 1101
    c = 0;

    printf("Line 1 --- A & B is: %d\n", A & B); // 12 = 0000 1100
    printf("Line 2 --- A | B is: %d\n", A | B); // 61 = 0011 1101
    printf("Line 3 --- A ^ B is: %d\n", A ^ B); // 49 = 0011 0001
    printf("Line 4 --- ~A is: %d\n", ~A); // -61 = 1100 0011
    printf("Line 5 --- A << 2 is: %d\n", A << 2); // 240 = 1111 0000
    printf("Line 6 --- A >> 2 is: %d\n", A >> 2); // 15 = 0000 1111


    printf("\n### assignment operators\n");
    a = 21;
    c = 0;
    printf("Line 1 --- c = a, c is: %d\n", c = a);
    printf("Line 2 --- c += a, c is: %d\n", c += a); // equals c = c + a
    printf("Line 3 --- c -= a, c is: %d\n", c -= a); // equals c = c - a
    printf("Line 4 --- c *= a, c is: %d\n", c *= a); // equals c = c * a
    printf("Line 5 --- c /= a, c is: %d\n", c /= a); // equals c = c / a
    c = 200;
    printf("Line 6 --- c %%= a, c is: %d\n", c %= a); // equals c = c % a
    printf("Line 7 --- c <<= 2, c is: %d\n", c <<= 2); // equals c = c << a
    printf("Line 8 --- c >>= 2, c is: %d\n", c >>= 2); // equals c = c >> a
    printf("Line 9 --- c &= 2, c is: %d\n", c &= 2); // equals c = c & a
    printf("Line 10 --- c |= 2, c is: %d\n", c |= 2); // equals c = c | a
    printf("Line 11 --- c ^= 2, c is: %d\n", c ^= 2); // equals c = c ^ a

    printf("\n### other operators\n");
    a = 4;
    short b1;
    double c1;
    int* ptr;

    // sizeof
    printf("Line 1 --- a's size is: %d\n", sizeof(a));
    printf("Line 2 --- b's size is: %d\n", sizeof(b1));
    printf("Line 3 --- c's size is: %d\n", sizeof(c1));

    // & and *
    ptr = &a; // now, ptr contains the address of a
    printf("a's is: %d\n", a);
    printf("ptr is: %d\n", ptr);

    // ternary
    printf("result: %d\n", a == 10 ? 20 : 30);

    /**
     * Priority of operators:
     * type         operators                           associativity
     * suffix       ()[]->.++--                         ltr
     * unary        +-!~++--(type)*&sizeof              rtl
     * multiple     %/*                                 ltr
     * plus         +-                                  ltr
     * bit move     <<>>                                ltr
     * relation     < <= > >=                           ltr
     * bit and      &                                   ltr
     * bit xor      ^                                   ltr
     * bit or       |                                   ltr
     * logical and  &&                                  ltr
     * logical or   ||                                  ltr
     * tenary       ?:                                  rtl
     * assign       = += -= *= /= %= >>= <<= &= ^= |=   rtl
     * comma        ,                                   ltr
     */

    a = 20, b = 10, c = 15;
    int d = 5, e;
    printf("(a + b) * c / d is: %d\n", (a + b) * c / d); // 30 * 15 / 5 = 30 * 3 = 90
    printf("((a + b) * c) / d is: %d\n", ((a + b) * c) / d); // (30 * 15) / 5 = 90
    printf("(a + b) * (c / d) is: %d\n", (a + b) * (c / d)); // 30 * (15 / 5) = 90
    printf("a + (b * c) / d is: %d\n", a + (b * c) / d); //20 + 10 * 15 / 5 = 20 + 30 = 50
}