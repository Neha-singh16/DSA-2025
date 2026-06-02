#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node *next;

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node*ConvertArr2DLL(vector<int> arr){
    int n = arr.size();
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for(int i = 1 ; i < n ;i++){
       Node *temp = new Node(arr[i]);
       mover->next = temp;
       mover = temp;
    }
    return head;
}



Node *reverseList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* newHead = reverseList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;

    return newHead;

}
int main(){
        vector<int> arr = {12 , 3 , 4 , 6 , 16};
    Node *head = ConvertArr2DLL(arr);
    head = reverseList(head);

    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}