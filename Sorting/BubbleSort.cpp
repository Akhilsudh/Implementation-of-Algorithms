#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[], int size)
{
    int i, j;
    for( i = 0; i < size - 1; i++)
    {
        for( j = 0; j < size - i - 1; j++)
        {
            if( arr[j+1] < arr[j])
            {
                swap(&arr[j], &arr[j+1]);
            }
        }
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
    int arr[] = { 10, 25, 21, 9, 11, 10, 45, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array : ");
    printArray(arr, size);
    BubbleSort(arr, size);
    printf("Sorted array : ");
    printArray(arr, size);
    return 0;
}