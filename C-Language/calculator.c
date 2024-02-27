#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main(void)
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of y : ");
    scanf("%d", &y);
    // printf("The sum of x and y is : %d\n",x+y);
    // printf("The difference of x and y is : %d\n",x-y);
    // printf("The product of x and y is : %d\n",x*y);
    // printf("The division of x and y is : %d\n",x/y);
    printf("The sum of x and y is : %d\n", add(x, y));
    printf("The difference of x and y is : %d\n", sub(x, y));
    printf("The product of x and y is : %d\n", mul(x, y));
    printf("The division of x and y is : %d\n", div(x, y));
}

int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int div(int a, int b)
{
    return a / b;
}