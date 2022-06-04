#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int linear(int a[], int target)
{
    int temp= -1;
    for(int i=0;i<6;i++)
    {
      if(a[i]==target)
      {
          cout<<i+1<<endl;
          temp=0;
          break;
      }
    }
    if(temp==-1)
    {
        cout<<"not found";
    }

}
int main()
{
    int a[]={34,21,3,5,67,33};
    int target= 3;
    linear(a,target);
    return 0;
}