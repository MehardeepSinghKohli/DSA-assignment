#include <iostream>
using namespace std;

(a) Reverse the elements of an array
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
}

                    // (b) Find the matrix multiplication
                    // int main() {
                    //     int a[10][10], b[10][10], c[10][10], r1, c1, r2, c2;
                    //     cout << "Enter rows & cols of first matrix: ";
                    //     cin >> r1 >> c1;
                    //     cout << "Enter rows & cols of second matrix: ";
                    //     cin >> r2 >> c2;

                    //     if (c1 != r2) {
                    //         cout << "Matrix multiplication not possible!";
                    //         return 0;
                    //     }

                    //     cout << "Enter first matrix:\n";
                    //     for (int i = 0; i < r1; i++)
                    //         for (int j = 0; j < c1; j++)
                    //             cin >> a[i][j];

                    //     cout << "Enter second matrix:\n";
                    //     for (int i = 0; i < r2; i++)
                    //         for (int j = 0; j < c2; j++)
                    //             cin >> b[i][j];

                    //     for (int i = 0; i < r1; i++)
                    //         for (int j = 0; j < c2; j++) {
                    //             c[i][j] = 0;
                    //             for (int k = 0; k < c1; k++)
                    //                 c[i][j] += a[i][k] * b[k][j];
                    //         }

                    //     cout << "Result matrix:\n";
                    //     for (int i = 0; i < r1; i++) {
                    //         for (int j = 0; j < c2; j++)
                    //             cout << c[i][j] << " ";
                    //         cout << endl;
                    //     }
                    // }

// (c) Find the Transpose of a matrix
// int main() {
//     int a[10][10], trans[10][10], r, c;
//     cout << "Enter rows and cols: ";
//     cin >> r >> c;

//     cout << "Enter matrix:\n";
//     for (int i = 0; i < r; i++)
//         for (int j = 0; j < c; j++)
//             cin >> a[i][j];

//      for (int i = 0; i < r; i++) {
//         for (int j = 0; j < c; j++)
//             cout << a[i][j] << " ";
//         cout << endl;
//     }


//     cout << "Transpose:\n";
//     for (int i = 0; i < c; i++) {
//         for (int j = 0; j < r; j++)
//             cout << a[j][i] << " ";
//         cout << endl;
//     }
// }