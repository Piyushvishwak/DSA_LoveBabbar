#include<iostream>
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

int binarySearch(int arr[], int s,int e, int target) {
    
    while (s <= e) {
        int mid = s + (e - s) / 2;
        
        if (arr[mid] == target) {
            return mid; 
        } else if (arr[mid] < target) {
            s = mid + 1; 
        } else {
            e = mid - 1; 
        }
    }
    
    return -1; 
}
int main(){
    int arr[] = {4, 5, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 2;
    
    int pivot=findPivotElement(arr,n);
    int targetIndex = -1;
    if (target >= arr[pivot] && target <= arr[n - 1]) {
        targetIndex = binarySearch(arr, pivot,n-1, target);
    } else {
        targetIndex = binarySearch(arr ,0 , pivot-1, target);
    }
    
    cout << "Element found at index: " << targetIndex << endl;

    return 0;
}