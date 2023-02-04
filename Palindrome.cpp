#include<iostream>
using namespace std;
bool Palindrome(int);
int main()
{
    int x;
    cout<<"Enter a number to check Palindrome or not:"<<endl;
    cin>>x;
    if(Palindrome(x))
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }
    return 0;
}
bool Palindrome(int num)
{  
   int temp = num;
   int reverse=0;
   int count=0;
   int rem=0;
   while(temp)
   {
      rem=temp%10;
      reverse=reverse*10+rem;
      temp/=10;
   }
   if(num==reverse)
   {
    if(num>=0)
     return true;
    else
     return false;
   }
   else
    return false;
}