/*
 *
 * Written by Michael Mattioli
 *
 */

#include <stdio.h>

#define RANGE 2500

int is_prime(int number)
{

	int flag;

	for (int i = 2; i <= number - 1; i++) {
		if  (number % i == 0)
			flag = 0;
		else
			flag = 1;
	}

	return flag;

}

int main ()
{
	printf("test\n");
	for (int i = 0; i < RANGE; i++) {
		if (is_prime(i))
			printf("%d is a prime number!\n", i);
	}
}
