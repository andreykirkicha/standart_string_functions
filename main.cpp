#include <stdio.h>
#include <string.h>
#include "string_functions.hpp"

int main()
{
    const char str1[] = "I'm just a string";
    char str2[] = "I'm not just a string, I'm something more";
    const char str3[] = " end of string";

    printf("STRLEN");
    printf("\t length of \"%s\" is %d\n\n\n", str1, str_len(str1));


    printf("STRCPY");
    printf("\t before");

    printf("\t dest:\t \"%s\"\n", str2);
    printf("\t\t src:\t \"%s\"\n\n", str1);

    str_cpy(str2, str1);

    printf("\t after");
    printf("\t dest:\t \"%s\"\n\n\n", str2);


    printf("STRCHR");
    printf("\t \"%s\"\n\n\n", str_chr(str1, 'u'));


    printf("STRCMP");
    printf("\t str1: \"%s\"\n", str1);
    printf("\t str2: \"%s\"\n", str2);
    printf("\t %d\n\n\n", str_cmp(str1, str2));


    printf("STRCAT");
    printf("\t before");

    printf("\t dest:\t \"%s\"\n", str2);
    printf("\t\t src:\t \"%s\"\n\n", str3);

    str_cat(str2, str3);

    printf("\t after");
    printf("\t dest:\t \"%s\"\n", str2);
/*
    char str4[] = "I'm not just a string, I'm something more";

    printf("STRLEN\n\n");
    printf("\t length of \"%s\" is %d\n\n", str1, strlen(str1));


    printf("STRCPY\n\n");
    printf("\t before");

    printf("\t dest: \"%s\"\n", str4);
    printf("\t\t src: \"%s\"\n\n", str1);

    strcpy(str4, str1);

    printf("\t after");
    printf("\t dest: \"%s\"\n\n", str4);


    printf("STRCHR\n");
    printf("\t \"%s\"\n\n", strchr(str1, 'u'));


    printf("STRCMP\n");
    printf("\t str1: \"%s\"\n", str1);
    printf("\t str2: \"%s\"\n", str4);
    printf("\t %d\n\n", strcmp(str1, str4));


    printf("STRCAT\n");
    printf("\t before");

    printf("\t dest: \"%s\"\n", str4);
    printf("\t\t src: \"%s\"\n\n", str3);

    strcat(str4, str3);

    printf("\t after");
    printf("\t dest: \"%s\"\n\n", str4);
*/
    return 0;
}
