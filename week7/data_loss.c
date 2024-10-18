#include <stdio.h>

int main(void) {
	unsigned int x = 0x12345678;
	long lg = 2147483648;
	double xl = 123456789123.456789;

	printf("Unit: %d\n", x);
	printf("unit -> short: %d\n", (short)x);
	printf("unit -> char: %d\n", (char)x);

	printf("Long %d\n", lg);
	printf("Long -> int: %d\n", (int)lg);
	printf("Long -> char: %d\n", (char)lg);

	printf("dbl %lf\n", (double)xl);
	printf("dbl -> long: %d\n", (int)xl);
	printf("dbl -> short: %d\n", (short)xl);
	return 0;
}