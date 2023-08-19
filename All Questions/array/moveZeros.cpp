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

void moveArr(int arr[], int n){
    int nonZero = 0;
    for (int i = 0; i < n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[nonZero]);
            nonZero++;
        }
    }
}

int main(){
    int arr[] = {6, 1, 0, 0, 12, 0};
    int size = sizeof(arr) / sizeof(int);

    printArray(arr, size);
    moveArr(arr, size);
    printArray(arr, size);
}