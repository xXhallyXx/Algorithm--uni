
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int flag=0;
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==key)
        {
            flag=1;
            cout<<"found: "<<i<<" index"<<endl;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not found"<<endl;
    }

    return 0;
}
