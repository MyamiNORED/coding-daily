#include <stdio.h>

main()
{
	int digits = 0, n;
	printf("Enter a  non negative integer: ");
	scanf("%d", &n);

	do {
		n = n /  10;
		digits++;

	} while (n > 0);
	printf("the number has %d digits(s).\n",digits);
	return 0;

}
