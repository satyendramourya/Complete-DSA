#include<iostream>
using namespace std;

int min(int arr[], int n){
    int min = INT_MAX;
    for (int i = 0; i < n; i++){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    return min;
}

int max(int arr[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int arr[10];
    int n;
    cout << "enter size of Array- N : ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int minNum = min(arr, n);
    int maxNum = max(arr, n);

    cout << "MinNum : " << minNum << endl;
    cout << "MaxNum : " << maxNum << endl;
}