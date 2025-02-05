#include <bits/stdc++.h>
using namespace std;

void countSort(int n)
{
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int maxx = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxx)
        {
            maxx = a[i];
        }
    }

    int countt[maxx ] ;
for (int i=0; i<=maxx;i++)
{
    countt[i]=0;
}

    for (int i = 0; i < n; i++)
    {
        countt[a[i]]++;
    }


    for (int i = 1; i <= maxx; i++)
    {
        countt[i] += countt[i - 1];
    }


    int output[n];
    for (int i = n - 1; i >= 0; i--)
    {
        int x = --countt[a[i]];
        output[x] = a[i];
    }


    cout << "COUNTING SORT:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << output[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    countSort(n);
    return 0;
}
