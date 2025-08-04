#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the number of rows: "<<endl;
    cin >> a;
    cout << "Enter the number of columns:"<<endl;
    cin >> b;
    int matrix[56][46]; 
    cout << "Enter the elements of the matrix:" << endl;
    for(int i = 0; i < a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << "Element  [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe matrix is:" << endl;
    for(int i = 0; i <a; ++i) {
        for(int j = 0; j < b; ++j) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}
