#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    // base case
    if(n==0){
        return;
    }
    int r=n%10; //r is the remainder that can be used as index of the array we created
    n=n/10;
    cout<<arr[r]<<" ";
    sayDigit(n,arr);
}

int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigit(n, arr);

}