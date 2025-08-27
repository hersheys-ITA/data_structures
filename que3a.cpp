#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,6,7,8};
    int n = 8; 
    int sum = n * (n + 1) / 2;
    int arrSum = 0;
    for(int i = 0; i < n-1; i++)
        arrSum += arr[i];
    cout << "Missing number: " << sum - arrSum;
    return 0;
}

