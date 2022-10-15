#include <iostream>
#include <vector> 
using namespace std;

// Bubble Sort Implementation
// Optimized Approach
void Bubble_Sort(vector<int> &vec,int size)
{
    for(int i=1;i<size;i++)
    {
        bool swapped=false; // to minimize internations
        for(int j=0;j<size-i;j++)
        {
            if(vec[j]>vec[j+1])
            {
                int temp=vec[j];
                vec[j]=vec[j+1];
                vec[j+1]=temp;
                swapped=true;
            }
        }
        if(!swapped) break; // if there is no swapping means it is already sorted so just break it
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
    Bubble_Sort(vec,n);
    cout<<"\nAfter Sorting\n";
    print(vec);
    vec.clear();
    return 0;
}