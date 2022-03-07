#include<iostream>
using namespace std;
int main()
{
    int n,key,index=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element you want to find:"<<endl;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(a[i] == key)
        {
            cout<<"The element exists in the array at index "<<index<<endl;
            break;
        }
        index++;
    }
    return 0;
}
