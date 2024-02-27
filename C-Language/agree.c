#include <stdio.h>
int main(void)
{
    char agree;
    printf("Do you agree ? : ");
    scanf("%c",&agree);
    if(agree == 'Y' || agree == 'y')
    {
        printf("Yes! I am agree\n");
    }
    else if(agree == 'N' || agree == 'n')
    {
        printf("No! I do not agree\n");
    }
}