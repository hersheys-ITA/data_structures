#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int r = 3, c = 3, nonZero = 3;
    Element mat[] = {{0,0,1},{1,1,2},{2,2,3}};
    cout << "Transpose: \n";
    for(int i = 0; i < nonZero; i++) {
        cout << mat[i].col << " " << mat[i].row << " " << mat[i].val << endl;
    }
    return 0;
}

