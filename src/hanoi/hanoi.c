#include <stdio.h>

void hanoi(int num, char from, char by, char to)
{
	if (num == 1)
		printf("원반 1을 %c 에서 %c로 이동.\n", from, to);
	else
	{
		hanoi(num-1, from, to, by);
		printf("원반 %d를 %c 에서 %c 로 이동.\n", num, from, to);
		hanoi(num-1, by, from, to);
	}
}

int main(void)
{
	int input;
	scanf("%d", &input);

	hanoi(input, 'A','B','C');
	return (0);
}


