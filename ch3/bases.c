#include <stdio.h>

int main(void)
{
    int base = 100;

    printf("dec = %d; octal = %o; hex = %x\n", base, base, base);
    printf("dec = %d; octal = %#o; hex = %#x\n", base, base, base);

    return 0;
}