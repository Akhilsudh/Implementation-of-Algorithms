#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void CreateHeap(int arr[], int size, int index)
{
    int largest = index;
    int left = 2 * index + 1;
    int right = 2* index + 2;

    if((left < size) && (right < size))
    {
        if(arr[left] > arr[largest])
        {
            largest = left;
        }
        if(arr[right] > arr[largest])
        {
            largest = right;
        }
    }
    if(largest != index)
    {
        swap(&arr[largest], &arr[index]);
        CreateHeap(arr, size, largest);
    }
}

void HeapSort(int arr[], int size)
{
    int i;
    // Create max heap
    for( i = (size / 2) - 1; i >= 0; i--)
    {
        CreateHeap(arr, size, i);
    }
    // Transfer largest element to the end and 
    // then Create max heap with other elements
    for( i = size - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        CreateHeap(arr, i, 0);
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
    int arr[] = { 10, 25, 21, 9, 11, 10, 45, 31, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array : ");
    printArray(arr, size);
    HeapSort(arr, size);
    printf("Sorted array : ");
    printArray(arr, size);
    return 0;
}