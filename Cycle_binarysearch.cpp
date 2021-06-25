#include<bits/stdc++.h>
using namespace std;
int cycle_Binary_search(int low,int high,int a[],int target)
{
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(target==a[mid])
        {
            return mid+1;
        }
        if(a[mid]<a[0])
        {
            if(a[mid]>target || target>=a[0])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        else
        {
            if(a[mid]<target || target<a[0])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        }
        return -1;
}
int main()
{
	int n,target;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter target u want to search for : ";
	cin>>target;
	cout<<cycle_Binary_search(0,n-1,a,target);
}
