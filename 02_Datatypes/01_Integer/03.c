// Cyclic rotation in integer datatype after it exceeds its positive range
// -32768 to -32767 for 2 bytes
// -2147483648 to 2147482647 for 4 bytes

#include<stdio.h>

void main()
{
	int a = 2147483646;
	a = a + 5;
	printf("%d", a);
}
