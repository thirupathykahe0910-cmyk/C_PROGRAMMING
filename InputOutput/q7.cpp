#include <stdio.h>
int main()
{
    int decimalNumber;
    printf("Enter an integer number: ");
    scanf("%d", &decimalNumber);
    printf("Hexadecimal (lowercase): %x\n", decimalNumber);
    printf("Hexadecimal (uppercase): %X\n", decimalNumber);

    return 0;
}