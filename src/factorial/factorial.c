#include <stdio.h>


long long factorial(long long num)
{
	if (num == 1 || num == 0)
		return (1);
	return num * factorial(num - 1);
}

int main(void)
{
	long long input;
	scanf("%lld", &input);
	long long result;

	if (input >= 0)
	{
		result = factorial(input);
		printf("%lld!=%lld\n", input, result);
	}
	else
		printf("Error: 입력은 0이상의 정수만 가능합니다.\n");
	return (0);
}
	

