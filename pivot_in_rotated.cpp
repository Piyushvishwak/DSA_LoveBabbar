#include <iostream>
using namespace std;

int findPivotElement(int arr[], int n) {
    int s = 0, e = n - 1;
    
    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    
    return s;
}

int main() {
    int arr[] = {4, 5, 1, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivotElement(arr, n);
    cout << "Pivot element is at index: " << pivotIndex << " with value: " << arr[pivotIndex] << endl;

    return 0;
}
