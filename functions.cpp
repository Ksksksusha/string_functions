#include "text.h"

int puts_(const char *str)
{
    if(str == 0)
    {
        return EOF;
    }


    while(*str != '\0')
    {        
        printf("%c", *str);
        str++;
    }

    printf("\n");

    return *str;
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

char *strcpy_(char *str1, const char *str2)
{
    char *s = str1;
    while(*str2 != '\0')
    {
        *s = *str2;
        s++;
        str2++;
    }
    *s = '\0';
    return str1;
}

char *strncpy_(char *str1, const char *str2, size_t count)
{
    char *s = str1;

    while(count > 0)
    {
        if(*str2 != '\0')
        {
            *s = *str2;
            str2++;
        }
        else
        {
            *s = '\0';
        }
        count--;
        s++;
    }

    return str1;
}

char *strcat_(char *str1, const char *str2)
{
    char *s = str1;
    while(*s != '\0')
    {
        s++;
    }
    while(*str2 != '\0')
    {
        *s = *str2;
        str2++;
        s++;
    }
    *s = '\0';
    return str1;
}

char *strncat_(char *str1, const char *str2, size_t count)
{
    char *s = str1;
    while(*s != '\0')
    {
        s++;
    }
    while(*str2 != '\0' && count > 0)
    {
        *s = *str2;
        str2++;
        s++;
        count--;
    }
    *s = '\0';
    return str1;
}

char *fgets_(char *str, int num, FILE *stream)
{
    char *s = str;
    char symbol = '\0';

    fscanf(stream, "%c", &symbol);

    while(symbol != '\n' && symbol != EOF && (num-1) > 0)
    {
        num--;
        *s = symbol;
        s++;
        fscanf(stream, "%c", &symbol);
    }
    *s = '\0';
    return str;
}

char *strdup_(const char *str)
{
    char *s = (char*)(calloc(strlen_(str), sizeof(char))); //!!!!!
    return strcpy_(s, str);
}


int strcmp_(const char *str1, const char *str2)
{
    return (strlen_(str1) - strlen_(str2));
}

/*size_t getline(char **lineptr, size_t *n, FILE *stream)
{
    char **line = *lineptr;

}*/

