#include <stdio.h>
#include "main.h"

/**
 * main - function that prints the number of arguments passed to a program
 * @argc: the number of arguments
 * @argv: the array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
int num_args = argc - 1;

(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
