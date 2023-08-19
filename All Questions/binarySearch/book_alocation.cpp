//  Allocate the book to m students such that the maximum number of pages assigned ti a student is minimum;

#include<iostream>
using namespace std;

bool isPossible (int arr[], int n, int m, int mid){
    cout << "isPossible function" << endl;
    int studentCount = 1, pageSum = 0;
    for (int i = 0; i < n; i++){
        if(pageSum + arr[i] <= mid){
            pageSum += arr[i];
        }
        else {
            studentCount++;
            if(studentCount > m || arr[i] > mid)
                return false;
            pageSum = arr[i];
        }
    }
    return true;
}

int allocatedBooks(int arr[], int n, int m)
{
    cout << "allocatedBooks function " << endl;
    int s = 0;

    int sum = 0;
    for (int i = 0; i < n ; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;

    while (s<=e)
    {
        if(isPossible(arr, n , m, mid )){
            ans = mid;
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    
    return ans;
}

int main(){
    int arr[] = {10, 20, 30, 40};
    int m = 3, n=4;
    cout << "main function" << endl;
    int pages = allocatedBooks(arr, n, m);

    cout << "max pages : " << pages;
}