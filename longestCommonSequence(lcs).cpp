#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100],b[100];
    cout<<"Enter 1st and 2nd string "<<endl;
    cin>>a>>b;
    int m=strlen(a);
    int n=strlen(b);
    //cout<<m<<"  "  << n;
    int c[m+1][n+1];
    int i,j;
    for ( i=0; i<=m; i++)
    {
        c[i][0]=0;
    }
    for ( i=0; i<=n; i++)
    {
        c[0][i]=0;
    }
/*for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << c[i][j] << "   ";
        }
        cout << endl;
    }*/
    for (i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(a[i-1]==b[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
            }
            else
            {
                if(c[i][j-1]>=c[i-1][j])
                {
                    c[i][j]=c[i][j-1];
                }
                else
                {
                    c[i][j]=c[i-1][j];
                }
            }
        }
    }
    cout << "Matrix:" <<endl;

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << c[i][j] << "   ";
        }
        cout << endl;
    }
    char s[100];
    int k=0;
    i=m;
    j=n;
    while(c[i][j]!=0)
    {
        if(a[i-1]==b[j-1])
        {
            s[k]=a[i-1];
            i--;
            j--;
            k++;
        }
        else if (c[i][j-1]>=c[i-1][j])
        {
            j--;
        }
        else
        {
            i--;
        }
    }
    cout<<"string :"<<strrev(s);
    return 0;
}
