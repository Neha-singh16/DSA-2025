// #include <bits/stdc++.h>
// using namespace std;

// struct Node
// {
// public:
//     int data;
//     Node *next;

// public:
//     Node(int data1)
//     {
//         data = data1;
//         next = nullptr;
//     }
// };

// Node *ConvertArr2LL(vector<int> arr)
// {
//     Node *head = new Node(arr[0]);
//     Node *mover = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         Node *temp = new Node(arr[i]);
//         mover->next = temp;
//         mover = temp;
//     }
//     return head;
// }

// int CheckVal(Node *head, int value)
// {
//     Node *temp = head;
//     while (temp != nullptr)
//     {
//         if (temp->data == value)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// int print(Node *head)
// {
//     while (head != nullptr)
//     {
//         cout << head->data << " ";
//         head = head->next;
//     }
//     cout << endl;
// }

// Node *removeHead(Node *head)
// {
//     if (head == NULL)
//         return head;
//     Node *temp = head;
//     head = head->next;
//     delete temp;
//     return head;
// }

// Node *removeTail(Node *head)
// {
//     if (head == NULL || head->next == NULL)
//         return NULL;

//     Node *temp = head;
//     while (temp->next->next != NULL)
//     {
//         temp = temp->next;
//     }

//     delete temp->next;
//     temp->next = NULL;
//     return head;
// }

// Node *removeK(Node *head, int k)
// {
//     if (head == NULL)
//         return head;
//     if (k == 1)
//     {
//         Node *temp = head;
//         head = head->next;
//         delete temp;
//         return head;
//     }

//     Node *temp = head;
//     int cnt = 0;
//     Node *prev = NULL;
//     while (temp != NULL)
//     {
//         cnt++;
//         if (cnt == k)
//         {
//             prev->next = prev->next->next;
//             free(temp);
//             break;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }

// Node *insertTail(Node *head, int val)
// {
//     if (head == NULL)
//         return head;
//     Node *temp = head;

//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Node *newNode = new Node(val);
//     temp->next = newNode;
//     return head;
// }

// Node *insertK(Node *head, int val, int k)
// {
//     if (head == NULL)
//     {
//         if (k == 1) return new Node(val);
//         else return NULL;
//     }

//     if( k == 1){
//         Node* temp = new Node(val);
//         temp->next = head;
//         return temp;
//     }


//     Node* temp = head;
//     int cnt = 1;
//     while(temp != NULL){
//         if(cnt == k-1){
//             Node* newNode = new Node(val);
//             newNode->next = temp->next;
//             temp->next = newNode;
//             return head;
//         }
//         temp = temp->next;
//         cnt++;

//     }
//     return head;
// }

// int main()
// {
//     vector<int> arr = {12, 9, 6, 7};
//     Node *head = ConvertArr2LL(arr);
//     // cout << CheckVal(head, 12);
//     head = insertK(head, 16, 1);
//     //    Node* Tail = removeTail(head);
//     print(head);
//     return 0;
//     // cout<< head->data;
// }





#include <bits/stdc++.h>
using namespace std;
 struct Node
 {
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

int lengthofLL(Node* head){
    int cnt = 0;
    Node *temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int SearchVal(Node *head, int val){
    Node *temp = head;
    while(temp){
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    }
    return false;
}


Node *removeHead(Node *head){
    Node *temp  = head;
    if(head == NULL) return head;

    head = head->next;
    delete temp;
    return head;

}


Node *removeTail(Node *head){
    if(head == NULL || head->next == NULL) return NULL;
    Node *temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;

    }

    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node *removeK(Node *head, int k){
    int cnt = 0; Node *prev = NULL;
    Node *temp = head;
    if(head == NULL) return head;

    if(k == 1){
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;

    }
    return head;

    
}






Node *insertK(Node *head, int val, int k)
{
 if(head == NULL){
    if(k==1){
        Node *temp = new Node(val);
        return temp;
    }else{
        return NULL;
    }

 }


 if(k == 1){
    Node *temp = new Node(val);
    temp->next = head;
    return temp;
 }

 int cnt = 1;
 Node *temp = head;
 while(temp != NULL){
    if(cnt == k-1){
        Node *newNode = new Node(val);
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
    }
    temp = temp->next;
    cnt++;
 }
 return head;
}





Node *insertKEle(Node *head, int val, int element)
{
 if(head == NULL){
    return new Node(element);
 }


//  if(k == 1){
//     Node *temp = new Node(val);
//     temp->next = head;
//     return temp;
//  }


Node *temp = head;

while(temp->next != NULL){
    if(temp->next->data == val){
        Node *newNode = new Node(element);
        newNode->next = temp->next;
        temp->next = newNode;
        return head;
    }
    temp = temp->next;

}
return head;
}


Node* reverseList(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    
    Node* revHead = reverseList(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return revHead;
}


int main(){
    vector<int> arr = {12 , 3 , 4 , 6 , 16};
    Node *head = ConvertArr2DLL(arr);
    // head = removeHead(head);
    // head = insertKEle(head , 4 , 29);
    // head = removeTail(head);
    // head = removeK(head , 3);
    // cout << head -> data << endl;
    // int length = lengthofLL(head);
    head = reverseList(head);
    // int length = SearchVal(head , 55);
    //  cout << length << endl;
    Node* temp = head;
     while(temp){
        cout << temp -> data <<  " ";
        temp = temp->next;
     }
    
    return 0;
}