#include<stdio.h>
#include<string.h>
int main()
{
    int i = 0;
    char str[100];
    scanf("%s",&str);
    for ( i = 0; i < strlen(str); i++)
    {
        if (i = strlen(str) - 1)
        {
            printf("%c",str[i]);
        }
        
    }
    
    
    return 0;
}