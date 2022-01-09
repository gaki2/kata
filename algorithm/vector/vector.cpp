#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> a;
	vector<int> b;

	a.push_back(1);
	a.push_back(2);
	b.push_back(100);
	b.push_back(1000);
	b.push_back(1000);
	
	vector<int> d;
	for (int i = 0; i < b.size(); i++)
	{
		int c = a[i] + b[i];
		d.push_back(c);
	}

	vector<int>::iterator iter;
	for (iter=d.begin(); iter != d.end(); iter++)
	{
		cout << *iter << '\n';
	}
}
