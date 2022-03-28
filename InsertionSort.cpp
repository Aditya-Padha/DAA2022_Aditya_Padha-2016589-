#include <iostream>
using namespace std;
int main()
{
    int n,comp=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int current = a[i];
        int j=i-1;
        while(j>=0 && a[j]>=current)
        {
            a[j+1] = a[j];
            j--;
            comp++;
        }
        a[j+1] = current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Total no. of comparisons are: "<<comp<<endl;
    return 0;
}
