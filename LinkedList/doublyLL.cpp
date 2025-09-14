#include <iostream>
#include <vector>
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

Node *deletehead(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

Node *deleteTail(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;
    Node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    Node *temp = tail->prev;
    temp->next = NULL;
    tail->prev = NULL;
    delete tail;
    return head;
}

Node *deleteK(Node *head, int k)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *forward = temp->next;
    Node *backward = temp->prev;
    if (backward == NULL && forward == NULL)
    {
        delete temp;
        return NULL;
    }
    else if (backward == NULL)
    {
        head = deletehead(head);
        return head;
    }
    else if (forward == NULL)
    {
        head = deleteTail(head);
        return head;
    }
    else
    {
        backward->next = forward;
        forward->prev = backward;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return head;
    }
    return head;
}

void deleteNode(Node *temp)
{
    Node *fd = temp->next;
    Node *bd = temp->prev;
    if (fd == NULL)
    {
        bd->next = NULL;
        temp->prev = NULL;
        free(temp);

        return;
    }

    fd->prev = bd;
    bd->next = fd;
    temp->next = NULL;
    temp->prev = NULL;
    free(temp);
}

// ---------------------------------------------------------->
Node *insertHead(Node *head, int val)
{
    Node *newNode = new Node(val, head, nullptr);
    head->prev = newNode;
    return newNode;
}

Node *insertTail(Node *head, int val)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val, nullptr, temp);
    temp->next = newNode;
    return head;
}

Node *insertK(Node *head, int k, int val)
{

    Node *temp = head;
    int cnt = 0;
    while (temp->next != NULL)
    {
        cnt++;
        if (cnt == k - 1)
            break;
        temp = temp->next;
    }

    Node *front = temp->next;
    Node *back = temp;
    if (front == NULL && back == NULL)
    {
        Node *newNode = new Node(val);
        return newNode;
    }
    else if (back == NULL)
    {
        Node *newNode = new Node(val, head, nullptr);
        head->prev = newNode;
        return newNode;
    }
    else if (front == NULL)
    {
        Node *newNode = new Node(val, nullptr, back);
        back->next = newNode;
        return head;
    }
    else
    {
        Node *newNode = new Node(val, front, back);
        back->next = newNode;
        front->prev = newNode;
        return head;
    }

    return head;
}


Node *insertKforMiddleValues(Node *head, int k, int val)
{
Node* temp = head;
int cnt = 0;
while(temp->next != NULL){
    cnt++;
    if(cnt == k) break;
    temp = temp->next;
}
Node* back = temp->prev;
Node* newNode = new Node(val , temp , back);
temp->prev = newNode;
back->next = newNode;
return head;
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
    vector<int> arr = {12, 4, 6, 9};
    Node *head = CovertArr2DLL(arr);
    // deleteNode(head->next);
    head = insertK(head, 1, 123);
    print(head);
    return 0;
}