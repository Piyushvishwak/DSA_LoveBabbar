#include <iostream>

using namespace std;

void create_2d_array(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}

void create_2d_array_colwise(int arr[][100], int rows, int cols) {
    for (int j = 0; j < cols; ++j) {
        for (int i = 0; i < rows; ++i) {
            cin >> arr[i][j];
        }
    }
}

void print_2d_array(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;

    cin >> rows;
    cin >> cols;

    int matrix[100][100];

    create_2d_array_colwise(matrix, rows, cols);

    print_2d_array(matrix, rows, cols);

    return 0;
}
