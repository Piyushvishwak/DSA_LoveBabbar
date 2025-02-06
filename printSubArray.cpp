#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"subarrays"<<endl;
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    cout<<endl<<"Subsequence"<<endl;;

    int totalSubsequences = 1 << 5; // 2^n subsequences

    for (int mask = 1; mask < totalSubsequences; mask++) {
        for (int j = 0; j < 5; j++) {
            if (mask & (1 << j)) { // Check if j-th bit is set
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

