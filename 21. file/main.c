#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;
    char path[] = "./test.txt";
    
    /**
     * FILE *fopen(const char *filename, const char *mode) open a file.
     * filename is the file's path. mode could be one in below:
     * r: open a exist file, allow reading.
     * w: open a file, allow writing. if this file doesn't exist, it will be created. else it will be emptied and write new content.
     * a: open a file, allow writing. if this file doesn't exist, it will be created. this mode don't overwrite original content.
     * it use append mode.
     * r+: open a exist file, allow reading and writing. overwrite mode, but won't empty file.
     * w+: as the same as 'w' mode, but it allows reading.
     * a+: open a file, allow readign and write. automatic create file. use append mode write, but read from the head of file.
     * 
     * if it's a binary file, use these mode below:
     * rb, wb, ab, rb+ or r+b, wb+ or w+b, ab+ or a+b
     */
    fp = fopen(path, "r+");

    /**
     * int fputc(int c, FILE *fp) put character c to the file fp pointed. if put successful, it will return the output character, 
     * or return EOF.
     */
    int ret = fputc('a', fp);

    // int fputs(const char *s, FILE *fp) put string s to the file fp pointed. result status is as same as fputc
    ret = fputs("\nHello World\n", fp);

    /**
     * int fprintf(FILE *fp, const char *format, ...) uses like printf, fp is the file pointer, format used to generate format
     * string.
     */
    ret = fprintf(fp, "Hello fprintf! I'm %s\n", "Zenkie Bear");
    fclose(fp);

    /**
     * int fclose(FILE *fp) will close a file, and return a value as the status.
     * if return 0, means closed successful.
     * if return EOF, means error happends.
     */
    fclose(fp);

    // init contents to read
    fp = fopen(path, "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);
    
    // read with fscanf, it'll stop when met blankspace, \n or EOF
    char buff[255];
    fp = fopen(path, "r");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff );

    // read with fgets, it'll stop when met \n or EOF.
    fgets(buff, 255, fp);
    printf("2: %s\n", buff);

    fgets(buff, 255, fp);
    printf("3: %s\n", buff);
    fclose(fp);

    return 0;
}