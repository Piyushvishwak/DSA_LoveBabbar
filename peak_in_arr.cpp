#include <iostream>
using namespace std;

int findPeakElement(int arr[], int n) {
    int s = 0, e = n - 1;
    
    while (s < e) {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    }
    
    return s;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeakElement(arr, n);
    cout << "Peak element is at index: " << peakIndex << " with value: " << arr[peakIndex] << endl;

    return 0;
}
