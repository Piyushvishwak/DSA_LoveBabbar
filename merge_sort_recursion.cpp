#include<iostream>
using namespace std;

void merge(int *arr, int s, int e) {

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    //copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++) {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++) {
        second[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted arrays     
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mainArrayIndex++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete []first;
    delete []second;

}


void mergeSort(int arr[], int s, int e){
    if(s>=e){
        return;
    }
    int mid=s+(e-s)/2;
    mergeSort(arr, s, mid);
    mergeSort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){
    int arr[6] = {5, 3, 1, 4, 6, 2};
    int s=0;
    int e=sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,s,e);
    for(int i=0;i<e;i++){
        cout<<arr[i]<<" ";
    }
}