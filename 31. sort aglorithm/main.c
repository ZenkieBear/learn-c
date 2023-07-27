#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int arr[], int len)
{
    int tmp;
    for (int i = 0, j; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
}

void selection_sort(int arr[], int len)
{
    int tmp;
    for (int i = 0, j; i < len - 1; i++)
    {
        int min = i;
        // find minimum
        for (j = i + 1; j < len; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
}

void insertion_sort(int arr[], int len)
{
    int tmp;
    for (int i = 1, j; i < len; i++)
    {
        tmp = arr[i];
        for (j = i; j > 0 && arr[j - 1] > tmp; j--)
        {
            arr[j] = arr[j - 1];
        }
        arr[j] = tmp;
    }
}

int shell_sort(int arr[], int len)
{
    // len >> 1 <=> (len - len % 2) / 2
    int tmp;
    for (int gap = len >> 1, i, j; gap > 0; gap >>= 1)
        for (i = gap; i < len; i++)
        {
            tmp = arr[i];
            // for (j = i - gap; j >= 0 && arr[j] > tmp; j -= gap)
            //     arr[j + gap] = arr[j];
            // arr[j + gap] = tmp;
            for (j = i; j - gap > 0 && arr[j - gap] > tmp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = tmp;
        }
}

int min(int x, int y)
{
    return x < y ? x : y;
}
void merge(int *arr, int left, int mid, int right) {
    int i = left, j = mid, index = 0;
    int *tmp = (int*) malloc((right-left) * 4);
    // compare two set
    while (i < mid && j < right)
        tmp[index++] = arr[i] < arr[j] ? arr[i++] : arr[j++];
    while (i < mid)
        tmp[index++] = arr[i++];
    while (j < right)
        tmp[index++] = arr[j++];
    // copy to original array
    for (int i = 0; i < index; i++)
        arr[left + i] = tmp[i];
    free(tmp);
}
void mergeSortRecursive(int *arr, int left, int right)
{
    if (right - left <= 1)
        return;
    int mid = (left + right) / 2;
    mergeSortRecursive(arr, left, mid);
    mergeSortRecursive(arr, mid, right);
    // merge
    merge(arr, left, mid, right);
}

int swap(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quickSort(int num[],int i,int j){
    if(i >= j){//只剩一个元素不用处理直接结束。
        return;
    }
    //选取基准数
    int val =num[i];
    int l = i;
    int r = j;
    while(l < r){//当l == r时，就是调整完成时
        //从后往前找第一个小于val的数字
        while (l < r && num[r] > val){
            r --;
        }
        if(l < r){//找到了数字
            num[l++] = num[r];
        }
        //从前往后找第一个大于val的数字
        while (l < r && num[l] < val){
            l ++;
        }
        if(l < r){//找到了数字
            num[r--] = num[l];
        }
    }
    //l==r,基准数放进去
    num[l] = val;
    quickSort(num,i,l-1);
    quickSort(num,l+1,j);
}

void printArr(int arr[], int len) {
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int len = 10;
    int arr[] = {20, 6, 31, 26, 75, 28, 1, 67 ,47, 69};
    // srand((unsigned) time(NULL)); // flush random seed
    // for (int i = 0; i < len; i++) {
    //     arr[i] = abs(rand()) % 100;
    // }
    printf("origin: \n");
    printArr(arr, len);
    // bubble_sort(arr, len);
    // selection_sort(arr, len);
    // insertion_sort(arr, len);
    // shell_sort(arr, len);
    // mergeSortRecursive(arr, 0, len);
    // quickSort(arr, 0, len - 1);
    printf("sorted: \n");
    printArr(arr, len);
    return 0;
}