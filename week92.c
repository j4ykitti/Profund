#include <stdio.h>

int main()
{
    int num;
    float temp;
    scanf("%d", &num);
    for (temp = 0.001; temp * temp < num; temp += 0.001);
    printf("%.2f", temp);

    return 0;
}