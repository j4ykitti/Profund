#include<stdio.h>
int main()
{
    int n;
    int i = 1;
    int j = 0;
    printf("Enter Number");
    scanf("%d",&n);
    while (i <= n)
    {
        j = 0;
        while (j < i)
        { 
            printf("*");
            j += 1;
        }
        printf("\n");
        i += 1;
        
    }
    
    
    return 0;
}