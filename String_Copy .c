#include<stdio.h>
#include<string.h>
int main ()
{
    char str1[]="Jaka";
    char str2[]="Ria";
    strncpy(str1,str2,1);
    printf("%s",str1);

}