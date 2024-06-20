// problem statement  -> https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1
#include<iostream>
#include<algorithm>

using namespace std;

int minheight(int arr[], int k, int n) {
    if (n == 1) return 0;

    // Sort the array
    sort(arr, arr + n);

    int diff = arr[n-1] - arr[0];

    // Initial min and max values
    int min_value, max_value;
    for (int i = 1; i < n; i++) {
        if (arr[i] - k < 0) continue;

        min_value = min(arr[0] + k, arr[i] - k);
        max_value = max(arr[n-1] - k, arr[i-1] + k);

        diff = min(diff, max_value - min_value);
    }
    
    return diff;
}

int main() {
    int arr[] = {1, 5, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << "Minimum difference is " << minheight(arr, k, n) << endl;
    return 0;
}
