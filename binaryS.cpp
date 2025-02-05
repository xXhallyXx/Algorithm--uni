#include <bits/stdc++.h>
using namespace std;

void countSort(int n) {
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find the maximum value in the array
    int maxValue = *max_element(a, a + n);

    // Create and initialize the count array
    int countt[maxValue + 1] = {0};

    // Count the occurrences of each element
    for (int i = 0; i < n; i++) {
        countt[a[i]]++;
    }

    // Update the count array with cumulative sums
    for (int i = 1; i <= maxValue; i++) {
        countt[i] += countt[i - 1];
    }

    // Create the output array
    int output[n];

    // Build the output array by iterating backward
    for (int i = n - 1; i >= 0; i--) {
        int x = --countt[a[i]];
        output[x] = a[i];
    }

    // Print the sorted array
    cout << "COUNTING SORT " << endl;
    for (int i = 0; i < n; i++) {
        cout << output[i] << " ";
    }
}

int main() {
    int n;
    cin >> n;
    countSort(n);
    return 0;
}
