#include <iostream>
using namespace std;

void sortZeroesOnes(int arr[], int n) {
    int left = 0;
    int right = n - 1;

    while (left < right) {
        while (arr[left] == 0 && left < right) {
            left++;
        }

        while (arr[right] == 1 && left < right) {
            right--;
        }

        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[] = {0, 1, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    sortZeroesOnes(arr, n);
    printArray(arr, n);

    return 0;
}
