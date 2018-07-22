#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void SelectionSort(int arr[], int size)
{
    int i, j, minIndex;
    for( i = 0; i < size - 1; i++)
    {
        minIndex = i;
        for( j = i + 1; j < size; j++)
        {
            if( arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&arr[minIndex], &arr[i]);
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
    SelectionSort(arr, size);
    printf("Sorted array : ");
    printArray(arr, size);
    return 0;
}