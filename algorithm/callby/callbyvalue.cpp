#include <iostream>
#include <algorithm>

using namespace std;
int a = 10;
int b = 20;
void ft_swap(int a, int b)
{
	swap(a, b);
}

int main(void)
{
	ft_swap(a, b);
	cout << "a:" << a << "b:" << b << endl;
}
