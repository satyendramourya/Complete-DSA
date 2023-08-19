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

int find3Numbers(int A[], int arr_size, int sum){
    for (int i = 0; i < arr_size - 2; i++){
        for (int j = i + 1; j < arr_size - 1; j++)
        {
            for (int k = j+1; k < arr_size; k++){
                if(A[i]+A[j]+A[k] == sum){
                    cout << "Triplet is -- " << A[i] << " " << A[j] << " " << A[k] << " " << endl;
                    return true;
                }
            }
        }
    }
    return false;
}

    int main()
{
    int arr[] = {1, 2, 2, 7, 7, 7, 8, 8, 8, 8};
    int n = sizeof(arr) / sizeof(int);
    int sum = 5;
    printArr(arr, n);
    find3Numbers(arr, n, sum);
    return 0;
}