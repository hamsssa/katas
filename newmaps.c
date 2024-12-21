#include <stdlib.h>
int *maps(const int *arr, size_t size) 
    {
    int *newArr = (int *)malloc(size * sizeof(int));

    for(int i = 0; i < size; i++) {
        newArr[i] = arr[i] * 2;   
    }
    return newArr;
}
