#include <iostream>
#include <string.h>
using namespace std;
// bit malupulation
// int getBit(int n,int position){
//     return ((n &(1<<position))!=0);

// }
// int setBit(int n,int pos){
//     return (n||( 1<<pos));
// }
// chek a givien nu ber is a power of 2 or not
// recursion

// int sum(int n){
//     if(n==0)return 0;
//     int prevsum=sum(n-1);
//     return n+prevsum;
// }
// calculate n raised to power p
// int power(int n , int p){
//     if(p==0){
//         return 1;
//     }
//     int prevpower  = power(n,p-1);
//     return n*prevpower;

// }

// factorial

// int factorial(int n){
//     if(n==0){
//         return 1;
//     }
//     // int prevfact=factorial(n-1);
//     return n*factorial(n-1);
// }

// fibonnnaci series
// int fib(int n){
//     if(n==0)return 0;
//     if(n==1) return 1;
//     return fib(n-1)+fib(n-2);
// }

// check if array is sorted or not

// int firstocc(int arr[], int n, int i,int key){

//     if(i==n){
//         return -1;
//     }
//     if(arr[i]==key){
//         return i;
//     }
//     return firstocc(arr,n,i+1,key);

// }

// reverse a string using recusrsion
// void reverse(string s){
//     if(s.length()==0){
//         return;

//     }
//     string ros= s.substr(1);
//     reverse(ros);
//     cout<<s[0];
// }

// replace "pi " with 3.14

// void replace(string s){
//     if(s.length()==0)return;
//     if(s[0] =='p' && s[1]=='i'){
//         cout<<"3.14";
//         replace(s.substr(2));
//     }
//     else
//     {
//         cout<<s[0];
//         replace(s.substr(1));
//     }

// }

//  Tower of hanoi
// void tower(int n,char src, char dest, char helper ){

// if(n==0)return;

//     tower(n-1,src,helper,dest);
//     cout<<"Move from "<<src<<"to "<<dest<<endl;
//     tower(n-1,helper,dest,src);

// }

// Remove all duplicate from string

// string remove(string s){
//     if(s.length()==0){
//         return "";
//     }
//     int ch=s[0];
//     string ans= remove(s.substr(1));
//     if(ch==ans[0]){
//         return ans;
//     }
//     return (ch+ans);
// };

// string movex(string s)
// {
//     if(s.length()==0){
//         return "";
//     }
//     char ch = s[0];
//    string ans= movex(s.substr(1));
//    if(ch=='x'){
//        return ans+ch;

//    }
//    return ch+ans;

// }

// void substring(string s, string ans)
// {

//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch = s[0];
//     string ros = s.substr(1);
//     substring(ros, ans);
//     substring(ros, ans + ch);
// }

// genrate substring along With ASCII code
// void subseq(string s, string ans)
// {
//     if (s.length() == 0)
//     {
//         cout << ans << endl;
//         return;
//     }
//     char ch=s[0];
//     string ros=s.substr(1);
//     int code= ch;
//     subseq(ros,ans);
//     subseq(ros,ans+ch);
//     subseq(ros,ans+ to_string(code));

// }

//  print all possible word from phone digit
// string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
// void keypad(string s , string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }

//     char ch= s[0];
//     string code = keypadArr[ch-'0'];
//     string ros = s.substr(1);

//     for(int i=0;i<code.length();i++){
//         keypad(ros,ans+code[i]);

//     }

// }

// print all possible permuatation of string

// void permutation(string s ,string ans){
//     if(s.length()==0){
//         cout<<ans<<endl;
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char ch = s[i];
//         string ros= s.substr(0,i)+s.substr(i+1);
//         permutation(ros,ans+ch);

//     }

// }

// count the number of path possible
// int countpath(int s, int e)
// {
//     if (s == e)
//         return 1;
//     if (s > e)
//         return 0;
//     int count =0;
//     for (int i = 1; i <= 6; i++)
//     {
//       count+=  countpath(s + i, e);
//     }
//     return count;
// }

// int countpathmaze(int n, int i, int j)
// {
//     if (i == n - 1 && j == n - 1)
//     {
//         return 1;
//     }
//     if (i >= n || j >= n)
//     {
//         return 0;
//     }

//     return countpathmaze(n,i+1,j)+countpathmaze(n,i,j+1);
// }

// tiling problem
// int tiling(int n)
// {
//     if (n == 0)
//         return 0;
//     if (n == 1)
//         return 1;
//     return tiling(n - 1) + tiling(n - 2);
// }

// friends pair problems



int main()
{

    return 0;
}
