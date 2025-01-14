#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

// Function to perform binary search
int binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoids overflow

        if (arr[mid] == target) {
            return mid; // Target found, return index
        } else if (arr[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }

    return -1; // Target not found
}

int main() {
    // Input array
    vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    
    // Sort the array (Binary search requires a sorted array)
    sort(arr.begin(), arr.end());

    // Target to search for
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    // Perform binary search
    int result = binarySearch(arr, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
