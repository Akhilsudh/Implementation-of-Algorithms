#include<stdio.h>

void LinearSearch(int arr[], int ele, int size)
{
    int i;
    int index = -1;
    for( i = 0; i < size; i++)
    {
        if(arr[i] == ele)
        {
            printf("Element %d found at index %d \n", ele, i);   
            return;
        }
    }
    printf("Requested element not found \n");
}

int main()
{
    int arr[] = {25, 21, 10, 9, 11, 10, 45, 31};
    int size = sizeof(arr) / sizeof(arr[0]);
    LinearSearch(arr, 10, size);
    LinearSearch(arr, 20, size);
    return 0;
}