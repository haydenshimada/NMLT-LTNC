#include<iostream>

using namespace std;

struct Node{
	int value;
	Node *next;
};

Node *createNode(int x){
    Node *temp = new Node;
    temp->next = NULL;
    temp->value = x; 
    return temp;
}

void printList(Node *l){
	Node *p = l;
	while (p != NULL){
		cout << p->value << " ";
		p = p->next;
	}
}

Node *addElement(Node*p, int x){
	Node *temp = createNode(x);
	p->next = temp;
	return temp;
}

Node* removeMod(Node* head, int m){
    if( m == 1) 
        return NULL;
        
    Node* temp = head;
    while(temp->value % m == 0)
    {
        temp = temp->next;
        head = temp;
    }
    while(temp->next->next != NULL)
    {
        if(temp->next->value % m == 0) {
            temp->next= temp->next->next;
        }
        else{
            temp = temp->next;
        }
    }
    if(temp->next->next == NULL && temp->next->value % m == 0){
        temp->next = temp->next->next;
    }
        
    return head;
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
    int m;
    cin >> m;

    l = removeMod(l, m);
	printList(l);

	return 0;
}