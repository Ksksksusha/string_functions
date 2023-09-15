#include "text.h"

//---------------------------String--Functions------------------------------------

int puts_(const char *str)
{
    if(str == NULL)
    {
        return EOF;
    }


    while(*str != '\0')
    {        
        putc(*str, stdout);
        str++;
    }

    printf("\n");

    return 0;
}

size_t strlen_(const char *str)
{
    size_t len = 0;

    while(*str != '\0')
    {
        str++;
        len++;
    }

    return len;
}

char *strchr_(const char *str, int ch)
{
    while(*str != '\0' && *str != ch)
    {
        str++;
    }
    return (char*) str;
}

char *strcpy_(char *dst, const char *src) // src -откуда копируем(str2), dst - куда копируем(str1)
{
    char *src_iter = dst;
    while(*src != '\0')
    {
        *src_iter = *src;
        src_iter++;
        src++;
    }
    *src_iter = '\0';
    return dst;
}

char *strncpy_(char *dst, const char *src, size_t count)
{
    char *src_iter = dst;

    while(count > 0 && *(src+1) != '\0')
    {
        //printf("\n strncpy: we change %c on %c \n \n", *src, *src_iter);
        *src_iter = *src;
        count--;
        src_iter++;
        src++;
    }

    return dst;
}

char *strcat_(char *dst, const char *src)
{
    char *src_iter = dst;
    while(*src_iter != '\0')
    {
        src_iter++;
    }
    while(*src != '\0')
    {
        *src_iter = *src;
        src++;
        src_iter++;
    }
    *src_iter = '\0';
    return dst;
}

char *strncat_(char *dst, const char *src, size_t count)
{
    char *src_iter = dst;
    while(*src_iter != '\0')
    {
        src_iter++;
    }
    while(*src != '\0' && count > 0)
    {
        *src_iter = *src;
        src++;
        src_iter++;
        count--;
    }
    *src_iter = '\0';
    return dst;
}

char *fgets_(char *str, int num, FILE *stream)
{
    char *str_iter = str;
    char symbol = '\0';

    fscanf(stream, "%c", &symbol);

    while(symbol != '\n' && symbol != EOF && (num) > 0)
    {
        num--;
        *str_iter = symbol;
        str_iter++;
        symbol = fgetc(stream);
    }
    *str_iter = '\0';
    return str;
}

char *strdup_(const char *src)// don't forget use free() !!!!
{
    char* dst = (char*) calloc(strlen_(src) + 1, sizeof(char));
    
    return strcpy_(dst, src);
}

int strcmp_(const char *str1, const char *str2) // str1>str2 -> >0, str1==str2 -> 0
{
    while(*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
    {
        str1++;
        str2++;
    }
    return (*str1 - *str2);
}

