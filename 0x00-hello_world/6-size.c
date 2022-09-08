#include<stdio.h>
int main()
{
	int a;
	float b;
	long int c;
	long long int d;
	char f;
	printf("Size of a char: %d byte(s)\n", sizeof(f));
	printf("Size of an int: %d byte(s)\n", sizeof(a));
	printf("Size of a long int: %d byte(s)\n", sizeof(c));
	printf("Size of a long long int: %d byte\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(b));
	return (0);
}
