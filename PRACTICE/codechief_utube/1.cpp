#include<iostream>
using namespace std;

// program to reverse a string

string reverse(string str)
{
   reverse(str.begin(),str.end());
    return str;
    


}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<reverse(s);

    }


    return 0;
}