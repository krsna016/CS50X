#include <stdio.h>
int main(void)
{
    int x;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    int y;
    printf("Enter the value of y : ");
    scanf("%d",&y);
    if(x<y)
    {
        printf("X is less than Y\n");
    }
    else if(x>y)
    {
        printf("Y is less than X\n");
    }
    else
    {
        printf("X is equals to Y\n");
    }
}