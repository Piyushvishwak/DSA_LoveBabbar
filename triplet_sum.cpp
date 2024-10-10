#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> triplet_sum(const vector<int>& arr, int sum) {
    vector<vector<int>> ans;
    int n = arr.size();

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == sum) {
                    vector<int> triplet = {arr[i], arr[j], arr[k]};
                    sort(triplet.begin(), triplet.end());
                    ans.push_back(triplet);
                }
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6, 8};
    int sum = 15;

    sort(arr.begin(), arr.end()); 
    vector<vector<int>> ans = triplet_sum(arr, sum);

    cout << "Triplets with sum " << sum << " are: " << endl;
    for (const auto& triplet : ans) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")" << endl;
    }

    return 0;
}
