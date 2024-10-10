#include<iostream>
using namespace std;
int nth_fibbonacci(int n){
    int a=0;
    int b=1;
    int term;
    for(int i=1;i<=n-2;i++){
        term=a+b;
        a=b;
        b=term;
    }

    return term;
}
int main(){
    int n;
    cin>>n;
    int result=nth_fibbonacci(n);
    cout<<result;
}