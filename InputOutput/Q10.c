#include <stdio.h>
int main() {
    unsigned int octalValue;
    printf("Enter an octal number (e.g., 0754): ");
    scanf("%o", &octalValue);
    printf("Integer value: %u\n", octalValue);
	return 0;
}

