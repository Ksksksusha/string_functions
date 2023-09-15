#include "text.h"

void check_puts_()
{
    puts_("Puts\n");
}

void check_strlen_()
{
    printf("%ld\n\n", strlen_("2143")); // rigth answer is 4
}

void check_strchr_()
{
    char *p;
    char str[] = "123456789";
    p = strchr_(str, '4');
    printf("fitrst place of %c in %s ", '4', str);
    printf("is %s\n\n", p);   
}

void check_strcpy_()
{
    char dst[] = "123456";
    char src[] = "12345";
    printf("copy of %s ", src);
    printf("is %s\n\n", strcpy_(dst, src));
}

void check_strncpy_()
{
    char dst[] = "123456";
    char src[] = "98765";
    printf("strncpy_ of %s in %s with count % d ", src, dst, 3);
    printf("is %s\n\n", strncpy_(dst, src, 3));
}

void check_strcat_()
{
    char dst[] = "123456";
    char src[] = "12345";
    printf("%s + %s ", dst, src);
    printf("is %s\n\n", strcat_(dst, src));

}

void check_strncat_()
{
    char dst[] = "123456";
    char src[] = "12345";
    printf("%s + %s with count %d ", dst, src, 3);
    printf("is %s\n\n", strncat_(dst, src, 3));

}

void check_fgets_()
{
    FILE *text = NULL;

    text = fopen("text.txt", "r");

    char line[100] = {};

    printf("fgets_ from file 'text.txt' with count %d is %s\n\n", 8,  fgets_(line, 8, text));

    fclose(text);

}

void check_strdup_()
{
    char src[] = "meow";
    char* dst = strdup_(src);

    printf("Copy of %s is %s \n", src, dst);

    free(dst);
}

void check_strcmp_()
{
    char str1[] = "1234";
    char str2[] = "1254";
    char str3[] = "1235";
    char str4[] = "12";

    printf("result of comparison %s and %s is %d \n", str1, str2, strcmp_(str1, str2));
    printf("result of comparison %s and %s is %d \n", str1, str3, strcmp_(str1, str3));
    printf("result of comparison %s and %s is %d \n", str1, str4, strcmp_(str1, str4));
}

