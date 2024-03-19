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
        
    //printing the array elements
    printf("\nThe array elements are: \n");
    for (i=0 ; i<n ; i++)
        printf("%d\t",arr[i]);
    
    //calculating the length of the array using sizeof() function
    int len = sizeof(arr) / sizeof(arr[0]);
    
    //taking two loops to check duplicates
    for(i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(arr[i] == arr[j])
                printf("\nContains duplicate element: %d\n",arr[j]);
        }
    }
}
