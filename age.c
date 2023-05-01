#include <stdio.h>

/**
 * main - This is the entry point
 *
 * Return: Always returns 0 on success
 */

int main(void)
{
	char age;

	age = 33;
	printf("You are %d years old.\n", age);
	age = age + 5;
	printf("In five years you'll be %d years old!\n", age);

	return (0);
}
