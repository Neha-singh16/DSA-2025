#include <iostream>
#include <vector>
using namespace std;

class Node
{
public: 
    int data;
    Node *next;
    Node *prev;


public : Node(int data1, Node *next1, Node *prev1)
{
    data = data1;
    next = next1;
    prev = prev1;
}

public:
Node(int data1)
{
    data = data1;
    next = nullptr;
    prev = nullptr;
}
};


Node* AddTwoLL(Node* head1 , Node* head2){
    Node* dummy = new Node(-1);
    Node* curr = dummy;
    Node* t1 = head1;
    Node* t2 = head2;
    int carry = 0;
    while(t1!= NULL || t2 != NULL ){
        int sum = carry;
        if(t1) sum+= t1->data;
        if(t2) sum+= t2->data;
        Node* newNode = new Node(sum%10);
        carry = sum/10;
        curr->next = newNode;
        curr = curr->next;
        if(t1) t1= t1->next;
        if(t2) t2 = t2->next;
    }
    if(carry){
        Node* newNode = new Node(carry);
        curr->next = newNode;
    }
    return dummy->next;
}



Node *ConvertArr2DLL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
};

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {9, 6};
    vector<int> arr2 = {5 , 4, 9 ,2};
     Node *head1 = ConvertArr2DLL(arr1);
     Node *head2 = ConvertArr2DLL(arr2);
     Node *head3 = AddTwoLL(head1 , head2);
    // deleteNode(head->next);
    // head = ReverseDLL(head);
    print(head3);
    return 0;
}