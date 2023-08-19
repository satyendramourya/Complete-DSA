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
int duplicate(int arr[] , int n){
    int xeor = 0;
    for (int i = 0; i < n; i++){
        xeor ^= arr[i];
    }
    for (int i = 0; i < n; i++){
        xeor ^= i;
    }
    return xeor;
}


int main()
{
    int arr[] = {1, 2, 3, 4, 3};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    int duplicate_Num = duplicate(arr, n);
    cout << duplicate_Num;
    return 0;
}