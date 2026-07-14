#include<stdio.h>

int lineraSearch(int arr[], int size, int targetValue);
int main()
{
    int arr[] = {2, 4, 20, 22, 15, 25, 15, 6, 7, 9, 11, 15};
    int targetValue = 11;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = lineraSearch(arr, size, targetValue);

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

int lineraSearch(int arr[], int size, int targetValue)
{

    for(int i = 0; i < size; i++)
    {
        if(targetValue == arr[i] )
        {
            return i;
        }
    }
    return -1;
}
