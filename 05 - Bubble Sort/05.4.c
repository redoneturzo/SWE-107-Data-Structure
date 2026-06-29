///4.Simulate Bubble Sort on the array {9, 4, 7, 2, 5} in descending order. Show the array after every pass.
#include<stdio.h>

int main()
{
    int arr[] = {9, 4, 7, 2, 5};

    for(int i =0; i < 5; i++)
    {
        for(int j =0; j < 4; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        for(int k = 0; k < 5; k++)
        {
            printf("%d,", arr[k]);
        }
        printf("\n");
    }
    return 0;
}
