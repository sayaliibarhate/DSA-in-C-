#include <stdio.h>

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

    //traversing the array from end and printing the values
    printf("The reversed array is: \n");
    for (i=n-1 ; i>=0 ; i--)
        printf("%d\n",arr[i]);
}