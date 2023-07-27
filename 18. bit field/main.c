#include <stdio.h>

// this struct occupied 8 byte, even though we only use 1 bit length to express a bool value.
struct
{
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;
// let use the bit-field, it tell compiler these members only use 1 bit space.
struct
{
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status2;
/**
 * The struct above use 4 bytes, but only 2 bits will be used to storage. If you use 32 variables, and every variable
 * occupied 1 bit, the struct will still use 4 bytes.
 * If you use 33 variables, it will allocate next part of memory to storage 33rd variable. In this moment, the structs
 * use 8 bytes.
 */
int main()
{
    printf("Memory size occupied by status1: %d\n", sizeof(status1));   
    printf("Memory size occupied by status1: %d\n", sizeof(status2));

    // need a variable to storage value 0~7, you could define a bit-field width equals 3. (7=111 0=000)
    struct
    {
        unsigned int age: 3;
    } age;

    age.age = 4;
    printf("Size of age: %d\n", sizeof(age));
    printf("age.age: %d\n", age.age);

    age.age = 7;
    printf("age.age: %d\n", age.age);

    age.age = 8;
    printf("age.age: %d\n", age.age); // 8 binary is 1000, it has 4 bit. so it's invalid, compiler will gave a warning

    /**
     * A bit-field storage in a type, if this byte free space is not enough to save another bit-field, then use next unit to save
     * the newer bit-field.
     * You could make a bit-filed storage from next unit intentionally.
     */
    struct bs
    {
        unsigned a: 4;
        unsigned  : 4; // this empty bit-field occupied 4 bit. the empty bit-filed won't be used.
        unsigned b: 4; // this bit-field start from next unit
        unsigned c: 4;
    };

    /**
     * Bit-field's width couldn't over than it's data type's width.
     */
    
    /**
     * Bit field uses like struct.
     */
    struct
    {
        unsigned a: 1;
        unsigned b: 3;
        unsigned c: 4;
    } bit, *pbit;
    // assign to bit-field
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d, %d, %d\n", bit.a, bit.b, bit.c);
    // pointer using
    pbit = & bit;
    pbit->a = 0;
    pbit->b &= 3; // 111 & 011 => 011 => 3(decimalism)
    pbit->c |= 1; // 1111 | 0001 => 1111
    printf("%d, %d, %d\n", pbit -> a, pbit -> b, pbit -> c);
    return 0;
}
