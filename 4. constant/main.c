#include <stdio.h>

// define constants with prehandler
#define LENGTH 10
#define WIDTH 5
#define NEWLINE '\n'

int main()
{
    /*
    Integer constans:
    212     legal
    215u    legal
    0xFeeL  legal
    078     illegal, octal dosent contain 8
    032UU   illegal, suffix cant be duplicate

    All types integer constans:
    85      decimal system
    0213    octal
    0x4b    hexadecimal
    30      integer
    30u     unsigned integer
    30l     long integer
    30ul    unsigned long interger
    */
    int myInt = 10;
    long myLong = 10000L;
    unsigned int myUnsignedInt = 10U;

    /*
    Float constants:
    3.14159     legal
    314159E-5L  legal   
    510E        illegal, incomplete exponential
    210f        illegal, hasn't decimal or exponential
    .e55        illegal, hasn't integer partment
    */
    // float number could take a suffix to declare data type.
    float myFlt = 3.14f;
    double myDouble = 3.14159;

    // character constants
    /*
    
    转义序列    含义
    \\	       \ 字符
    \'	       ' 字符
    \"	       " 字符
    \?	       ? 字符
    \a	       警报铃声
    \b	       退格键
    \f	       换页符
    \n	       换行符
    \r	       回车
    \t	       水平制表符
    \v	       垂直制表符
    \ooo	   一到三位的八进制数
    \xhh . . .一个或多个数字的十六进制数
    */
    printf("Hello\tWorld\n\n");
    // character constants can convert to intger value
    char myChar = 'a';
    int myAsciiValue = (int) myChar;

    // String constants
    "hello, dear";
    "hello, \
    dear";
    "hello, " "d" "ear"; // you could use space as the delimiter, these 3 situation make the same value.
    char myString[] = "Hello, world!"; // string constants end with \0, system will append \0 automatic
    // define constants with prehandler, lookup the head of this file
    int area = LENGTH * WIDTH;
    printf("value of area: %d \n", area);
    // define constants with keyword 'const'
    const char NAME[] = "Zenkie Bear";
    printf("Hello, %s", NAME);
    return 0;
}