#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key)
{
    int mid = start + (end - start) / 2;
    if (start > end)
        return -1;
    if (arr[mid] == key)
    {
        return mid;
    }
    if (arr[mid] < key)
    {
        // search in right side

        return binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        // search in left side
        return binarySearch(arr, start, mid - 1, key);
    }
}

int main()
{
    int arr[] = {2, 4, 6, 10, 14, 16, 18};
    int size = sizeof(arr) / sizeof(int);
    int key = 6, start = 0, end = size - 1;
    int pos = binarySearch(arr, start, end, key);
    cout << pos << endl;
}