#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    int count1=0,count2=0;
    cin>>a>>b;
    while(a!=0){
        count1+=a&1;
        a=a>>1;
    }
    while(b!=0){
        count2+=b&1;
        b=b>>1;
    }
    cout<<count1+count2;
}