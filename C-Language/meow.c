#include <stdio.h>

void meow(int);
int main(void)
{
    // // While-Loop
    // int i = 0;
    // while (i < 3)
    // {
    //     meow();
    //     i++;
    // }x
    // // For-Loop
    // for (int i = 1; i <= 3; i++)
    // {
    //     meow();
    // }
    // // Infinite-Loop
    // while (1)
    // {
    //     meow();
    // }
    // for (int i = 1; ; i++)
    // {
    //     meow();
    // }

    meow(10);
}

void meow(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Meow !!\n");
    }
}