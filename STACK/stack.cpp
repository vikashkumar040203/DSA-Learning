#include <iostream>
#include <stack>
#include <math.h>
using namespace std;
// implement using array
// #define n 100
// class stack
// {
//     int *arr;
//     int top;

// public:
//     stack()

//     {
//         arr = new int[n];
//         top = -1;
//     }
//     void push(int x)
//     {
//         if (top == n - 1)
//         {
//             cout << "stack Over flow \n";
//         }
//         top++;
//         arr[top] = x;
//     }

//     void pop()
//     {
//         if (top == -1)
//         {
//             cout << "No Element to POP" << endl;
//             return;
//         }
//         top--;
//     }

//     int Top(){
//         if(top==-1){
//             cout<<"No elemet is present"<<endl;
//             return -1;
//         }
//         return arr[top];
//     }
//     bool empty(){
//         return top==-1;
//     }
// };

// reverse a sentence using Stack

// void reversesentence(string s)
// {
//     stack<string> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         string word = "";
//         while (s[i] != ' ' && i < s.length())
//         {
//             word += s[i];
//             i++;
//         }
//         st.push(word);
//     }
//     while (!st.empty())
//     {
//         cout << st.top() << "";
//         st.pop();
//     }
//     cout << endl;
// }

// reverse a stack
// void insertAtBottom(stack<int> &st, int ele)
// {
//     if (st.empty())
//     {
//         st.push(ele);
//         return;
//     }

//     int topele = st.top();
//     st.pop();
//     insertAtBottom(st, ele);
//     st.push(topele);
// }

// void reverse(stack<int> &st)
// {
//     if (st.empty())
//         return;
//     int ele = st.top();
//     st.pop();
//     reverse(st);
//     insertAtBottom(st, ele);
// }
// **************************************************

// infix ,post prefix
// prefix evaluation

// int prefixevaluation(string s)
// {
//     stack<int> st;
//     for (int i = s.length() - 1; i >= 0; i--)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i] - '0');
//         }
//         else
//         {
//             int op1 = st.top();
//             st.pop();
//             int op2 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1 + op2);
//                 break;
//             case '-':
//                 st.push(op1 - op2);
//                 break;
//             case '/':
//                 st.push(op1 / op2);
//                 break;
//             case '^':
//                 st.push(pow(op1, op2));
//                 break;
//             default:
//                 break;
//             }
//         }
//     }
//     return st.top();
// }

// post fix evaluation

// int postfixevaluation(string s)
// {
//     stack<int> st;
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] >= '0' && s[i] <= '9')
//         {
//             st.push(s[i] - '0');
//         }
//         else
//         {
//             int op2 = st.top();
//             st.pop();
//             int op1 = st.top();
//             st.pop();
//             switch (s[i])
//             {
//             case '+':
//                 st.push(op1 + op2);
//                 break;
//             case '-':
//                 st.push(op1 - op2);
//                 break;
//             case '/':
//                 st.push(op1 / op2);
//                 break;
//             case '^':
//                 st.push(pow(op1, op2));
//                 break;
//             default:
//                 break;
//             }
//         }
//     }
// }
// int precedence(char c)
// {
//     if (c == '^')
//     {
//         return 3;
//     }
//     else if (c == '*' || c == '/')
//     {
//         return 2;
//     }
//     else if (c == '+' || c == '-')
//     {
//         return 1;
//     }
//     else
//     {
//         return -1;
//     }
// }

// // Infix to Post fix

// string infixtopostfix(string s)
// {
//     stack<char> st;
//     string res;
//     for (int i = 0; i, s.length(); i++)
//     {
//         if (s[i] >= 'a' && s[i] <= 'z' || (s[i] >= 'A' && s[i] <= 'Z'))
//         {
//             res = res + s[i];
//             st.push(s[i]);
//         }
//         else if (s[i] == '(')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == ')')
//         {
//             while (!st.empty() && st.top() != '(')
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             if (!st.empty())
//             {

//                 st.pop();
//             }
//         }
//         else
//         {
//             while (!st.empty() && precedence(st.top() > precedence(s[i])))
//             {
//                 res += st.top();
//                 st.pop();
//             }
//             st.push(s[i]);
//         }
//     }
//     while (!st.empty())
//     {
//         res += st.top();
//         st.pop();
//     }
//     return res;
// }

// Balacned parenthesis
// bool isvalid(string s)
// {

//     int n = s.length();
//     stack<char> st;
//     bool ans = true;
//     for (int i = 0; i < n; i++)
//     {
//         if (s[i] == '{' || s[i] == '(' || s[i] == '[')
//         {
//             st.push(s[i]);
//         }
//         else if (s[i] == ')')
//         {
//             if (st.top() == '(')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         else if (s[i] == ']')
//         {
//             if (st.top() == '[')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//         else if (s[i] == '}')
//         {
//             if (st.top() == '{')
//             {
//                 st.pop();
//             }
//             else
//             {
//                 ans = false;
//                 break;
//             }
//         }
//     }
//     if(!st.empty()){
//         return false;
//     }
//     else{
//         return ans;
//     }
// }

int main()
{
    string s = "{([])}";
    return 0;
}