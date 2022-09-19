#include<stdio.h>
int main()
{
    int input[10];
    printf("Enter input :");
    int i,j,k;
    for ( i = 0; i < 10; i++)
    {
        scanf("%d",&input[i]);    
    }
    i = 1;
    while (i < 10)
    {
        j = i-1;
        k = i+1;
        if (input[j] % 2 == 1 && input[k] % 2 == 1)
        {
            printf("%d\n",input[i]);
        }
        i++;
    }
    return 0;
}