/*!
    Analog of strlen (<string.h>)
*/
int str_len( const char *str );

/*!
    Analog of strcpy (<string.h>)
*/
char *str_cpy( char *dest, const char *src );

/*!
    Analog of strchr (<string.h>)
*/
char *str_chr( const char *str, int sym );

/*!
    Analog of strcmp (<string.h>)
*/
int str_cmp( const char *str1, const char *str2 );

/*!
    Analog of strcat (<string.h>)
*/
char *str_cat( char *dest, const char *src );
