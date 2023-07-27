#include <stdio.h>
#include <time.h>

// this function use a pointer as the parameter type
void getSeconds(unsigned long *par);
// use pointer array
double getAverage(int *arr, int size);

int main()
{
    unsigned long sec;
    getSeconds(&sec);
    printf("Number of seconds: %d\n", sec);

    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage(balance, 5);
    printf("Average value is: %f\n", avg);
}

void getSeconds(unsigned long *par)
{
    // get current seconds
    *par = time(NULL);
    return;
}

double getAverage(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return 1.0 * sum / size;
}