#include <bits/stdc++.h>
using namespace std;

// Merge function to merge two halves
void Merge(int* L, int* R, int* A, int mid, int high)
{
    int i = 0, j = 0, k = 0;
    while (i < mid && j < high)
    {
        if (L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < mid)
    {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < high)
    {
        A[k] = R[j];
        j++;
        k++;
    }
}

// Mergesort function to divide and sort
void Mergesort(int* A, int n)
{
    if (n < 2) return;  // Base case

    int mid = n / 2;
    int* L = new int[mid];
    int* R = new int[n - mid];

    for (int i = 0; i < mid; i++)
    {
        L[i] = A[i];
    }
    for (int i = mid; i < n; i++)
    {
        R[i - mid] = A[i];
    }

    Mergesort(L, mid);
    Mergesort(R, n - mid);
    Merge(L, R, A, mid, n - mid);


}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int* A = new int[n];

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    Mergesort(A, n);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;


    return 0;
}
