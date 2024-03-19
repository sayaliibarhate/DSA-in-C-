#include <stdio.h>

int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}

void rotate(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) 
    {
        int last = arr[0];
        for (int i = 0; i<n-1; i++) 
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d\t",arr[i]);
    printf("\n");
}


int main()
{
    int arr [] = {0,1,2,4,5,6,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i,k,key;
 
    //print the  array
    printf("The array is: \n");
    printArray(arr, n);

    printf("\nEnter the rotation index: ");
    scanf("%d",&k);

    // Sort the given array
    qsort(arr, n, sizeof(int), cmpfunc);
    
    //rotate the array
    rotate(arr, k, n);
    
    //print the rotated array
    printf("\nThe sorted and rotated array is: \n");
    printArray(arr, n);

    //taking input from user for the element to be searched
    printf("\nEnter the element to be searched: ");
    scanf("%d",&key);

    for(i=0 ; i<n ; i++)
    {
	if(key==arr[i])
        {
        	printf("\nElement is found at position : %d\n",i+1);
                break;
        }
    }
    if(i == n)
    	printf("Element not found\n");

return 0;
}