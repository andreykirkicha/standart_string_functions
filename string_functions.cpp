#include <stdlib.h>

char *str_cpy( char *dest, const char *src )
{
    if (dest == NULL or src == NULL)
        return NULL;

    do
    {
        *dest = *src;
        dest++;
    } while (*(src++) != '\0');

    return dest;
}

char *str_chr( const char *str, int sym )
{
    if (str == NULL)
        return NULL;

    char *ptr = (char *)str;

    while (*ptr != sym && *ptr != '\0')
        ptr++;

    if (*ptr != sym)
        return NULL;

    return ptr;
}

int str_len( const char *str )
{
    if (str == NULL)
        return 0;

    return str_chr(str, '\0') - str;
}

int str_cmp( const char *str1, const char *str2 )
{
    if (str1 == NULL || str2 == NULL)
        return 0;

    while (*str1 == *str2 && *str1 != '\0')
    {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

char *str_cat( char *dest, const char *src )
{
    if (dest == NULL || src == NULL)
        return NULL;

    char *ptr = str_chr(dest, '\0');

    while (*src != '\0')
    {
        *ptr = *src;
        ptr++;
        src++;
    }

    *ptr = '\0';

    return dest;
}

char *str_dup( const char *str1 )
{
    if (str1 == NULL)
        return NULL;

    char *str2 = (char *)malloc(sizeof(str1));

    if (str2 == NULL)
        return NULL;

    char *ptr = str2;

    do
    {
        *ptr = *str1;
        ptr++;
    } while (*(str1++) != '\0');

    return str2;
}
