/*!
    Analog of strlen (<string.h>)
    \param[in] str - string which length the function finds
    \return length of given string
*/
int str_len( const char *str );

/*!
    Analog of strcpy (<string.h>)
    \param[out] dest - destination string
    \param[in] src - source string
    \return string with copied data
*/
char *str_cpy( char *dest, const char *src );

/*!
    Analog of strchr (<string.h>)
    \param[in] str - string
    \param[in] sym - target symbol which we want to be found
    \return pointer to first found target symbol
*/
char *str_chr( const char *str, int sym );

/*!
    Analog of strcmp (<string.h>)
    \param[in] str1 - first string
    \param[in] str2 - second string
    \return difference between two strings
*/
int str_cmp( const char *str1, const char *str2 );

/*!
    Analog of strcat (<string.h>)
    \param[out] dest - destination string
    \param[in] src - source string
*/
char *str_cat( char *dest, const char *src );

/*!
    Analog of strdup (<string.h>)
    \param[in] str1 - source string
*/
char *str_dup( const char *str1 );

int str_str(const char *text, const char *pattern);
