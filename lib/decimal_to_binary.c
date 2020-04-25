#include <stdlib.h>
#include "decimal_to_binary.h"

char *decimal_to_binary(int n)
{
	int c, d, cnt;
	char *ptr;

	cnt = 0;
	ptr = (char *)malloc(32 + 1);

	if (ptr == NULL)
	{
		exit(EXIT_FAILURE);
	}

	for (c = 31; c >= 0; c--)
	{
		d = n >> c;

		if (d & 1)
		{
			*(ptr + cnt) = 1 + '0';
		}
		else
		{
			*(ptr + cnt) = 0 + '0';
		}

		cnt++;
	}

	*(ptr + cnt) = '\0';

	return ptr;
}

void decimal_to_binary_end(char *ptr)
{
	free(ptr);
}
