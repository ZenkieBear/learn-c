#include <stdio.h>
#include <string.h>

/**
 * using typedef define a new type.
 */
typedef unsigned char BYTE;
BYTE b1, b2; // <=> unsigned char b1, b2;

typedef struct Books
{
    char    title[50];
    char    author[50];
    char    subject[100];
    int     book_id;
} Book;

void printBool();
int main()
{
    Book book;

    strcpy(book.title, "C Programming");
    strcpy(book.author, "Zenkie Bear");
    strcpy(book.subject, "Programming languages");
    book.book_id = 12345;

    printf("title: %s\n", book.title);
    printf("author: %s\n", book.author);
    printf("subject: %s\n", book.subject);
    printf("title: %d\n", book.book_id);

    printBool();
}
/**
 * typedef VS #define
 * #define is C's command, used to define alias for data type like typedef, but they'd these difference:
 * 1. typedef only used to define data type alias, #define can define alias for data type, number values. .e.g. #define ONE 1
 * 2. typedef called by compiler, but #define called by precompiler
 */
#define true 1
#define false 0
void printBool()
{
    printf("true is: %d\n", true);
    printf("false is: %d\n", false);
}