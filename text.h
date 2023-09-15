#ifndef TEXT_H
#define TEXT_H

#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <locale>

//string functions

int puts_(const char *str);

size_t strlen_(const char *str);

char *strchr_(const char *str, int ch);

char *strcpy_(char *str1, const char *str2);

char *strncpy_(char *str1, const char *str2, size_t count);

char *strcat_(char *str1, const char *str2);

char *strncat_(char *str1, const char *str2, size_t count);

char *fgets_(char *str, int num, FILE *stream);

char *strdup_(const char *str);

int strcmp_(const char *str1, const char *str2);


//print funcctions

void Print_Data(const char* data, size_t rows, size_t cols); // print only data

void Print_Data_with_zero(const char* data, size_t rows, size_t cols); // print /0 with data

void Print_triangle_data(const int* data, size_t rows);

void Print_data_shift(const int* data);



//check functions

void check_puts_();

void check_strlen_();

void check_strchr_();

void check_strcpy_();

void check_strncpy_();

void check_strcat_();

void check_strncat_();

void check_fgets_();

void check_strdup_();

void check_strcmp_();



void check_Print_Data();

void check_Print_Data_with_zero();

void check_Print_triangle_data();

void check_Print_data_shift();


#endif //TEXT_H
