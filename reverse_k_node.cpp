#include <bits/stdc++.h>
using namespace std;
class node {
public:
	int val;
	node* next;

	node(int val) {
		this->val = val;
		this->next = NULL;
	}

};

void insertathead(node* &head, int num) {
	node* temp = new node(num);
	temp->next = head;
	head = temp;
}

void insertatback(node* &head, int num) {
	//traverse till tail
	node* temp = head;
	while (temp->next != NULL) {
		temp = temp->next;
	}
	node* t2 = new node(num);
	temp->next = t2;
}


void deletenode(node* &head, int position) {
	// delete first node
	node* temp = head;
	while (position) {
		temp = temp->next;
		position--;
	}


}

void print(node* &head) {
	node* temp = head;
	while (temp->next != NULL) {
		cout << temp->val << "->";
		temp = temp->next;
	}
	cout << temp->val << endl;
}
int main() {
#ifndef ONLINE_JUDGE
	freopen("input1.txt", "r", stdin);
	freopen("output1.txt", "w", stdout);
#endif
	node* node1 = new node(10);
	node* head = node1;
	node* tail = node1;

	insertathead(head, 11);
	print(head);

	insertathead(head, 12);
	print(head);

	insertathead(head, 13);	print(head);

	insertathead(head, 14);	print(head);

	insertathead(head, 15);	print(head);

	insertathead(head, 16);	print(head);

	insertathead(head, 17);	print(head);

	insertathead(head, 18);	print(head);

	insertathead(head, 19);	print(head);

	insertathead(head, 20);	print(head);

	insertathead(head, 21);	print(head);

	insertathead(head, 22);	print(head);

	insertathead(head, 23);	print(head);

	insertathead(head, 24);	print(head);

	insertathead(head, 25);	print(head);
	cout << endl << endl << endl << endl;
	insertatback(head, 9); print(head);
	insertatback(head, 8); print(head);
	insertatback(head, 7); print(head);
	insertatback(head, 6); print(head);
	insertatback(head, 5); print(head);
	insertatback(head, 4); print(head);
	insertatback(head, 3); print(head);
	insertatback(head, 2); print(head);
	insertatback(head, 1); print(head);




	return 0;
}