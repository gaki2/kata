#include <stdio.h>
typedef long long ll;

ll fibo_repo[1000] = {1,1};

ll fibonacci(int num)
{ 
	if (num == 1)
		return 0;
	if (fibo_repo[num])
		return fibo_repo[num];
	else
	{
		fibo_repo[num] = fibonacci(num - 1) + fibonacci(num - 2);
		return (fibo_repo[num]);
	}
}

int main(void)
{
	int input;
	printf("피보나치 수열의 인덱스를 입력하시오.\n");
	scanf("%d", &input);
	ll result = fibonacci(input);
	printf("피보의 %d 번째 값은:%lld\n", input, result);
	return (0);
}

