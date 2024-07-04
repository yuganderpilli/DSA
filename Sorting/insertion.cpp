#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // ## Insertion Sort
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

 
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
            for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<"key"<<key<<" ";
    cout << endl;
        }
        arr[j + 1] = key;
    }
}

int main() {
    int n = 5;
    int arr[] = {5, 2, 4, 6, 1};

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
         
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;  

    return 0;
}