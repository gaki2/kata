#include <iostream>
using namespace std;

typedef struct s_Node
{
	int data;
	struct s_Node *next;
}Node;

int main()
{
	Node *head = NULL;
	Node *tail = NULL;
	Node *cur = NULL;

	Node *newNode = NULL;
	int readData;

	while (1)
	{
		cout << "자연수 입력 : ";
		cin >> readData;
		if (readData < 1)
			break;

		newNode = new Node();
		newNode->data = readData;
		newNode->next = NULL;

		if (head == NULL)
			head = newNode;
		else
			tail->next = newNode;
		tail = newNode;
	}
	cout << '\n';
	cout << "저장된 데이터 출력" << '\n';
	
	if (head == NULL)
	{
		cout << "저장된 값 없음" << '\n';
	}
	else
	{
		cur = head;
		cout << cur->data << "  ";

		while (cur->next != NULL)
		{
			cur = cur->next;
			cout << cur->data << "  ";
		}
	}
	cout << '\n';

	if (head == NULL)
		return 0;
	else{
		Node *delNode = head;
		Node *delNextNode = head->next;

		cout << head->data << "을 삭제합니다." << '\n';
		delete delNode;

		while(delNextNode != NULL)
		{
			delNode = delNextNode;
			delNextNode = delNextNode->next;

			cout << delNode->data << "을 삭제합니다." << '\n';
			delete delNode;
		}
	}
	while(1)
	{
	}
}


