#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

class Solution {
public:
    int countMinOperations(vector<int>& arr) {
        int n=arr.size();
        int count=n;
        int mini=arr[0];
        for(int i=0;i<n;i++){
            mini=min(arr[i],mini);
        }
        int a=1;
        while(a<=mini){
            a*=2;
            count++;
        }
        a=a/2;
        for(int i=0;i<n;i++){
            count+=(arr[i]-a);
        }
        return count-1;
    }
};

int main() {
    vector<int> arr={2,3};
    Solution s;
    cout<<s.countMinOperations(arr);
}