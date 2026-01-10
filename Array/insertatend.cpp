#include <iostream>
using namespace std;
int main(){
    int n, element;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n + 1]; // Create an array with one extra space for the new element

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to insert at the end: ";
    cin >> element;

    // Insert the new element at the end
    arr[n] = element;
    n++; // Increase the size of the array

    cout << "Array after insertion at the end: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}