#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    int p = 0, q = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                p = i;
                q = j;
            }
        }
    }

    p = (p < 2) ? (2 - p) : (p - 2);
    q = (q < 2) ? (2 - q) : (q - 2);

    cout << p+q <<endl;

    return 0;
}
