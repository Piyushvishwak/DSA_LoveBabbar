#include <iostream>

using namespace std;

int firstOccurrence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; // Move towards left to find first occurrence
        } else if (key > arr[mid]) {
            s = mid + 1; 
        } else {
            e = mid - 1; 
        }
    }
    return ans;
}

int lastOccurrence(int arr[], int n, int key) {
    int s = 0, e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key) {
            ans = mid;
            s = mid + 1; // Move towards right to find last occurrence
        } else if (key > arr[mid]) {
            s = mid + 1;
        } else {
            e = mid - 1; 
        }
    }
    return ans;
}

int main() {
    int arr[] = {1, 2, 3, 3, 3 ,3, 5};
    int key = 3;
    cout << "First Occurrence of " << key << " is at index: " << firstOccurrence(arr, 7, key) << endl;
    cout << "Last Occurrence of " << key << " is at index: " << lastOccurrence(arr, 7, key) << endl;

    cout<<"Total no. of occurence: "<<lastOccurrence(arr, 7, key)-firstOccurrence(arr, 7, key)+1<<endl;
    return 0;
}



