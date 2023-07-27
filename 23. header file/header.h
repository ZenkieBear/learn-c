// Avoid duplicate define, or compiler will gave a error
#ifndef MESSAGE_LENGTH
    #define MESSAGE_LENGTH 10
#endif

char *test(void);

char *test()
{
    return "A header";
}