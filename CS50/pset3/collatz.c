#include <stdio.h>
#include <cs50.h>

int collatz(int n);

int main(void)
{
	int number = get_int("Number: \n");
	collatz(number);
}

int collatz(int n)
{
	if (n == 1)
		return 0;
	else if( n % 2 == 0)
		return 1 + collatz(n/2);
	else 
		return 1 + collatz(3 * n +1);
}
