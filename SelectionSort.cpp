#include <iostream>
using namespace std;
int main()
{
    int n,comp=0,small;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        small = i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[small])
            {
                small = j;
            }
            comp++;
        }
        int temp;
        temp = a[small];
        a[small] = a[i];
        a[i] = temp;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Total no. of comparisons are: "<<comp<<endl;
    return 0;
}
