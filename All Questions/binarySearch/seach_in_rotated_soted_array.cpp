#include<iostream>
using namespace std;

int findPivot(int arr[], int n){
    int s = 0, e = n - 1, mid = s + (e - s) / 2;

    while(s<e){
        cout << "findpivot" << endl;
        if(arr[mid]>= arr[0])
            s = mid + 1;
        else
            e = mid ;

        mid = s + (e - s) / 2;
    }
    return s;
}

bool BSearch(int arr[], int s, int e, int k){
    int mid = s + (e - s) / 2;
    while(s <= e){
        cout << "bSearch" << endl;
        if(arr[mid]==k)
            return true;
        else if(arr[mid]>k)
            e = mid - 1;
        else
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return false;
}

int main(){
    int arr[] = {3,1 };
    int n = sizeof(arr)/sizeof(int);
    int k = 1;
    int pivot = findPivot(arr, n);

    bool status = true;

    if(arr[pivot] <= k && k <= arr[n-1])
        status = BSearch(arr, pivot, n - 1, k);
    else
        status = BSearch(arr, 0, pivot - 1, k);

    cout << status;
}