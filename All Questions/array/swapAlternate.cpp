#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void swapAlter(int arr[], int n){
    for (int i = 0; i < n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i + 1]);
        }
    }
}

    int
    main()
{
    int arr[] = {1, 2, 7, 8, 5};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    swapAlter(arr, n);
    printArr(arr, n); 
    return 0;
}