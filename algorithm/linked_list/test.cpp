#include <iostream>
#include <vector>
using namespace std;

typedef struct Node{

	int data;
	struct Node *next;
} Node;


int main(){
	
	Node *head = NULL;
	Node *tail = NULL;
	Node *now_node = NULL;
	Node *curr = NULL;

	while (1)
	{
		int IData;
		cout << "숫자를 입력하세요." << '\n';
		cin >> IData;
		if (IData < 1)
			break ;
		now_node = new Node;
		now_node->data = IData;
		now_node->next = NULL;
		
		if (head == NULL){
			head = now_node;
			tail = now_node;
		}

		else
		{
			tail->next = now_node;
			tail = now_node;
		}
	}

	curr = head;
	if (curr == NULL)
		return 0;
	cout <<"자연수의 값은" << curr->data << '\n';
	while (curr->next != NULL)
	{
		curr = curr->next;
		cout <<"자연수의 값은" << curr->data << '\n';
	}

	Node *delete_node;
	Node *next_delete_node;

	delete_node = head;
	next_delete_node = head->next;
	cout << delete_node->data << "을 삭제하였습니다." << '\n';
	delete delete_node;
	while (next_delete_node != NULL)
	{
		delete_node = next_delete_node;
		next_delete_node = next_delete_node->next;
		cout << delete_node->data << "을 삭제하였습니다." << '\n';
		delete delete_node;
	}
}
