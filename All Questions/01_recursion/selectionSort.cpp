#include <iostream>
using namespace std;

int minIndex(int arr[], int i, int j)
{
    if (i == j)
        return i;

    int k = minIndex(arr, i + 1, j);

    return (arr[i] < arr[k]) ? i : k;
}

void recurSelectionSort(int arr[], int size, int index = 0)
{
    if (index == size)
        return;

    int k = minIndex(arr, index, size - 1);

    if (k != index)
    {
        swap(arr[k], arr[index]);
    }

    recurSelectionSort(arr, size, index + 1);
}

int main()
{
    int arr[] = {3, 1, 5, 2, 7, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calling function
    recurSelectionSort(arr, n);

    // printing sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
