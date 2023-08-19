#include <iostream>
using namespace std;

void printArr(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// three pointer approach -- 0 2 2 1 0 1 1 0 2
void sort012(int arr[], int n){
    int low = 0, mid = 0, high = n-1;
    while (mid <= high){
        switch(arr[mid]){
            case 0:{
                swap(arr[low++], arr[mid++]);
                break;
            } 
            case 1:{
                mid++;
                break;
            }
            case 2:{
                swap(arr[mid], arr[high--]);
                break;
            }
        }
    }
    return;
}

int main()
{
    int arr[] = {0, 2, 2, 1, 0, 1, 1, 0 ,2};
    int n = sizeof(arr) / sizeof(int) -1;
    printArr(arr, n);
    sort012(arr, n);
    printArr(arr, n);
    
}