#include <stdio.h>
#include <math.h>
int input;
int k;
int cnt;
void init(int is_start)
{
	if (is_start)
	{
		//printf("원반1을 A에서 B로 이동\n");
		cnt++;
	}
	else
	{
		//printf("원반1을 C에서 A로 이동\n");
		cnt++;
	}
}

void close(int is_start)
{
	if (is_start)
	{
		//printf("원반1을 A에서 C로 이동\n");
		cnt++;
	}
	else
	{
		//printf("원반1을 A에서 D로 이동\n");
		cnt++;
	}
}

void hanoi(int num, char from, char to, char by)
{
	if (num == 1)
	{
		//printf("원반%d을 %c에서 %c 로 이동\n", num + 1, from, to);
		cnt++;
	}
	else
	{
		hanoi(num - 1, from, by, to);
		//printf("원반%d을 %c에서 %c 로 이동\n", num + 1, from, to);
		cnt++;
		hanoi(num - 1, by, to, from);
	}
}

void hanoi2(int num, char from, char to, char by)
{
	if (num == 1)
	{
		//printf("원반%d을 %c에서 %c 로 이동\n", num + k, from, to);
		cnt++;
	}
	else
	{
		hanoi2(num - 1, from, by, to);
		//printf("원반%d을 %c에서 %c 로 이동\n", num + k, from, to);
		cnt++;
		hanoi2(num - 1, by, to, from);
	}
}

int find_bestk(int n)
{
	int result;
	double temp = sqrt(2*n + 1);
	result = n - (int)round(temp) + 1;
	return (result);
}

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &input);
		k = find_bestk(input);
		printf("k:%d\n",k);
		init(1);
		hanoi(k - 1, 'A', 'C', 'D');
		close(1);
		hanoi2(input - k, 'A', 'D', 'B');
		init(0);
		hanoi(k - 1, 'C', 'D', 'B');
		close(0);
		printf("Case %d: %d\n", i +1, cnt);
	}
	return (0);
}
	
