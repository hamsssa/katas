#include <stdlib.h>
#include <string.h>
#include <stdio.h>
char *dna_to_rna( char *dna)
{
    size_t len = strlen(dna);
    char *rna = (char*)malloc(len + 1);
    
    for(size_t i = 0;  i < len; i++)
    {
        if(dna[i] == 'T')
        {
            rna[i] = 'U';
        }
        else
        {
            rna[i] = dna[i];
        }
    }
    rna[len] = '\0'; 
    return rna;

}
