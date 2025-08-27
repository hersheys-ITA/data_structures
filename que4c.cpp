#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;
    string result = "";
    for(int i = 0; i < s.length(); i++) {
        char c = s[i];
        if(!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| 
             c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            result += c;
        }
    }
    cout << "Without vowels: " << result;
    return 0;
}

