#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return Always 0 (Success)
 * prints the size of various types on the computer it is compiled and run on
 */
int main(void)
{
	printf("The size of char:%c byte(s)\n",sizeof(char));

	printf("The size of int:%c byte(s)\n",sizeof(int));

	printf("The size of long int:%c byte(s)\n",sizeof(long int));

	printf("The size of long long int:%c byte(s)\n",sizeof(long long int));

	printf("The size of float:%c byte(s)\n",sizeof(float));

	return (0);
}
