// Average of marks of four subjects
// Use of float datatype

#include<stdio.h>

void main()
{
	int h, e, m, s, t;
	float a;
	printf("Enter marks of Hindi: ");
	scanf("%d", &h);
	printf("Enter marks of English: ");
	scanf("%d", &e);
	printf("Enter marks of Mathematics: ");
	scanf("%d", &m);
	printf("Enter marks of Science: ");
	scanf("%d", &s);
	t = h + e + m + s;
	a = t / 4.0;
	printf("Total marks = %d\n", t);
	printf("Average marks = %.2f\n", a);
}
