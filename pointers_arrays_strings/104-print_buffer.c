#include <stdio.h>

void print_buffer(char *b, int size)
{
	int i, j;
	char current_char;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", (unsigned char)b[i + j]);
			}
			else
			{
				printf(" ");
			}

			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		printf(" ");
		for (j = 0; j < 10 && i + j < size; j++) 
		{
			current_char = b[i + j];
			if (current_char >= 32 && current_char <= 126)
			{
				printf("%c", current_char);
			}
			else
			{
				printf(".");
			}
		}
		printf("\n");
	}
}
