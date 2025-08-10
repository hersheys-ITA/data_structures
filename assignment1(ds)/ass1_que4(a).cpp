#include <iostream>
using namespace std;


int main() {
	cout<<"*** part a***"<<endl;
    int arr[100],n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i=0; i<n; i++)
        cin >> arr[i];

    for (int i=0; i<n/2; i++) {
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }

    cout << "Reversed array: ";
    for (int i =0; i < n; i++)
        cout << arr[i] << " ";
        
    cout<<"******************";
    
    
    return 0;
}

