#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> pair_sum(const vector<int>& arr, int sum) {
    vector<vector<int>> ans;
    int n = arr.size();

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            vector<int> temp;
            if (arr[i] + arr[j] == sum) {
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }

    return ans;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6, 8};
    int sum = 10;

    sort(arr.begin(), arr.end()); 
    vector<vector<int>> ans = pair_sum(arr, sum);

    cout << "Pairs with sum " << sum << " are: " << endl;
    for (const auto& pair : ans) {
        cout << "(" << pair[0] << ", " << pair[1] << ")" << endl;
    }

    return 0;
}
