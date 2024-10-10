#include<iostream>
using namespace std;

int exp(int a, int b){
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    int ans=exp(a,b/2);
    if(b%2==0)
        return ans*ans;
    else{
        return a*ans*ans;
    }
}


int main() {
    int a;
    int b;
    cin>>a>>b;
    cout<<exp(a,b);
}