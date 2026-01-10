#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, element, position;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n + 1]; // Create an array with one extra space for the new element

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert the element (0 to " << n << "): ";
    cin >> position;

    // Validate position
    if(position < 0 || position > n){
        cout << "Invalid position!" << endl;
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for(int i = n; i > position; i--){
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position] = element;
    n++; // Increase the size of the array

    cout << "Array after insertion at position " << position << ": ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}