///6.Apply Bubble Sort to the array {15, 10, 8, 20, 5} and write the array after each iteration.
#include<stdio.h>

int main()
{
    int arr[5] = {15, 10, 8, 20, 5};
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if(arr[j] > arr[j+1])
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
