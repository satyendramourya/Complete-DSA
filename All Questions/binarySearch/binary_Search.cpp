#include<iostream>
using namespace std;

bool bSearch(int arr[], int size, int key){
    int low = 0, high = size - 1, mid = low + (high - low) / 2;

    while(low<=high){
        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
        mid = low + (high - low) / 2;
    }
    return false;
}

int main(){
    int arr[] = {3,5,9,13,27};
    int key = 3;
    int size = sizeof(arr) / sizeof(int);
    bool status =  bSearch(arr, size, key);
    cout << key << " status " << status;
}