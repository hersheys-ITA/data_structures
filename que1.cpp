#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while(low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5, key;
    cout << "Enter element to search: ";
    cin >> key;

    int pos = linearSearch(arr, n, key);
    if(pos != -1) cout << "Found using Linear Search at index " << pos << endl;
    else cout << "Not found (Linear Search)" << endl;

    pos = binarySearch(arr, n, key);
    if(pos != -1) cout << "Found using Binary Search at index " << pos << endl;
    else cout << "Not found (Binary Search)" << endl;

    return 0;
}

