#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int N,M;
vector <int> row_data;
vector <pair<int, int> > > segtree;

pair <int, int> make_segtree(int Node, int start, int end)
{
	if (start == end)
	{
		int Max = 

int main(void)
{
	//input data
	ios::sync_with_stdio(0);
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		int data;
		cin >> data;
		row_data.push_back(data);
	}
	
	//make segmettree 

	int tree_height = (int)ceil(log2(N));
	int tree_size = (1 << (tree_height + 1));
	segtree.resize(tree_size);



