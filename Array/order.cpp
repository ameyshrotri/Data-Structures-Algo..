#include <iostream>
using namespace std;

class Solution
{
public:
    void sort012(int a[], int n)
    {
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (a[mid] == 0) {
                swap(a[low], a[mid]);
                low++;
                mid++;
            } else if (a[mid] == 1) {
                mid++;
            } else {
                swap(a[mid], a[high]);
                high--;
            }
        }
    }
};

int main() {
    Solution sol;
    int n = 5;
    int arr[] = {1, 0, 0, 1, 2};
    sol.sort012(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
