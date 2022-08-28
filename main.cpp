#include <stdio.h>
#include <string.h>
#include "string_functions.hpp"

int main()
{
    const char str1[] = "I'm just a string";
    char str2[] = "I'm not just a string, I'm something more";
    char str3[] = " and I want to be something more";

    printf("STRLEN\n\n");
    printf("\t length of \"%s\" is %d\n\n", str1, str_len(str1));


    printf("STRCPY\n\n");
    printf("\t before");

    printf("\t dest: %s\n", str2);
    printf("\t\t src: %s\n\n", str1);

    str_cpy(str2, str1);

    printf("\t after");
    printf("\t dest: %s\n\n", str2);


    printf("STRCHR\n");
    printf("\t %s\n\n", str_chr(str1, 'u'));


    printf("STRCMP\n");
    printf("\t %d", str_cmp(str1, str2));
    return 0;
}
