#include <stdbool.h>
#include <string.h>
#include <ctype.h>
bool IsIsogram (const char *string) 
{
    size_t len = strlen(string);
    char temp[len + 1];
    for (size_t i = 0; i < len; i++) 
    {
         temp[i] = tolower(string[i]); 
    }
    temp[len] = '\0'; 
    for (size_t i = 0; i < len; i++) 
    {
    for (size_t j = i + 1; j < len; j++) 
    {
        if (temp[i] == temp[j]) 
        {
            return false;
        }
    }
    }
    return true;

}
