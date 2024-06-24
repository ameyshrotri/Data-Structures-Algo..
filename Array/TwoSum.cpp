// https://www.naukri.com/code360/problems/reading_6845742?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems - two sum problem

#include <iostream>
using namespace std;

bool twoSum(int arr[], int target, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            int sum = arr[i] + arr[j];
            if (sum == target) {
                cout << "Yes" << endl;
                return true;
            }
        }
    }
    cout << "No" << endl;
    return false;
}

int main() {
    int arr[] = {2, 1, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);  // Correctly calculate the size of the array
    int target = 5;  // Use a target that exists in the array for demonstration
    twoSum(arr, target, size);
    return 0;
}



// optimal code 
// just function 
// string read(int n, vector<int> book, int target) {
//     int left = 0, right = n - 1;
//     sort(book.begin(), book.end());
//     while (left < right) {
//         int sum = book[left] + book[right];
//         if (sum == target) {
//             return "YES";
//         }
//         else if (sum < target) left++;
//         else right--;
//     }
//     return "NO";
// }
