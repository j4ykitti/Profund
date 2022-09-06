#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char str[100];
    scanf("%s",&str);
    while (i < strlen(str)- 1)
    {
        i++ ;
    }
    printf("%c",str[i]);
    
    return 0;
}