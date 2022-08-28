#include <string.h>
#include <stdio.h>

int str_len( const char *str )
{
    int i = 0;

    while (str[i] != '\0')
        i++;

    return i;
}

char *str_cpy( char *dest, const char *src )
{
    int i = 0;

    do
    {
        dest[i] = src[i];
    } while (src[i++] != '\0');

    return dest;
}

char *str_chr( const char *str, int sym )
{
    char *ptr = strdup(str);

    while (*ptr != sym)
        ptr++;

    if (*ptr == '\0' && sym != '\0')
        return NULL;

    return ptr;
}

int str_cmp( const char *str1, const char *str2 )
{
    int i = 0;

    while (str1[i] == str2[i] && !(str1[i] == '\0' || str2[i] == '\0'))
        i++;

    return str1[i] - str2[i];
}
