#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int d=1;
    int s=0;
    while(n>0){
        int r=n%10;
        d=d*r;
        s=s+r;
        n=n/10;
    }
    cout<<(d-s);
}