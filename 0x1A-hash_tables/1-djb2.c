#include "hash_tables.h"

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int i = -1;

    while (str[++i])
    {
        hash = hash * 33 + (int)str[i];
    }

    return (hash);
}

