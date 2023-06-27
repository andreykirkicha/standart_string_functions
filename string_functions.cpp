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

    char *str2 = (char *)calloc(str_len(str1) + 1, sizeof(char));

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

int str_str(const char *text, const char *pattern)
{
    const char *text_variable = text;

    unsigned pattern_len = str_len(pattern);
    if (pattern_len == 0)
        return 0;

    while (char *start_sym = str_chr(text_variable, pattern[0])) 
    {
        int i = 0;

        while (i < pattern_len)
        {
            if (start_sym[i] != pattern[i])
                break;

            i++;
        }

        if (i == pattern_len)
            return start_sym - text;
            
        text_variable = start_sym + 1;
    }

    return -1;
}
