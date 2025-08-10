#include <iostream>
using namespace std;

int main() {
    int a[10][10], n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter matrix:\n";
    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            cin>>a[i][j];

    for (int i=0; i<n; i++) {
        int rowSum = 0;
        for (int j=0; j<n; j++)
            rowSum += a[i][j];
        cout << "Row " << i << " sum = " << rowSum << endl;
    }

    for (int j=0; j<n; j++) {
        int colSum = 0;
        for (int i=0; i<n; i++)
            colSum += a[i][j];
        cout << "Column " << j << " sum = " << colSum << endl;
    }

    return 0;
}

