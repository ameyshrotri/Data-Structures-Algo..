// Move all the zeros at the  end of array
#include<iostream>
using namespace std;

void moveZeroes(int arr[], int n) {
    int j = -1; // Initialize j to keep track of the position where zero is found
    
    // Find the first occurrence of zero
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    
    // If no zero is found, return from the function
    if (j == -1) {
        return;
    }
    
    // Move non-zero elements to the left of the found zero
    for (int i = j + 1; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    
    // Print the modified array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 0, 4, 0, 0, 0, 2, 0};
    int n = 9;
    
    moveZeroes(arr, n);
    
    return 0;
}
