#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],max,min;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=max=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Max ="<<max<<"\nMin ="<<min<<endl;
    return 0;
}
