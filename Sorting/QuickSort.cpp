#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int i;
    int pivotEle = arr[high];
    int index = low - 1;
    for( i = low; i <= high - 1; i++)
    {
        if(arr[i] <= pivotEle)
        {
            index++;
            swap(&arr[i], &arr[index]);
        }
    }
    swap(&arr[index + 1], &arr[high]);
    return index + 1;
}

void QuickSort(int arr[], int low, int high)
{
    if(low < high)
    {
        int p = partition(arr, low, high);
        QuickSort(arr, low, p - 1);
        QuickSort(arr, p + 1, high);
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
    QuickSort(arr, 0, size - 1);
    printf("Sorted array : ");
    printArray(arr, size);
    return 0;
}