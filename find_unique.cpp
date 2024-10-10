#include<iostream>
using namespace std;

int main() {
    int ans = 0;
    int arr[10] = {1, 2, 3, 4, 1, 2, 3, 4, 5, };
    for(int i = 0; i < 10; i++) {
        ans = ans ^ arr[i];
    }
    cout << ans << endl; 
    return 0;
}
