#include <iostream>
using namespace std;

void merge(int *arr, int start, int end)
{
    int mid = (start + end) / 2;

    int len1 = mid - start + 1;
    int len2 = end - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainArrIndex = start;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrIndex++];
    }

    mainArrIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrIndex++];
    }

    // merge 2 sorted arrays;

    int index1 = 0, index2 = 0;
    mainArrIndex = start;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrIndex++] = first[index1++];
        }
        else
        {

            arr[mainArrIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

void mergeSort(int *arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }

    int mid = (start + end) / 2;

    // left side
    mergeSort(arr, start, mid);

    // right side
    mergeSort(arr, mid + 1, end);

    // merge
    merge(arr, start, end);
}

int main()
{
    cout << "- start -" << endl;
    int arr[] = {10, 9, 8, 7, 4, 6, 2, 4, 4, 5, 2};
    int size = 11;

    mergeSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl;

    return 0;
}