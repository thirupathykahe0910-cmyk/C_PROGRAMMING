#include <stdio.h>

int main() {
    unsigned int hexValue;
    printf("Enter a hexadecimal number (e.g., 0x1A3F): ");
    scanf("%x", &hexValue);
    printf("Integer value: %u\n", hexValue);
	return 0;
}

