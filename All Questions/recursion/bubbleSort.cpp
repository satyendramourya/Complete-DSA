#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int size)
{
    // base Case already sorted
    if (size == 0 || size == 1)
    {
        return;
    }

    // handle one
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] < arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // recursive Call
    bubbleSort(arr, size - 1);
}

int main()
{
    int arr[] = {3, 2, 1, 10, 9, 6};
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);

    bubbleSort(arr, size);
    print(arr, size);
}