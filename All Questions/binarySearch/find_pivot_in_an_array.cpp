#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while(s<e){
        if(arr[0]<arr[mid])
            s = mid + 1;
        else
            e = mid;
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[] = {7,9,1,2,3};
    int size = 5;
    int pivot = findPivot(arr, size);
    cout << "pivot is : " << arr[pivot];
}