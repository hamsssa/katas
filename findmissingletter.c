#include <ctype.h>
#include <stdio.h>

char findMissingLetter(char array[], int arrayLength) 
{
    if (isupper(array[0]))
    {
        for (int i = 0; i < arrayLength - 1; i++)
        {
             if (array[i] + 1 != array[i + 1]) 
             {
                return  array[i] + 1;
             }
        }
    }
    else if (islower(array[0]))
    {
        for(int i = 0; i <  arrayLength - 1; i++)
        {
            if (array[i] + 1 != array[i + 1])
            {
                return  array[i] + 1;
            }
        }
    }
    return ' ';
}
