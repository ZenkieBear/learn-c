#include <stdio.h>

int count;
extern void write_extern();
/*
Extern used to define a global varible or function belongs to other file.
*/

int main()
{
    count = 5;
    write_extern();
}