#include<stdio.h>

int BinarySearch(int arr[], int ele, int low, int high)
{
    int mid = (low + high) / 2;
    if(high >= low)
    {
        if(arr[mid] == ele)
        {
            return mid;
        }
        else if(arr[mid] < ele)
        {
            return BinarySearch(arr, ele, mid + 1, high);
        }
        else
        {
            return BinarySearch(arr, ele, low, mid - 1);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {3, 10, 21, 21, 25, 42, 54, 69, 77, 91};
    int ele, index;
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Enter element to be searched : ");
    scanf("%d", &ele);
    if((index = BinarySearch(arr, ele, 0, size - 1)) >= 0 )
    {
        printf("Element found at index %d \n", index);
    }
    else
    {
        printf("Requested element not found \n");
    }
    return 0;
}