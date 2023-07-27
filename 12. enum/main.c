#include <stdio.h>
#include <stdlib.h>

// this is a enum
enum DAY
{
    // MON = 1, TUE = 2, WED...
    MON = 1, TUE, WED, THU, FRI, SAT, SUN
};
// spring = 0, summer = 3, autumn = 4, winter = 5
enum season { spring, summer = 3, autumn, winter };

// declare an enum variable
// 1. declare enum type first, then declare enum variable.
enum DAY day;
// 2. declare enum type and variable in one moment
enum NUM
{
    ONE, TWO, THREE
} num;
// 3. declare enum without name
enum
{
    FOUR, FIVE, SIX
} num1;
int main()
{
    enum DAY day;
    day = WED;
    printf("%d", day);

    // traversal an enum
    for (day = MON; day <= SUN; day++)
    {
        printf("Enumerate element: %d\n", day);
    }
    // this enumarate is not continuous, couldn't be traversal
    enum
    {
        ENUM_0,
        ENUM_10 = 10,
        ENUM_11
    };

    // enumerate & switch
    enum color { red = 1, green, blue };
    enum color favorite_color;
    printf("Please enter you favorite color(1. red, 2.green, 3.blue): ");
    scanf("%lu", &favorite_color);

    switch (favorite_color)
    {
    case red:
        printf("your favorite color is red");
        break;
    case green:
        printf("your favorite color is green");
        break;
    case blue:
        printf("your favorite color is blue");
        break;
    default:
        printf("you'd not choose your favorite color\n");
        break;
    }

    // turn integer to enum
    enum days
    {
        saturday,
        sunday,
        monday,
        tuesday,
        thursday,
        friday
    };
    int a = 1;
    enum days weekend = (enum days) a; // type convert
    printf("weekend: %d", weekend);
    return 0;
}