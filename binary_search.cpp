#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,2,3,5,6,7};
    int element;
    cin>>element;
    int start=0;
    int end=6;
    int mid=(start+end)/2;
    while(start<=end){
        
        if(arr[mid]==element){
            cout<<"Element found at index "<<mid<<endl;
            break;
        }
        else if(element>arr[mid]){
            start=mid+1;
        }
        else if(element<=arr[mid]){
            end=mid-1;

        }
        mid=(start+end)/2;
    }
    return -1;
}