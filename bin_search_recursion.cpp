#include<iostream>
using namespace std;
bool binSearch(int arr[],int s, int e,int n){
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    if(arr[mid]==n){
        cout<<"Element found at index "<<mid<<endl;
        return true;
    }
    else if(arr[mid]<n){
        binSearch(arr,mid+1,e,n);
    }else{
        binSearch(arr,s,mid-1,n);
    }
} 
int main(){
    int arr[5]={1,2,3,4,5};
    int n;
    cin>>n;
    int s=0;
    int e=4;
    int mid;
    binSearch(arr,s,e,n);
}