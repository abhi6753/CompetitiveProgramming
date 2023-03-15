// find peak index of an array
#include <iostream>
using namespace std;
int main()
{
    int max;
    int arr[max];
    cout << "Enter number of elements : ";
    cin >> max;
    cout << "Enter " << max << " elements :" << endl;
    for (int i = 0; i < max; i++)
    {
        cin >> arr[i];
    }
    int start = 0, end = max - 1, mid = 0;
    mid = (start+end)/2;
    while(start<end)
    {
        if(mid>0&&mid<end)
        {
            if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
            {
               break;
            }
            else if(arr[mid-1]>arr[mid])
            {
                end = mid;
            }
            else
            {
                start = mid+1;
            }
        }
        else if(mid==0)
        {
            if(arr[mid]>arr[mid+1])
            {
                break;
            }
            else
            {
                mid++;
                break;
            }
        }
        else if(mid == max-1)
        {
           if(arr[mid]>arr[mid-1])
           {
            break;
           }
           else
           {
            --mid;
            break;
           }
        }
    }
    cout<<"Peak value is: "<<arr[mid]<<" and index is : "<<mid;
    return 0;
}