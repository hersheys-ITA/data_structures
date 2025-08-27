#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    reverse(s.begin(), s.end());
    cout << "Reversed: " << s;
    return 0;
}

