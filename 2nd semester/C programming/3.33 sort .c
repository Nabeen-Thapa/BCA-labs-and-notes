#include <stdio.h>

void Sort(int arr[], int n);

int main()
{
    int arr[100], n, i;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    Sort(arr, n);

    printf("The sorted array is: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}

void Sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


