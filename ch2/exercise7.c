#include<stdio.h>
#define LENGTH 10

int main(void)
{
    char *a = "Smile!";
    int line = LENGTH;

    for (; line > 0; line--)
    {
        for (int  i = line; i > 0; i--)
        {
            printf("%s ", a);
        }
        printf("\n");
    }

    return 0;
}