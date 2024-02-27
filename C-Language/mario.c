#include <stdio.h>

void mario_bricks(int);
void mario_walls(int, int);
int main(void)
{
    // mario_bricks(10);
    // const int m = 5;
    // const int n = 10;
    // mario_walls(m, n);



    // int m;
    // int n;
    // printf("Enter the value of m : ");
    // scanf("%d", &m);
    // while (m < 1 || m > 8)
    // {
    //     printf("Enter the value of m : ");
    //     scanf("%d", &m);
    // }
    // printf("Enter the value of n : ");
    // scanf("%d", &n);
    // while (n < 1 || n > 8)
    // {
    //     printf("Enter the value of n : ");
    //     scanf("%d", &n);
    // }
    // mario_walls(m, n);



    
}
void mario_bricks(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("? ");
    }
    printf("\n");
}
void mario_walls(int m, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}