#include <iostream>
using namespace std;

int main() {
    uint32_t n;
    cin >> n;
    int count = 0;
    while (n > 0) {
        if (n&1==1) {
            count++;
        }
        n = (n >> 1);
    }
    cout << "The number of 1 bits are: " << count << endl;
    return 0;
}
