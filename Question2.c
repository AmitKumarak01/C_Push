#include<stdio.h>
#include<stdlib.h>
  
void Reverse_Array(int arr[], int start, int end)
{
    int temp=0;
    while (start < end) {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
  
void Print_Array(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
  
    printf("\n");
}
  

int main()
{
    int arr[] = { 1, 3,5,4,2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    Print_Array(arr, n);
    Reverse_Array(arr, 0, n - 1);
    printf("Reversed array is \n");
    Print_Array(arr, n);
    return 0;
}