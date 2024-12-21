#include <stdio.h>
#include <limits.h>

int find_smallest_int(int arr[], int len) 
{
    int smallest = INT_MAX; 
    for (int i = 0; i < len; i++) 
    {
        if (arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
