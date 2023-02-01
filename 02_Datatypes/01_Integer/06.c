// Arithmetic Operation of two numbers given by user

#include<stdio.h>

void main()
{
	int a, b, c;
	printf("Enter first value: ");
	scanf("%d", &a);
	printf("Enter second value: ");
	scanf("%d", &b);
	c = a + b;
	printf("Sum of %d and %d = %d\n", a, b, c);
	c = a - b;
	printf("Difference of %d and %d = %d\n", a, b, c);
	c = a * b;
	printf("Multiplication of %d and %d = %d\n", a, b, c);
	c = a / b;
	printf("Division of %d and %d = %d\n", a, b, c);
}
