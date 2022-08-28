#include <string.h>

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
    char *ptr = (char *)str;

    while (*ptr != sym && *ptr != '\0')
        ptr++;

    if (*ptr != sym)
        return NULL;

    return ptr;
}

int str_len( const char *str )
{
    return str_chr(str, '\0') - str;
}

int str_cmp( const char *str1, const char *str2 )
{
    int i = 0;

    while (str1[i] == str2[i] && !(str1[i] == '\0' && str2[i] == '\0'))
        i++;

    return str1[i] - str2[i];
}

char *str_cat( char *dest, const char *src )
{
    int i = str_len(dest);

    int j = 0;

    while (src[j] != '\0')
        dest[i++] = src[j++];

    dest[i] = '\0';

    return dest;
}
