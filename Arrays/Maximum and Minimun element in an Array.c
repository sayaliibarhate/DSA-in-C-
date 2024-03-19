#include <stdio.h>

int max(int a[], int n)
{
    int i;

    //storing first element in max variable
    int max = a[0];

    for(i=1 ; i<n ; i++)
    {
        if(a[i] > max)
            {
                max = a[i];
            }
    }
    return max;
}

int min(int a[], int n)
{
    int i;

    //storing first element in min variable
    int min = a[0];

    for(i=1 ; i<n ; i++)
    {
        if(a[i] < min)
            {
                min = a[i];
            }
    }
    return min;
}

int main()
{
    int i,arr[20],n;

    //taking user input of number of elements
    printf("Enter number of elements: ");
    scanf("%d",&n);

    //accepting the values
    printf("\nEnter the elements: \n");
    for (i=0 ; i<n ; i++)
        scanf("%d",&arr[i]);

    //printing the maximum and minimun value returned from the functions
    printf("Maximum element is: %d",max(arr,n));
    printf("\nMinimum element is: %d",min(arr,n));
}