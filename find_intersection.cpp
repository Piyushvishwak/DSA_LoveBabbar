#include<iostream>
#include<vector>
using namespace std;

// vector<int> find_intersection(const vector<int>& arr1, int m, const vector<int>& arr2, int n) {
//     vector<int> ans;
//     vector<int> temp_arr2 = arr2;

//     for (int i = 0; i < m; i++) {
//         int element = arr1[i];
//         for (int j = 0; j < n; j++) {
//             if (temp_arr2[j] == element) {
//                 ans.push_back(element);
//                 temp_arr2[j] = -1; 
//                 break;
//             }
//         }
//     }
//     return ans;
// }

int main() {
    vector<int> arr1 = {1, 2, 4, 5, 6};
    vector<int> arr2 = {2, 3, 5, 7};

    vector<int> result = find_intersection(arr1, arr1.size(), arr2, arr2.size());

    cout << "Intersection of the two arrays is: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}



//Approach 2
vector<int> find_intersection(const vector<int>& arr1, int m, const vector<int>& arr2, int n) {
    int i=0;int j=0;
    vector<int> ans;
    while(i<m && j<n){
        if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
