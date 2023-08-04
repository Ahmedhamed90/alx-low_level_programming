#include <stdio.h>

/**
 * main-print number of argument passed.
 *
 * @argc: number of commandline arguments.
 * @argv: pointer to an array of command line arguments.
 *
 * Reutrn: 0-success, non-zero-fial.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
