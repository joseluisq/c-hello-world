#include <stdio.h>
#include <stdlib.h>
#include "../lib/decimal_to_binary.h"

int main()
{
	int num;

	printf("Decimal to binary (CLang)\n");
	printf("Enter an integer in decimal number system: ");
	scanf("%d", &num);

	char *result = decimal_to_binary(num);

	printf("Binary string of %d is %s", num, result);

	decimal_to_binary_end(result);

	return 0;
}
