#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main()
{
    char name[100];
    char *description;

    strcpy(name, "Zenkie Bear");

    /**
     * Dynamic memory allocation
     * void *malloc(int size) allocate a memory block which size is {size} bytes. This block won't be
     * initialized, its value is unknow.
     * void *calloc(int num, int size) allocate continuous {num} memory block which size is {size} bytes.
     * Every byte will got a initial value 0.
     */
    description = (char *) malloc(30 * sizeof(char));
    // description = (char *) calloc(30, sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate required memory\n");
    }
    else
    {
        strcpy(description, "Zara ali is a DPS student.");
    }
    /**
     * Assuming you need more memory.
     * void *realloc(void *address, int newsize) re-allocate memory and expand to {newsize} bytes.
     */
    description = (char *) realloc(description, 100 * sizeof(char));
    if (description == NULL)
    {
        fprintf(stderr, "Error - unable to allocate require memory\n");
    }
    else
    {
        strcat(description, "She is in class 10th");
    }

    printf("Name: %s\n", name);
    printf("Description: %s\n", description);

    // void free(void *address) release the memory block {address} pointed
    free(description);

    /**
     * Commonly memory management function and operators:
     * malloc() dynamic allocate memory(unit: byte).
     * free() release a memory block.
     * calloc(n, size) dynamic allocate {n} continuous memory block with {size}(unit: byte), every memory
     * block will initialize with value 0.
     * realloc() re-allocate memory and expand for a memory block.
     * sizeof get size(unit: byte) of a variable of a data type.
     * 
     * Pointer operator used to get the address or value pointer pointed.
     * & used to get a address of a variable.
     * * used to get a value of a pointer.
     * -> used to get a member of a struct variable.
     * memcpy(pt, pc, size) copy data from pointer {pt} to pointer {pc}, {size} is byte unit.
     * memmove(pt, pc, size) like memcpy(), but it can handle duplicate memory area.
     */
    return 0;
}