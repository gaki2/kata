#include <iostream>
using namespace std;
typedef struct _Node{
	int Data;
	struct _Node *next;
}Node;


int main(void)
{
	ios::sync_with_stdio(0);
	Node *head = NULL;
	Node *tail = NULL;
	Node *now_node = NULL;
	
	while (1)
	{
		int nData;
		cout << "값을 입력하세요.\n";
		cin >> nData;
		if (nData < 1)
			break;
		now_node = new Node;
		now_node->Data = nData;
		now_node->next = NULL;

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

	cout << "숫자 출력하기\n";
	Node *curr = NULL;

	if (head == NULL)
		return (0);
	else
	{
		curr = head;
		cout << "저장된 숫자는:" << curr->Data << '\n';
		while (curr->next != NULL)
		{
			curr = curr->next;
			cout << "저장된 숫자는:" << curr->Data << '\n';
		}
	}

	cout << "숫자 삭제하기\n";

	Node *delete_node;
	Node *next_delete_node;

	delete_node = head;
	next_delete_node = head->next;
	cout << "삭제한 숫자는 :"<< delete_node->Data << '\n';
	delete delete_node;
	while (next_delete_node != NULL)
	{
		delete_node = next_delete_node;
		next_delete_node = next_delete_node->next;
		cout << "삭제한 숫자는 :"<< delete_node->Data << '\n';
		delete delete_node;
	}
}



