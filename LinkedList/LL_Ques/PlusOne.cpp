#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Node
{

public:
    int data;
    Node *next;
    Node *prev;

public:
    Node(int data1, Node *next1, Node *prev1)
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
Node *CovertArr2DLL(vector<int> arr)
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

Node *ReverseLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    Node *newHead = ReverseLL(head->next);
    Node *front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}

Node *PlusOne(Node *head)
{
    if (head == NULL)
        return head;
    head = ReverseLL(head);
    Node *curr = head;
    int carry = 1;
    while (curr != NULL)
    {
        int sum = curr->data + carry;
        curr->data = sum % 10;
        carry = sum / 10;
        if (carry == 0)
        {
            break;
        }

        if (curr->next == NULL && carry > 0)
        {
            curr->next = new Node(carry);
            break;
        }

        curr = curr->next;
    }
    return ReverseLL(head);
}

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
    vector<int> arr = {9, 9, 9};
    Node *head = CovertArr2DLL(arr);
    // head = ReverseLL(head);
    head = PlusOne(head);
    print(head);
    return 0;
}