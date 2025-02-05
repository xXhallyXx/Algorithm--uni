#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }

    int maxx=arr[1];
    for(int i=2;i<=n;i++)
    {
        if(arr[i]>maxx)
        {
            maxx=arr[i];
        }
    }
    int minn=arr[1];
    for(int i=2;i<=n;i++)
    {
        if(arr[i]<minn)
        {
            minn=arr[i];
        }
    }
    cout<<maxx<<" "<<minn;
    return 0;
}
