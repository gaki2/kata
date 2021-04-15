#include <iostream>
using namespace std;
typedef struct _Node{
	int data;
	struct _Node *next;
} Node;

int main()
{
	ios::sync_with_stdio(0);
	Node *head = NULL;
	Node *tail = NULL;
	Node *now_node = NULL;

	int nData;
	while (1)
	{
		cout << "수를 입력하세요." << "\n";
		cin >> nData;
		if (nData < 1)
			break ;
		now_node = new Node;
		now_node->data = nData;
		now_node->next = NULL;

		if (head == NULL)
		{
			head = now_node;
			tail = now_node;
		}
		else
		{
			tail->next = now_node;
			tail = now_node;
		}
	}

	cout << "저장된 수 출력\n";
	
	if (head == NULL)
		return (0);
	Node *curr;
	curr = head;
	cout << "노드의 값 :" << curr->data << '\n';
	while (curr->next != NULL)
	{
		curr = curr -> next;
		cout << "노드의 값 :" << curr->data << '\n';
	}

	cout <<"데이터 삭제\n";

	Node *delete_node;
	Node *next_delete_node;
	
	if (head == NULL)
		return (0);
	delete_node = head;
	next_delete_node = head->next;
	cout << delete_node->data << " 삭제\n";
	delete delete_node;
	while (next_delete_node != NULL)
	{
		delete_node = next_delete_node;
		next_delete_node = next_delete_node->next;
		cout << delete_node->data << " 삭제\n";
		delete delete_node;
	}
}




