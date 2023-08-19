#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArr(int arr[], int n){
    int i = 0, e = n - 1;
    while (i<e)
    {
        swap(arr[i++], arr[e--]);
    } 
}

int main() {
    int arr[] = {34, 5, 6, 7, 82};
    int n = sizeof(arr) / sizeof(int);

    printArray(arr, n);
    reverseArr(arr, n);
    printArray(arr, n);
}