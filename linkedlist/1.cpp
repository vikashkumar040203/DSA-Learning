#include <iostream>
using namespace std;
// defining node
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

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
void insertAtBegining(node *&head, int val)
{

    node *n = new node(val);
    n->next = head;
    head = n;
}

bool search(node *head, int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data = key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void deletion(node *&head, int val)
{
    if (head == NULL)
        return;
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    if(head->next==NULL){
        deleteatFirst(head);
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}
// delete at head
void deleteatFirst(node *&head)
{
    node *todelete = head;
    head = head->next;
    delete todelete;
}


// reverse LinkedList



int main()

{
    node *head = NULL;
    insertAtBegining(head, 1);
    insertAtBegining(head, 6);
    insertAtBegining(head, 12);
    insertAtBegining(head, 62);

    return 0;
}