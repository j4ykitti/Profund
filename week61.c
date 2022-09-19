#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[100];
    printf("Enter input :");
    scanf("%s",&str);
    int j = strlen(str);
    for ( j = strlen(str); j > 0 ; j--)
    {
        for ( i = 0; i < j; i++)
        {
            printf("%c",str[i]);
        }
        printf("\n");
        
    }
    return 0;
}
    