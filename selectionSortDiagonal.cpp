#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        int minId = i;
        for (int j = i + 1; j < 4; j++)
        {
            if (a[j][3 - j] < a[minId][3 - minId])
            {
                minId = j;
            }
        }
        if (minId != i)
        {
            swap(a[i][3 - i], a[minId][3 - minId]);
        }
    }
    cout<<" output"<<endl;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
