#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: size of argc
 * @argv: arguments
 * Return: Always 0
 **/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int total;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i][0] == '-')
			{
				for (j = 1; argv[i][j] != '\0'; j++)
				{
					if (isdigit(argv[i][j]) == 0)
					{
						printf("Error\n");
						return (1);
					}
				}
			}
			else
			{
				for (j = 0; argv[i][j] != '\0'; j++)
				{
					if (isdigit(argv[i][j]) == 0)
					{
						printf("Error\n");
						return (1);
					}
				}

			total += atoi(argv[i]);
			}
		}
	}

	printf("%d\n", total);
	return (0);
}
