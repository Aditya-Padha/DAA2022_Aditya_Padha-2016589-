/******************************************************************************

jumpsearch

*******************************************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int jumpsearch(int a[],int size,int key)
{
    int start = 0;
    int end = sqrt(size);
    
    while(a[end] <= key && end < size)
    {
        start = end;
        end += sqrt(size);
        if(end > size-1)
        {
            end = size;
        }
    }
    
    for(int i=start;i<end;i++)
    {
        if(a[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    int l = jumpsearch(a,n,key);
    if(l>=0)
    {
        cout << "Item found at location: " << l << endl;
    }
    else
    {
        cout << "Item is not found in the list." << endl;
    }
    return 0;
}
