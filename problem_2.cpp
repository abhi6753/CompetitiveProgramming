#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter number Elements: ";
    cin>>size;
    int num[size];
    int ans[size];
    int j=0;
    cout<<"Enter "<<size<<" elements:"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
   loop: for(int i=0;i<size;i++)
    {
        if(i==0)
          ans[j]=1;
        if(i==j)
          continue;
        ans[j]=ans[j]*num[i];
    }
    j++;
    if(j<size)
     goto loop;
    for(int i=0;i<size;i++)
     cout<<ans[i]<<" ";

    cin.ignore();
    cin.get();
    return 0;
}