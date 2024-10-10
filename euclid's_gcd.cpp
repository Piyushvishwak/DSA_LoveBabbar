#include<iostream>
using namespace std;
void gcd(int a,int b){
    if(a==0)
        cout<< b;
    if(b==0)
        cout<<a;
    while(a!=b){
        if(a>b )
            a=a-b;
        else
            b=b-a;
    }
    cout<<a;
}
int main(){
    int a,b;
    cin>>a>>b;
    gcd(a,b);
    return 0;
}
