#include<iostream>
using namespace std;

//            2             -------- peak
//        1       1
//     0             0


int findPeak(int arr[], int n){
    int s = 0, e = n - 1, mid = s + (e - s) / 2;
    while(s <= e){
        if(arr[mid] < arr[mid+1]){
            s = mid + 1;
        }else {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main(){
    int arr[] = {0, 1, 2 , 3, 1, 0};
    int n = 5;

    int peak = findPeak(arr, n);
    cout << "peak is " << peak;
}