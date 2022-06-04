#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// function to chk valid pair

// 1st method , time complixty:  O( n^2)

// bool chkpair(int A[],int size , int x){
//     for(int i=0;i<size-1;i++){
//         for(int j=i+1;j<size-1;j++){
//             if(A[i]+A[j]==x){
//                 cout<<"pair whose  sum = 10 are :"<<A[i]<<","<<A[j]<<endl;
//                 return 1;
//             }
//         }
//     }
// }

// 2nd method   time complixty:  O( n)

// bool twopointer(int A[],int size, int x)
// {
//   sort(A, A+size);
//   int l=0;
//   int h=size-1;
//   while(l<h)
//   {
//     if(A[l]+A[h]==x) return 1;
//     else if (A[l]+A[h]>x)
//       h--;
//     else
//     l++;
//   }
//   return 0;

// }

int main()
{
  vector<int> v={2,4,3,1,7,11};
  // // cout<<v.size()<<endl;
  // // v.push_back(1);
  // // v.push_back(2);
  // // v.push_back(3);
  // if(v.empty()) cout<<"empty";
  // int siz = v.size();

  // for (int i = 0; i < siz; i++)
  // {
  //     // cout<<i;
  //     v.push_back(v[i]);
  // }

  // // cout<<v.size()<<endl;

  // Q1.    // given an array find any two element whose sum is equal to 10. array [2,4,3,1,7,11,3]

  // 1. brute force attack

  // int A[] = {1, 6, 3, 9, 12, 7};
  // int x = 13;
  // // chkpair(A,size,x);
  // int size = sizeof(A) / sizeof(A[0]);
  // // twopointer(A,size,x);
//  sort(v.begin(),v.end());
//  int s=0;
//  int end = v.size()-1;
//  while(s<end)
//  {

//  }

 


  return 0;
}