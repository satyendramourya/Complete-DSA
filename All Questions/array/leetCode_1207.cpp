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

bool occurence(int arr[], int size){
    int arr2[size + 1] = {0};

    // 1 2 2 7 7 7 8 8 8 8 
    for (int i = 1; i <= size;i++){
        for (int j = 0; j < size;j++ ){
            if(arr[j]==i){
                arr2[i]++;
            }
        }
    }
    printArr(arr2, size + 1);

    for (int i = 0; i < size; i++){
        for(int j = 0;j < size;j++){
            if(arr2[i]==0 || i==j)
                continue;

            if(arr2[i]==arr2[j]){
                return false;
            }
        }
    }
    return true;
}



int main()
{
    int arr[] = {1, 2,2, 7,7,7, 8,8,8,8};
    int n = sizeof(arr) / sizeof(int);
    printArr(arr, n);
    bool status = occurence(arr, n);
    cout << status;
    return 0;
}