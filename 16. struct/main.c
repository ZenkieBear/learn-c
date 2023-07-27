#include <stdio.h>
#include <string.h>

// tag {member-list...} variable-list;
struct Books
{
    char    title[50];
    char    author[50];
    char    subject[100];
    int     book_id;
} book = {"C language", "Zenkie Bear", "Program Languages", 100001}; // struct variables' initialization

/**
 * struct declaration usually contains 2 part of tag, member-list or variable-list at least
 */
// 1. without tag
struct
{
    int a;
    char b;
    double c;
} s1;

// 2. without variable-list
struct Simple
{
    int a;
    char b;
    double c;
};
// use struct Simple, declare variables t1, t2 and t3.
struct Simple t1, t2[20], *t3;

// 3. use typedef create a new type
typedef struct
{
    int a;
    char b;
    double c;
} Simple2;
Simple2 u1, u2[20], *u3;

/**
 * A struct could contains another struct or a pointer point to itself.
 */
// this struct contains a other struct.
struct Complex
{
    char string[100];
    struct Simple a;
};
// this struct contains a pointer point to its own type
struct Node
{
    char string[100];
    struct Node *next_node;
};

/**
 * If two structs contains each other, you need to declare one struct incomplete.
 */
struct B; // incomplete declaration
struct A
{
    struct B *partner;
    // other members...
};
struct B
{
    struct A *partner;
};

/**
 * A function use struct as its parameter.
 * 
 * @param book The book to be print;
 */
void printBook(struct Books book);
/**
 * Print book by struct pointer
 * 
 * @param book the struct pointer
 */
void printBookPtr(struct Books *book);

int main()
{
    struct Books book1;
    struct Books book2;

    // use member access operator(.) to access a struct varible's member
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", book.title,
        book.author, book.subject, book.book_id);
    
    // book1
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "Zenkie Bear");
    strcpy(book1.subject, "C programming tutorial.");
    book1.book_id = 10001;
    
    // book2
    strcpy(book2.title, "Build PC application with Election");
    strcpy(book2.author, "Zenkie Bear");
    strcpy(book2.subject, "Electron programming tutorial.");
    book2.book_id = 10002;

    // print
    // printf("Book 1 title: %s\n", book1.title);
    // printf("Book 1 author: %s\n", book1.author);
    // printf("Book 1 subject: %s\n", book1.subject);
    // printf("Book 1 book_id: %d\n", book1.book_id);

    // printf("Book 2 title: %s\n", book2.title);
    // printf("Book 2 author: %s\n", book2.author);
    // printf("Book 2 subject: %s\n", book2.subject);
    // printf("Book 2 book_id: %d\n", book2.book_id);

    printBook(book1);
    printBook(book2);

    /**
     * Struct pointer
     */
    struct Books *struct_pointer;
    struct_pointer = &book1;
    // to access the struct which pointer pointed, you must use -> operator
    struct_pointer->title;
    printBookPtr(&book1);
    printBookPtr(&book2);

    return 0;
}

/**
 * A function use struct as its parameter.
 * 
 * @param book The book to be print;
 */
void printBook(struct Books book)
{
    printf("Book title: %s\n", book.title);
    printf("Book author: %s\n", book.author);
    printf("Book subject: %s\n", book.subject);
    printf("Book book_id: %d\n", book.book_id);
}

/**
 * Print book by struct pointer
 * 
 * @param book the struct pointer
 */
void printBookPtr(struct Books *book) {
    printf("Book title: %s\n", book->title);
    printf("Book author: %s\n", book->author);
    printf("Book subject: %s\n", book->subject);
    printf("Book book_id: %d\n", book->book_id);
}