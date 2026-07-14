#include<stdio.h>

int binarySearch(int arr[], int size, int targetValue);
int main()
{
    int arr[] = {2, 4, 6, 7, 9, 11, 15};
    int targetValue = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, size, targetValue);

    if(result != -1)
    {
        printf("%d Found at index %d", targetValue, result);
    }
    else
        {
            printf("Not Found");

        }
        return 0;
}

int binarySearch(int arr[], int size, int targetValue)
{
    int leftIndex = 0;
    int rightIndex = size - 1;
    while(leftIndex <= rightIndex)
    {
        int mid = (leftIndex + rightIndex) / 2;
        if(arr[mid] == targetValue)
        {
            return mid;
        }
        else if(arr[mid] > targetValue)
        {
            rightIndex = mid - 1;
        }
        else
        {
            leftIndex = mid + 1;
        }
    }
    return -1;

}

