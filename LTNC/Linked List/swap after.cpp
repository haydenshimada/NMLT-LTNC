/*
hàm Node* swapAfter(Node* head, int x) để đổi chỗ những node có giá trị x với node đằng sau nó. 
Nếu không có node có giá trị x hoặc là node cuối thì không làm gì cả. Hàm trả về con trỏ trỏ tới đầu danh sách liên kết.
Bổ sung: Nếu node có giá trị x và node liền sau nó cũng có giá trị x thì không làm gì cả.
Lưu ý : bạn phải viết code đổi chỗ 2 node chứ không phải đổi giá trị 2 node cho nhau.
*/
#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* next;
};

bool isInclude (Node *head, int x){
    for (Node *i = head; i != NULL; i = i->next){
        if (i->value == x )
            return 1;
    }
    return 0;
}

Node* swapAfter(Node* head, int x){
    if(head == NULL || head->next == NULL)
        return head;
    
    Node* temp = head;
    Node* pre = head;
    while(temp != NULL)
    {
        if(temp->next != NULL && temp->value == x && temp->next->value != x)
        {
            Node* temp_next = temp->next;
            temp->next = temp_next->next;
            temp_next->next = temp;
            if(pre != head)
                pre->next = temp_next;
            else
                head = temp_next;
            
            pre = temp;
            if(temp->next != NULL)
                temp = temp->next;
        }
        pre = temp;
        temp = temp->next;
    }
    return head;
}