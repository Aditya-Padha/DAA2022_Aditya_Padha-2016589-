//Q Find an element and its occurances in an array.

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int l=0;
    for(int i=0;i<n;i++)
    {
        if(key == arr[i])
        {
            l++;
        }
    }
    if(l!=0)
    {
        cout<<"the element "<<key<<" exists and it is present "<<l<<" times"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    return 0;
}
