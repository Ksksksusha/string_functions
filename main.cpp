#include "text.h"

int main()
{
    //check puts_()

    puts_("Puts\n");


    //check strlen_()

    printf("%d\n\n", strlen_("2143"));


    //check strchr_()

    char *p;
    char s0[] = "123456789";
    p = strchr_(s0, '4');
    printf("fitrst place of %c in %s ", '4', s0);
    printf("is %s\n\n", p);


    //check strcpy_()

    char s1[] = "123456";
    char s2[] = "12345";
    printf("copy of %s ", s2);
    printf("is %s\n\n", strcpy_(s1, s2));

    //check strncpy_()

    char s3[] = "678910";
    printf("strncpy_ of %s with count % d ",s3, 2);
    printf("is %s\n\n", strncpy_(s2, s3, 2));


    //check strcat_()

    printf("%s + %s ", s1, s2);
    printf("is %s\n\n", strcat_(s1, s2));


    //check strncat_()

    printf("%s + %s with count %d ", s1, s3, 3);
    printf("is %s\n\n", strncat_(s1, s3, 3));


    //check fgets_()

    FILE *text = NULL;

    text = fopen("C:\\Users\\User\\Documents\\C\\260822\\text.txt", "r");

    printf("fgets_ from file 'text.txt' with count %d is %s\n\n", 8,  fgets_(s1, 8, text));

    fclose(text);


    //check strdup_

    char *s4 = strdup_(s1);
    printf ("clon of %s:   %s\n\n", s1, s4);
    free (s4);

    //check strcmp_()

    char s5[] = "12345";
    char s6[] = "123";

    printf("%s more than %s of %d symbols\n\n", s5, s6, strcmp_(s5, s6));

    //check getline_()

    return 0;
}
