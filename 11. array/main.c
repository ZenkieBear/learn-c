#include <stdio.h>

int main()
{
    // declare an array
    int arr[10];
    
    // initialize an array
    double balance[5] = {1000.0, .2, 3.4, 7.0, 50.0};
    // number of element in {} can't more than the number declared in []
    // if you don't declared length in [], the length is the number of element in {}.
    double balance2[] = {1000.0, .2, 3.4, 7.0, 50.0}; // this is same as balance[5]
    // assign value to array's element
    balance[4] = 30;
    // access a array, get a value from array
    double salary = balance[4];

    int n[10];
    // initialize
    for (int i = 0; i < 10; i++)
    {
        n[i] = i + 100;
    }
    // print every element in array
    for (int j = 0; j < 10; j++)
    {
        printf("Element[%d] = %d\n", j, n[j]);
    }
    
    // two-dimensional array
    int tic_tac_toe[3][3];
    return 0;
}

// to transfer an array to a function
// 1. you can use a pointer as parameter
void myFun(int *param);
// 2. use an array which had already declare length
void myFun(int param[10]);
// 3. use an array with out length declaration
void myFun(int param[]);