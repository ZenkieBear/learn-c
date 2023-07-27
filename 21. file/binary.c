#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    int id;
    char name[20];
    unsigned int age;
} Person;

Person zenkie;

void write(char *filename);
void read(char *filename);
void modify(char *filename);

int main()
{
    char filename[] = "test.bin";
    // write(filename);
    // read(filename);
    modify(filename);
    read(filename);
    return 0;
}

void checkFilePointer(FILE *fp)
{
    if (fp == NULL)
    {
        perror("open failed!");
        exit(1);
    }
}
void write(char *filename)
{
    FILE *fp = fopen(filename, "wb");
    checkFilePointer(fp);
    zenkie.id = 1;
    zenkie.age = 22;
    strcpy(zenkie.name, "Zenkie Bear");

    fwrite(&zenkie, sizeof(zenkie), 1, fp);
    fclose(fp);
}

void read(char *filename)
{
    FILE *fp = fopen(filename, "rb");
    checkFilePointer(fp);

    fread(&zenkie, sizeof(zenkie), 1, fp);
    printf("%d, %d, %s\n", zenkie.id, zenkie.age, zenkie.name);

    fclose(fp);
}

void modify(char *filename)
{
    FILE *fp = fopen(filename, "r+b");
    checkFilePointer(fp);

    while (1)
    {
        int res = fread(&zenkie, sizeof(zenkie), 1, fp);

        if (res <= 0) break;

        if (zenkie.id == 1)
        {
            zenkie.age = 18;
            strcpy(zenkie.name, "Zenkie Neko");
            fseek(fp, -sizeof(zenkie), SEEK_CUR); // set offset
            fwrite(&zenkie, sizeof(zenkie), 1, fp);
            break;
        }
    }
    
    fclose(fp);
}