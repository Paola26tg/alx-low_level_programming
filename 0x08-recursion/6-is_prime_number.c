#include "main.h"
/**
 * _prime - Returns 1 if the input integer is a prime number
 * @num: number
 * @div: divisor
 * Return: Returns 1 if is a prime number 0 otherwise
 */
int _prime(int num, int div)
{
	if (num % div == 0 || num < 2)
		return (0);
	else if (div == num)
		return (1);
	return (_prime(num, div + 1));
}

/**
 * is_prime_number - defines if the number is prime number
 * @n: number giving
 * Return: 1 if the number is prime and 0 otherwise
 */
int is_prime_number(int n)
{
	return (_prime(n, 2));
}
