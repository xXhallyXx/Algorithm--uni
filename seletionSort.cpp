#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,key,i;
    cin>>n;
    int a[n];
    for( i=0; i<n; i++)
    {

        cin>>a[i];
    }
    for(int i=0; i<n-1; i++)
    {
        int minIN =i;
        for(int curr=i+1; curr<n; curr++)
        {
            if(a[curr]<a[minIN])
            {
                minIN=curr;
            }
        }
        if(minIN!=i)
        {
            swap(a[i],a[minIN]);
        }


    }


    for(int i=0; i<n; i++)
    {

        cout<<a[i]<<" ";
    }

    return 0;


}
