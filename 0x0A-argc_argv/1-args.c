#include <stdio.h>

/**
 * main-print number of argument
 *
 * @argc: number
 * @argv: pointer
 *
 * Reutrn: 0-success, non-zero-fial.
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
