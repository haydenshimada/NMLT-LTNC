#include<iostream>

using namespace std;

struct Node{
	int data;
	Node *next;
};

Node *createNode(int x){
    Node *temp = new Node;
    temp->next = NULL;
    temp->data = x; 
    return temp;
}

void printList(Node *l){
	Node *p = l;
	while (p != NULL){
		cout << p->data << " ";
		p = p->next;
	}
}

Node *addElement(Node*p, int x){
	Node *temp = createNode(x);
	p->next = temp;
	return temp;
}

int main(){
	int n, x;
	cin >> n;
	cin >> x;
	Node *l = createNode(x);
	Node *p = l;
	for (int i = 1; i < n; i++){
		cin >> x;
		p = addElement(p, x);
	}
	printList(l);
	return 0;
}