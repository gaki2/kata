#include <iostream>
using namespace std;

#define MAX_LEN 100

class Elem {
	int Priority;
	char Data;
};

class Heap {
	int numOfData;
	Elem Heaparr[MAX_LEN];
};

void Init(Heap *pr)
{
	ph->numOfData = 1;
}

int GetParentIDX(int idx)
{
	return (idx / 2);
}

int GetLChildIDX(int idx)
{
	return (idx * 2);
}

int GetRChildIDX(int idx)
{
	return (idx * 2 + 1);
}



int main()
{

