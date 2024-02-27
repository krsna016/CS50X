#include <stdio.h>

int main(void)
{
    printf("Hello, world\n");
    printf("\\n\n");
    char name[10];
    printf("What's your name ? : ");
    scanf("%s",name);
    printf("My name is : %s\n",name);
    int counter = 1;
    counter = counter + 1;
    counter += 1;
    counter++;
    printf("The value of counter is : %d\n",counter);
}