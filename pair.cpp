// There is a "pair" typically refers to a data structure that stores two related values.

#include <iostream>
#include <utility> // for std::pair
using namespace std;

int main() {
    // Create a pair of an integer and a string
    pair<int, string> myPair;

    // Initialize the pair
    myPair = make_pair(1, "Hello");

    // Access elements of the pair
    cout << "First: " << myPair.first << endl;
    cout << "Second: " << myPair.second << endl;

    return 0;
}
