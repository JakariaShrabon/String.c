
#include <stdio.h>
int main()
{
    char s[] = "Programmings";
    int i;

    for (i = 0; s[i] != '\0'; ++i)
        i++;

    printf("Length of the string: %d", i);
    return 0;
}
