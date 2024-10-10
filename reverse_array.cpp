#include<iostream>
#include<vector>
using namespace std;

vector<int> reverseArray(vector<int> v){
    int start=0;
    int end=v.size()-1;
    while(start<end){
        swap(v[start],v[end]);
        start++;
        end--;
    }
    return v;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    cout<<"Original Array: ";
    for(int i=0;i<7;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector<int> res=reverseArray(v);
    cout<<"Reversed Array: ";
    for(int i=0;i<7;i++){
        cout<<res[i]<<" ";
    }


}