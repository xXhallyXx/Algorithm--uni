#include <bits/stdc++.h>
using namespace std;



int partition(int *a, int low, int high)
{
    int pivot_item = a[low];
    int left = low + 1;
    int right = high;

    while (left <= right)
    {
        while ( a[left] <= pivot_item) left++;
        while ( a[right] > pivot_item) right--;
        if (left < right)
        {
            // swap(a[left], a[right]);  // Use std::swap here
            int temp = a[left];
            a[left] = a[right];
            a[right] = temp;
        }
    }
    int temp = a[low];
    a[low] = a[right];
    a[right] = temp;  // Place pivot in correct position
    return right;
}




void quicksort(int *a, int low, int high)
{
    if (low < high)
    {
        int pivot = partition(a, low, high);
        quicksort(a, low, pivot - 1);
        quicksort(a, pivot + 1, high);
    }
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

    quicksort(A, 0, n - 1);

    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;


    return 0;
}

