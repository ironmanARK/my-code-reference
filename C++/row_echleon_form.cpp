#include<iostream>
using namespace std;

int main() {
    int n,m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >>n>> m;
    int a[n][m];
    
    cout << "Enter the elements of the matrix: ";
    for(int i=0;i<n;i++) {
        for(int j=0; j< m;j++) {
            cin>>a[i][j];
        }
    }
    for (int j=0;j<m;j++) {
        int pivotrow = -9;
        for (int i =j; i< n; i++) {
            if (a[i][j] != 0) {
                pivotrow = i;
                break;
            }
        }
        if (pivotrow == -9) {
            continue; 
        }
        if (pivotrow != j) {
            for (int k = 0; k < m; k++) {
                swap(a[j][k], a[pivotrow][k]);
            }
        }
           for (int i = j + 1; i < n; i++) {
            if (a[i][j] != 0) {
                double ratio = (double)a[i][j] / a[j][j];
                for (int k = j; k < m; k++) {
                    a[i][k] -= ratio * a[j][k];
                }
            }
        }
    }
    cout << "The row echleon form of the matrix is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
