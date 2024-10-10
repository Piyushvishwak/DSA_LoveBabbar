#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
        return 1;
    int res=n*fact(n-1);
    return res;
}
int power(int n){
    if(n==0)
        return 1;
    int res=2*power(n-1);
    return res;
}
void counting(int n){
    if(n==0) 
        return;
    counting(n-1);
    cout<<n<<endl;
}
int main(){
    int n;
    cin>>n;
    // cout<<fact(n);
    // cout<<power(n);
    counting(n);
    return 0;
}