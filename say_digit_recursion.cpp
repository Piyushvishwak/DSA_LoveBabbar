#include<iostream>
using namespace std;
void sayDigits(int n, string arr[]){
    if(n==0){
        return;
    }
    int r=n%10;
    n/=10;
    sayDigits(n,arr);
    cout<<arr[r]<<" ";

}
int main(){
    int n;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n,arr);
}