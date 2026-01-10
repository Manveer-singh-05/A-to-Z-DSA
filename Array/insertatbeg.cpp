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

    cout << "Enter the element to insert at the beginning: ";
    cin >> element;

    // Shift elements to the right
    for(int i = n; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the beginning
    arr[0] = element;
    n++; // Increase the size of the array

    cout << "Array after insertion at the beginning: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}