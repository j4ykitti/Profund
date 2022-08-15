#include <stdio.h>

int main()
{
    int a,b,c,d;
    printf("Enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if ( a >= b)
    {
        if ( a >= c)
        {
            if (b > c)
            {
                d = a + c;
                printf("%d",d);
            }
            else
            {
                d = a + b;
                printf("%d",d);
            }
            
        }
        else
        {
            d = a + c;
            printf("%d",d);
        }
        
        return 0;
        
    }
    if ( b >= c)
    {
        if (a > c)
        {
            d = b + c;
            printf("%d",d);
        }
        else
        {
            d = a + b;
            printf("%d",d);
        }
        
        return 0;
        
    }
    else
    {
        d = c + a;
        printf("%d",d);
    }
    
    
    
    return 0;
}