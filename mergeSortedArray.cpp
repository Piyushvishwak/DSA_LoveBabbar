#include<iostream>
using namespace std;

void mergeSorted(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i=0;
    int j=0;
    int k=0;

    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            k++;
            i++;
        }else{
            arr3[k]=arr2[j];
            k++;
            j++;
        }

    }
    while(i<n){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<m){
        arr3[k]=arr2[j];
        j++;
        k++;
    }
    for(int i=0;i<n+m;i++){
        cout<<arr3[i]<<" ";
    }
        
}

int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={2,4,6,8,10};
    int arr3[10];
    int n=5;
    int m=5;
    mergeSorted(arr1,n,arr2,m,arr3);
}