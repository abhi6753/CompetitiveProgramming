
#include<bits/stdc++.h>
using namespace std;
float median(int nums1[],int nums2[],int m,int n)
{
    if(m>n)//Ensuring that binary search happens on minimum size array
    {
        return median(nums2,nums1,n,m);
    }
    int low=0,high = m,medianPos = ((m+n+1)/2);
    while (low<=high)
    {
       int mid1 = (low+high)/2;
       int mid2 = medianPos-mid1;
       int l1 = (mid1==0)?INT_MIN:nums1[mid1-1];
       int l2 = (mid2==0)?INT_MIN:nums2[mid2-1];
       int r1 = (mid1==m)?INT_MAX:nums1[mid1];
       int r2 = (mid2==n)?INT_MAX:nums2[mid2];

       if(l1<=r2 && l2<=r1)
       {
          if((m+n)%2!=0)
          {
            return max(l1,l2);
          }
          else
          {
            return (max(l1,l2)+min(r1,r2))/2.0;
          }
       }
       else if(l1>r2)
         high = mid1-1;
       else
         low = mid1+1;
    }
    return 0.0;
}
int main()
{
    int nums1[] = {1,4,7,10,12};
    int nums2[] = {2,3,6,15};
    int m = sizeof(nums1)/sizeof(int);
    int n = sizeof(nums2)/sizeof(int);
    cout<<"The median of two sorted array is "<<median(nums1,nums2,m,n);
    return 0;
}