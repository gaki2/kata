#include <stdio.h>

int Binary_Search(int arr[], int first, int last, int num)
{
	if (first > last)
		return (-1);

	int mid = (first + last) / 2;

	if (arr[mid] == num)
		return mid;
	else if (arr[mid] > num)
		return Binary_Search(arr, first, mid - 1, num);
	else if (arr[mid] < num)
		return Binary_Search(arr, mid + 1, last, num);
}

int main(void)
{
	int arr[10] = {1,3,9,10,22,40,45,46,70,99};
	int index;
	int input;
	scanf("%d", &input);
	index = Binary_Search(arr, 0, 9, input);
	if (index == -1)
		printf("찾으려는 값은 존재하지 않습니다.\n");
	else
		printf("%d\n", arr[index]);
	return (0);
}

