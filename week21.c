#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter three number");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c)
    {
        if (b > c)
        {
            d = a+c;
            printf("%d",d);
        }
        else
        {
            d = a+b;
            printf("%d",d);
        }
        return 0;
        
        
    }
    else if (b >= a && b >= c)
    {
        if (a > c)
        {
            d = c + b;
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
    if (a > b)
    {
        d = c + b;
        printf("%d",d);
    }
    else
    {
        d = c + a;
        printf("%d,d");
    }
    return 0;
    
    
  } 
    
    return 0;
}