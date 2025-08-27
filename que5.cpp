#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of diagonal matrix: ";
    cin >> n;
    int diag[n];
    cout << "Enter " << n << " diagonal elements: ";
    for(int i = 0; i < n; i++) cin >> diag[i];
    cout << "Diagonal matrix stored as 1D array: ";
    for(int i = 0; i < n; i++) cout << diag[i] << " ";
    return 0;
}

