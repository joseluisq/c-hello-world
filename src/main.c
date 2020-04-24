#include <stdio.h>
#include <stdlib.h>
#include "../lib/decimal_to_binary.h"

int main()
{
	int num;
	char *ptr;

	printf("Decimal to binary (CLang)\n");
	printf("Enter an integer in decimal number system: ");
	scanf("%d", &num);

	ptr = decimal_to_binary(num);

	printf("Binary string of %d is %s", num, ptr);

	free(ptr);

	return 0;
}
