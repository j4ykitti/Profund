#include<stdio.h>
int main()
{
    int n;
    int i = 0;
    int j = 0;
    printf("Enter Number");
    scanf("%d",&n);
    while (i < n)
    {
        j = 0;
        while (j < n)
        { 
            printf("*");
            j += 1;
        }
        printf("\n");
        i += 1;
        
    }
    
    
    return 0;
}