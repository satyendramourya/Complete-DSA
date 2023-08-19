#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findUnique(int arr[], int n)
{
    int unique = arr[0];
    for (int i = 1; i < n; i ++)
    {
        unique ^= arr[i];
    }
    cout << unique << endl;

}

int main()
{
    int arr[] = {1, 2, 7, 2, 7,8,9,8, 1};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    findUnique(arr, n);
    return 0;
}