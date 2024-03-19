#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
 
// Compare function for qsort
int cmpfunc(const void* a, const void* b)
{
    return (*(int*)a - *(int*)b);
}
 
// arr[0..n-1] represents sizes of packets
// m is number of students.
// Returns minimum difference between maximum and minimum values of distribution.
int findMinDiff(int arr[], int n, int m)
{
    // if there are no chocolates or number of students is 0
    if (m == 0 || n == 0)
        return 0;
 
    // Sort the given packets
    qsort(arr, n, sizeof(int), cmpfunc);
 
    // Number of students cannot be more than number of packets
    if (n < m)
        return -1;
 
    // Largest number of chocolates
    int min_diff = INT_MAX;
 
    // Find the subarray of size m such that difference between last (maximum in case of sorted) and first (minimum in case of sorted) elements of subarray is minimum.
 
    for (int i = 0; i + m - 1 < n; i++) {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
            min_diff = diff;
    }
    return min_diff;
}
 
int main()
{
    int arr[] = { 65,45,23,12,65,87,54,98,76,39,28 };
    int m = 7; // Number of students
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Minimum difference is %d\n",
           findMinDiff(arr, n, m));
    return 0;
}