#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr) {
        set<int> pos;
        for(int n:arr){
            if(n>0){
                pos.insert(n);
            }
        }
        
        int i=1;
        for(int num: pos){
            if(num!=i){
                return i;
            }
            i++;
        }
    return i;
}
int main(){
    vector<int> arr={2, -3, 4, 1, 1, 7};
    cout<<missingNumber(arr);
}