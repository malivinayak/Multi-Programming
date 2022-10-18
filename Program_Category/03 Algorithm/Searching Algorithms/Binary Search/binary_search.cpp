#include<iostream.h>
using namespace std;

int binarysearch(int[],int,int);

int main()
{
    int a[10000],n,s;

    cout<<"ENTER THE SIZE"<<endl;
    cin>>n;

    cout<<"ENTER THE DATA IN ASCENDING ORDER"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"ENTER THE ITEM TO BE SEARCHED"<<endl;
    cin>>s;

    binarysearch(a,n,s);

    return 0;

}

int binarysearch(int a[],int n, int s)
{
    int mid,first=0,last=n,i=-1;

    while(first<=last)
    {
        mid=(first+last)/2;

        if (a[mid]>s)
        {
            last=mid-1;
        }

        else if(a[mid]<s)
        {
            first=mid+1;
        }

        else if(a[mid]==s)
        {
            i=mid;
            break;
        }
    }

    if(i==-1)
        cout<<"ITEM NOT FOUND";
    else
        cout<<"ITEM FOUND"<<endl<<"POSITION OF ITEM:"<<i;


    return 0;

}
