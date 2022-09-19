#include<stdio.h>
int main()
{
    int input[10];
    printf("Enter input :");
    int i;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);    
    }
    for ( i = 1; i < 9; i++)
    {
        if (input[i-1] % 2 == 1 && input[i+1] % 2 == 1)
        {
            printf("%d\n",input[i]);
        }
        
    }
    return 0;
}
