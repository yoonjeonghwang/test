#include <stdio.h>

int main(void)
{
	//1049
#define _crt_secure_no_warnings

	int num1, num2, result;
	scanf("%d %d", &num1, &num2);
	result = num1 > num2;

	printf("%d", result);

	return 0;
}