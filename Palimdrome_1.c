#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char str1[] = "Madam";
    char str2[] = "Madam";
    i = strcmp(str1, str2);
    if (i == 0)
    {
        printf("The string is  a palimdrome");
    }
    else
    {
        printf("invalid ");
    }
}
