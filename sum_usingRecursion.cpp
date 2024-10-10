#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int suM=0;
    if(size==0){
        return 0;
    }
    suM=sum(arr+1,size-1)+arr[0];
    return suM;
}
int main(){
    int arr[7]={1,2,3,4,5};
    cout<<sum(arr,7);
}