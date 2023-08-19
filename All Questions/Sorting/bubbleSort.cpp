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

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[j], arr[i]);
            }
        }
    }
}

int main()
{
    int arr[] = {10, 1, 7, 6, 14, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArr(arr, n);
    bubbleSort(arr, n);
    printArr(arr, n);
}