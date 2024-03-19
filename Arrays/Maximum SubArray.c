#include <stdio.h>

// function for kadane's algorithm to return the maximum sum of the subarray
static int maxSubArray(int arr[], int n) 
{
  int maxsum = 0;
  int currentsum = 0;

  for(int i=0; i<n; i++) 
  {
    currentsum = currentsum + arr[i];
    if (currentsum < 0)
      currentsum = 0; 
    if(maxsum < currentsum)
      maxsum = currentsum; 
  }
  return maxsum;
}

// test the code
int main() 
{
    int array[20],n;
    //taking user input of number of elements
    printf("Enter number of elements: ");
    scanf("%d",&n);

    //accepting the values
    printf("\nEnter the elements: \n");
    for (int i=0 ; i<n ; i++)
        scanf("%d",&array[i]);
        
    //printing the array 
    printf("\nThe elements of array are: \n");
    for (int i=0 ; i<n ; i++)
        printf("%d\t",array[i]);
    
    printf("\nMaximum SubArray is: %i", maxSubArray(array, n));
    return 0;
}















