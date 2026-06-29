///2.Write a C program to sort the array {1, 3, 1, 4, 5} in descending order using Insertion Sort.
#include<stdio.h>

int main()
{
    int arr[] = {1, 3, 1, 4, 5};

    for(int i = 1; i < 5; i++)
    {
        int temp = arr[i];
        int j;

        for(j = i - 1; j >=0 && arr[j] < temp; j-- )
        {
            arr[j + 1] =arr[j];
        }
        arr[j+1] = temp;
    }
    for(int i = 0; i < 5; i++)
    {
        printf("%d,", arr[i]);
    }

    return 0;
}
