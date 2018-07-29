#include<stdio.h>

void InsertionSort(int arr[], int size)
{
    int i, j, keyEle;
    for( i = 1; i < size; i++)
    {
        keyEle = arr[i];
        for( j = i - 1; (j >= 0) && (arr[j] > keyEle); j--)
        {
            arr[j + 1] = arr[j];
        }
        arr[j + 1] = keyEle;
    }
}

void printArray(int arr[], int size)
{
    int i;
    for( i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 10, 25, 21, 9, 11, 10, 45, 31, 9, 100, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array : ");
    printArray(arr, size);
    InsertionSort(arr, size);
    printf("Sorted array : ");
    printArray(arr, size);
    return 0;
}