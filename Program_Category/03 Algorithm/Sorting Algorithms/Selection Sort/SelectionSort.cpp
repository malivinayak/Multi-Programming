#include <iostream>
#include <vector> 
using namespace std;

// Selection Sort Implementation
// Optimized Approach
void Selection_Sort(vector<int> &vec,int size)
{
    for(int i=0;i<size-1;i++)
    {
        int min_index=i;
        for(int j=i+1;j<size;j++)
        {
            if(vec[j]<vec[min_index])
            {
                min_index=j;
            }
        }
        if(min_index==i) continue; // if minimun index is not changed then dont need to swap 
        int temp=vec[min_index];
        vec[min_index]=vec[i];
        vec[i]=temp;
    }
}
// printing vector
void print(vector<int> vec)
{
    for(int n : vec)
    {
        cout<<n<<" ";
    }
}

int main()
{
    vector<int> vec;
    int n;
    cout<<"\nEnter Size of an Array/Vector : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"\nEnter Element "<<i+1<<" : ";
        int element;
        cin>>element;
        vec.push_back(element);
    }
    cout<<"\nBefore Sorting\n";
    print(vec);
    Selection_Sort(vec,n);
    cout<<"\nAfter Sorting\n";
    print(vec);
    vec.clear();
    return 0;
}