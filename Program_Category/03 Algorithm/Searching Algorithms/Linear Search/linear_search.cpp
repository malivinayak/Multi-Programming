#include<iostream.h>
using namespace std;

int main()
{
    int i,s,a[10000],pos=0,n;

    cout<<"ENTER THE SIZE"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<"ENTER NUMBER TO BE SEARCHED"<<endl;
    cin>>s;

    a[n]=s;

    for(i=0;i<n+1;i++)
    {
        if(s==a[i])
           {
               if (i==n)
            {
                pos=1;
                break;
            }
            break;
           }

    }

    if(pos==1)
        cout<<"SEARCH UNSUCCESSFUL";
    else
        cout<<"SEARCH SUCCESSFUL";


    return 0;

}
