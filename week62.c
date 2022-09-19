#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,k;
    char str[100];
    printf("Enter input :");
    scanf("%s",&str);
    j = strlen(str);
    i = 0;
    while (j > 0)
    {
        i = 0;
        while (i < j )
        {
            printf("%c",str[i]);
            i++;
        }
        printf("\n");
        j--;
        
    }
    
    return 0;
}