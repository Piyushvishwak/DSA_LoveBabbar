#include <iostream>

using namespace std;

void create_2d_array(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> arr[i][j];
        }
    }
}

void print_sum(int arr[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        int sum=0;
        for (int j = 0; j < cols; ++j) {
            sum+=arr[i][j];
        }
        cout << sum << " ";
    }
}

void largest_sum(int arr[][100], int rows, int cols) {
    int max=0;
    int rowI=0;
    for (int i = 0; i < rows; ++i) {
        int sum=0;
        for (int j = 0; j < cols; ++j) {
            sum+=arr[i][j];
        }
        if(sum>max){
            max=sum;
            rowI++;
        }
    }
    cout << "maximum sum is: "<<max << " ";
    cout << "at row: "<<rowI<<endl;
}

int main() {
    int rows, cols;

    cin >> rows;
    cin >> cols;

    int matrix[100][100];

    create_2d_array(matrix, rows, cols);

    largest_sum(matrix, rows, cols);

    return 0;
}
