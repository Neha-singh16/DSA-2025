#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int data;
    Node *next;

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *ConvertArr2LL(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int CheckVal(Node *head, int value)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == value)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node *removeHead(Node *head)
{
    if (head == NULL)
        return head;
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    delete temp->next;
    temp->next = NULL;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node *temp = head;
    int cnt = 0;
    Node *prev = NULL;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node *insertTail(Node *head, int val)
{
    if (head == NULL)
        return head;
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node *insertK(Node *head, int val, int k)
{
    if (head == NULL)
    {
        if (k == 1) return new Node(val);
        else return NULL;
    }

    if( k == 1){
        Node* temp = new Node(val);
        temp->next = head;
        return temp;
    }


    Node* temp = head;
    int cnt = 1;
    while(temp != NULL){
        if(cnt == k-1){
            Node* newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            return head;
        }
        temp = temp->next;
        cnt++;

    }
    return head;
}

int main()
{
    vector<int> arr = {12, 9, 6, 7};
    Node *head = ConvertArr2LL(arr);
    // cout << CheckVal(head, 12);
    head = insertK(head, 16, 1);
    //    Node* Tail = removeTail(head);
    print(head);
    return 0;
    // cout<< head->data;
}