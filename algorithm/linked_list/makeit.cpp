#include <iostream>
using namespace std;

typedef struct _Node{
	int Data;
	struct _Node *next;
} Node ;

int main(void)
{
	Node *head = NULL;
	Node *tail = NULL;
	Node *now_node = NULL;

	while (1)
	{
		int nData;
		cout << "수를 입력하세요.\n";
		cin >> nData;
		if (nData < 1)
			break;
		now_node = new Node;
		now_node->Data = nData;
		if (head == NULL)
		{
			head = now_node;
		}
		else
		{
			tail->next = now_node;
		}
		tail = now_node;
	}

	//Data printing

	Node *curr = NULL;

	if (head == NULL)
		return (0);

	curr = head;
	cout << curr->Data << '\n';
	while (curr->next)
	{
		curr = curr->next;
		cout << curr->Data << '\n';
	}

	//delete Data;
	cout << "DELETE" << '\n';

	Node *delete_node = NULL;
	Node *next_delete_node = NULL;

	delete_node = head;
	next_delete_node = head->next;
	cout << "DELETE:" << delete_node->Data << '\n';
	delete delete_node;

	while (next_delete_node)
	{
		delete_node = next_delete_node;
		next_delete_node = next_delete_node->next;
		cout << "DELETE:" << delete_node->Data << '\n';
		delete delete_node;
	}
}





