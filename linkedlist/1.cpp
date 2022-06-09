#include <iostream>
using namespace std;
// defining node
// class node
// {
// public:
//     int data;
//     node *next;
//     node(int val)
//     {
//         data = val;
//         next = NULL;
//     }
// };

// void insertAtEnd(node *&head, int val)
// {

//     node *n = new node(val);
//     if (head == NULL)
//     {
//         head = n;
//         return;
//     }
//     node *temp = head;
//     while (temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     temp->next = n;
// }

// insertion at the beginig
// void insertAtBegining(node *&head, int val)
// {

//     node *n = new node(val);
//     n->next = head;
//     head = n;
// }

// bool search(node *head, int key)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data = key)
//         {
//             return true;
//         }
//         temp = temp->next;
//     }
//     return false;
// }

// void display(node *head)
// {
//     node *temp = head;
//     while (temp != NULL)
//     {
//         cout << temp->data << "->";
//         temp = temp->next;
//     }
//     cout << "NULL" << endl;
// }
// void deletion(node *&head, int val)
// {
//     if (head == NULL)
//         return;
//     node *temp = head;
//     while (temp->next->data != val)
//     {
//         temp = temp->next;
//     }
//     if(head->next==NULL){
//         deleteatFirst(head);
//     }
//     node *todelete = temp->next;
//     temp->next = temp->next->next;
//     delete todelete;
// }
// delete at head
// void deleteatFirst(node *&head)
// {
//     node *todelete = head;
//     head = head->next;
//     delete todelete;
// }

// reverse LinkedList

// node* reverse(node* &head){
//     node* prev= NULL;
//     node* current = head;
//     node* nextptr;
//     while(current!=NULL){
//         nextptr= current->next;
//         current->next=prev;
//         prev=current;
//         current=nextptr;
//     }
//     return prev;
// }

// or using recursin

// node* reverserecursive(node* &head){
//     if(head==NULL || head->next==NULL) return head;

//     node* newhead = reverserecursive(head->next);
//     head->next->next=head;
//     head->next=NULL;
//     return newhead;

// }
// node *reverseK(node *&head, int k)
// {

//     node *prev = NULL;
//     node *curr = head;
//     node *nextptr;
//     int count = 0;
//     while (curr != NULL && count < k)
//     {
//         nextptr = curr->next;
//         curr->next = prev;

//         prev = curr;
//         curr = nextptr;
//         count++;
//     }
//     if (nextptr != NULL)
//     {

//         head->next = reverseK(nextptr, k);
//     }
//     return prev;
// }

// Detection Of cycle and removal
// bool detectCycle(node *head)
// {
//     node *fast = head;
//     node *slow = head;
//     while (fast != NULL && fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//         if (fast = slow)
//         {
//             return 1;
//         }
//         else
//             return 0;
//     }
// }

// make cycle

// void makecycle(node *&head, int pos)
// {
//     node *temp = head;
//     node *startNode;
//     int count = 1;
//     while (temp->next != NULL)
//     {
//         if (count == pos)
//         {
//             startNode = temp;
//         }
//         temp = temp->next;
//         count++;
//     }
//     temp->next = startNode;
// }
// // remove cycle

// void removecycle(node *&head)
// {
//     node *fast = head;
//     node *slow = head;
//     do
//     {
//         /* code */
//         slow = slow->next;
//         fast = fast->next->next;
//     } while (slow != fast);
//     fast = head;
//     while (slow->next != fast->next)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     slow->next = NULL;
// }

// Doubly LinkedList

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

// insert at  tail
void insertatHead(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {

        head->prev = n;
        head = n;
    }
}
void insertattail(node *&head, int val)
{
    if (head == NULL)
    {
        insertatHead(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
// Insert at head

// display of doubly linkedList

// deletion
void deleteAtHead(node *head)
{
    node *todelete = head;
    head = head->next;
    head->prev = NULL;
    delete todelete;
}
void deletion(node *&head, int pos)
{

    if (pos == 1)
    {
        deleteAtHead(head);
    }

    node *temp = head;
    int count = 1;
    while (temp != NULL && count != pos)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {

        temp->next->prev = temp->prev;
    }
    delete temp;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// apppend last k nodes  to the start of link list
int length(node *head)
{
    int l = 0;
    node *temp = head;
    while (temp != NULL)
    {
        l++;
        temp = temp->next;
    }
    return l;
}

node *Kappend(node *&head, int k)
{
    node *newHead;
    node *newtail;
    node *tail = head;
    int l = length(head);
    k = k % l;
    int count = 1;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newtail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    newtail->next = NULL;
    tail->next = head;
    return newHead;
}
int main()

{

    node *head = NULL;
    insertatHead(head, 5);
    insertatHead(head, 4);
    insertatHead(head, 3);
    insertatHead(head, 2);
    insertatHead(head, 1);
    display(head);
    insertatHead(head, 6);
    display(head);

    return 0;
}