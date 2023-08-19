#include <iostream>
using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void insertionSort(int arr[], int n){
    for (int i = 1; i < n; i++){
        int temp = arr[i];

        int j = i - 1;
        while(j>=0){
            if(arr[j]> temp)
                arr[j + 1] = arr[j];
            else
                break;

            j--;
        }
    arr[j + 1] = temp;
    }
}

int main() {
    int arr[] = {10, 1, 7, 4, 8, 2, 11};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);
    insertionSort(arr, n);
    printArr(arr, n);
}