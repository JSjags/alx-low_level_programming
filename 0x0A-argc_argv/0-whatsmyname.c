#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: Always 0
*/
int main(int argc, char *argv[])
{
    int i;

    for (i = 0; i < argc; i++)
    {
        printf("%s", argv[i]);
    }
    return (0);
}