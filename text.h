#ifndef TEXT_H
#define TEXT_H

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <locale>

int puts_(const char *str);

size_t strlen_(const char *str);

char *strchr_(char *str, int ch);

char *strcpy_(char *str1, const char *str2);

char *strncpy_(char *str1, const char *str2, size_t count);

char *strcat_(char *str1, const char *str2);

char *strncat_(char *str1, const char *str2, size_t count);

char *fgets_(char *str, int num, FILE *stream);

char *strdup_(const char *str);

int strcmp_(const char *str1, const char *str2);

//size_t getline_(char **lineptr, size_t *n, FILE *stream); //!!!!!!!!!!

#endif //TEXT_H
