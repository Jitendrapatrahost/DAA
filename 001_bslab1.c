#include<stdio.h>

int bs(int a[], int n);

int main()
{
    int a[100], n, i;

    printf("Enter the number of elements of array: ");
    scanf("%d", &n);

    printf("Enter the %d numbers:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    bs(a, n);

    printf("The sorted array is:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }

    return 0;
}

int bs(int a[], int n)
{
    int temp, i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return 0;
}
