#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - accepts arguments inputs
 *
 * @**av: array storing arguments passed to main
 * @ac: prints total number of arguments
 *
 * Return: 0
 */

int printpid();
int main(int ac, char **av)
{
	int i, b;
	b = printpid();

	for(i = 0; i < ac; i++)
	{
	printf("av[%d] = %s\n", i, av[i]);
	}
	printf("number of arguments are: %d\n", ac);
	printf("the pid is: %u\n", b);
	return 0;
}

/**
 * printpid - prints the pid
 * @a: gets the pid from getpid func
 *
 * Return: returns pid
 */

int printpid()
{
	pid_t a;
	a = getpid();
	return a;
}
