#include <iostream>
using namespace std;

int arr[100], n=0;

void create() {
    cout<<"Enter number of elements: ";
    cin>>n;
    cout << "Enter elements: ";
    for (int i=0; i<n; i++)
        cin>>arr[i];
}

void display() {
    if (n==0) {
        cout << "Array is empty\n";
        return;
    }
    for (int i=0; i<n; i++)
        cout<<arr[i] << " ";
    cout<<endl;
}

void insertElement() {
    int pos, val;
    cout << "Enter position (1 to "<< n+1<<") and value: ";
    cin >> pos >> val;
    pos = pos-1; 
    for (int i=n; i > pos;i--)
        arr[i]=arr[i - 1];
    arr[pos]=val;
    n++;
}

void deleteElement() {
    int pos;
    cout << "Enter position (1 to " << n<< ") to delete: ";
    cin >> pos;
    pos = pos - 1;
    for (int i=pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
}

void linearSearch() {
    int key;
    bool found = false;
    cout << "Enter element to search: ";
    cin >> key;
    for (int i = 0; i < n; i++) {
        if (arr[i]==key) {
            cout << "Found at position " << (i + 1) << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Not found" << endl;
}

int main() {
    int choice;
    do {
        cout << "1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.LINEAR SEARCH\n6.EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: create(); break;
            case 2: display(); break;
            case 3: insertElement(); break;
            case 4: deleteElement(); break;
            case 5: linearSearch(); break;
            case 6: break;
            default: cout << "Invalid choice\n";
        }
    } while (choice!=6);
    return 0;
}

