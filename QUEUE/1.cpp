#include <iostream>
using namespace std;
// #define n 20
// array Impelementation

// class queue
// {
//     int *arr;
//     int front;
//     int back;

// public:
//     queue()
//     {
//         arr = new int[n];
//         front = -1;
//         back = -1;
//     }
//     // push
//     void push(int x)
//     {
//         if (back == n - 1)
//         {
//             cout << "overflow ";
//         }
//         back++;
//         arr[back] = x;
//         if (front == -1)
//         {
//             front++;
//         }
//     }

//     // pop
//     void pop(int x)
//     {
//         if (front == -1 || front > back)
//         {
//             cout << "no element in queue \n";
//             return;
//         }
//         front++;
//     }

//     // void peek
//     int peek(int x)
//     {
//         if (front == -1 || front > back)
//         {
//             cout << " no element is present \n";
//             return -1;
//         }
//         return arr[front];
//     }
//     // empty
//     bool empty(int x){
//         if(front ==-1 || front >back){
//             cout<<"no elemet is present \n";
//             return true;
//         }
//     }

// };

// linked list implementation of Queue
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

// queue

// class Queue
// {
//     node *front;
//     node *back;

// public:
//     Queue()
//     {
//         front = NULL;
//         back = NULL;
//     }
//     void push(int x)
//     {
//         node *n = new node(x);
//         if (front == NULL)
//         {
//             back = n;
//             front = n;
//             return;
//         }
//         back->next = n;
//         back = n;
//     }

//     void pop()
//     {
//         if (front == NULL)
//         {
//             cout << "queue is under flow";
//             return;
//         }
//         node *todelete = front;
//         front = front->next;
//         delete (todelete);
//     }

//     int peek()
//     {
//         if (front == NULL)
//         {
//             cout << "No elemet in queue";
//             return -1;
//         }
//         return front->data;
//     }
//     bool empty(){
//         if(front==NULL){
//             return true;
//         }
//         return false;
//     }
// };


int main()
{
    

    return 0;
}