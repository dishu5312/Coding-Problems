#include<bits/stdc++.h>
using namespace std;
int  I_binary(int a[],int l,int h,int key)
{
    if(l>h)
    return -1;
    
    int mid;
    while(l<=h)
    {
        mid=l+(h-l)/2;  //using this formula if h>>l

        if(a[mid]==key)
        {
            return mid;
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else 
        {
            l=mid+1;
        }
    }
    return -1;
}

int R_binary(int a[],int l,int h,int key)
{
    if(l<=h)
    {
        int mid=l+(h-l)/2; 
        if(a[mid] == key)
        return mid;

        // If the element is present at the middle 
        // itself 
        if (a[mid] == key) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (a[mid] > key) 
            return R_binary(a, l, mid - 1, key); 
  
        // Else the element can only be present 
        // in right subarray 
        return R_binary(a, mid + 1, h, key); 
    }
   // We reach here when element is not 
    // present in array 
    return -1; 

}
int  main()
{
    int n;  //number of elements in the array
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)  //take input of aray elements
    cin>>a[i];

    sort(a,a+n);   //using stl sort to sort the array

    int key;      //key to be searched
    cin>>key;

    cout<<"Sorted Array will be"<<endl;

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    cout<<endl;

    int x=I_binary(a,0,n-1,key);
    
    cout<<"finding iteratively"<<endl;
    if(x!=-1)
    cout<<"found in the sorted array at  "<<x<<endl;

    else
    {
        cout<<"not found"<<endl;
    }   

    int y=R_binary(a,0,n-1,key);
    
    cout<<"finding recursively"<<endl;
    if(y!=-1)
    cout<<"found in the sorted array at  "<<y<<endl;

    else
    {
        cout<<"not found"<<endl;
    }   

}