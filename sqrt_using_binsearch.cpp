#include<iostream>
using namespace std;

double morePrecision(int n, int p,int ans){
    double factor=1;
    double answer=ans;
    for(int i=0;i<p;i++){
        factor=factor/10;;
        for(double j=answer;j*j<=n;j=j+factor){
            answer=j;
        }
    }
    return answer;   
}

int main(){
    int element;
    cin>>element;
    int ans=0;
    int arr[element];
    for(int i=0;i<element;i++){
        arr[i]=i;
    }
    int start=0;
    int end=element-1;
    int mid=(start+end)/2;
    while(start<=end){
        
        if(mid*mid==element){
            ans=mid;
            break;
        }
        else if(mid*mid>element){
           end=mid-1;
        }
        else if(mid*mid<element){
            ans=mid;
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    cout<<morePrecision(element,3,ans);
}

