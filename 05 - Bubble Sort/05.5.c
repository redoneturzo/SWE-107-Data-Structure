///5.Write a C function bubbleSort() to sort an integer array using Bubble Sort.
#include<stdio.h>

void bubblesort();
int main()
{
    bubblesort();

    return 0;
}

void bubblesort()
{
    int arr[5] = {5, 3, 8, 1, 2};
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
    }
    for(int i = 0; i < 5; i++)
    {
       printf("%d,", arr[i]);
    }


}
