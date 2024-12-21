#include <string.h>
char *strrev (char *string)
{
    int len = strlen(string);
    for(int i = 0;  i < len / 2; i++)
    {
        char temp;
        temp = string[i];
        string[i] = string[len - i - 1];
        string[len - i - 1] = temp;

    }
    return string;
}
