#include <stdio.h>
int main()
{
    char str1[50], str2[50];
    int i;
    printf("Enter Your String :");
    gets(str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    // for i last value is for null charactor
    str2[i] = '\0';
    printf("\nstr2 is=%s", str2);
}