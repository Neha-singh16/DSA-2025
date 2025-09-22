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


Node *ReverseDLL(Node *head)
{
  if(head == NULL || head->next == NULL) return head;
  Node* curr = head;
  stack<int> st;
  while(curr != NULL){
    st.push(curr->data);
    curr = curr->next;

  }
  curr = head;
  while(curr != NULL){
    curr->data = st.top();
    st.pop();
    curr = curr->next;
  }

  return head;
}


// Node *ReverseDLL(Node *head)
// {
//     Node *curr = head;
//     Node *last = nullptr;
//     while (curr != nullptr)
//     {
//         last = curr->prev;
//         curr->prev = curr->next;
//         curr->next = last;
//         curr = curr->prev;
//     }
//     if (last != nullptr)
//     {
//         head = last->prev;
//     }
//     return head;
// }

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
    vector<int> arr = {12, 4, 6, 9};
    Node *head = CovertArr2DLL(arr);
    // deleteNode(head->next);
    head = ReverseDLL(head);
    print(head);
    return 0;
}