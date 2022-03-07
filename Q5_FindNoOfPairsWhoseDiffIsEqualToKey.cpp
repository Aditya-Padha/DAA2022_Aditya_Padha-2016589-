//given an array , prog to count the number of pairs of integer such that thir differences is equal to the
//given key

#include <iostream>
using namespace std;
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
    cout<<"Enter the key:"<<endl;
    cin>>key;
    int l=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i] == a[j])
            {
                continue;
            }
            else
            {
                if(a[i] - a[j] == key)
                {
                    l++;
                }
            }
        }
    }
    cout<<l<<endl;
    return 0;
}
