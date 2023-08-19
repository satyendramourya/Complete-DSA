#include<iostream>
using namespace std;

int firstOccurence(int arr[], int size, int key){
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOccurence(int arr[], int size, int key)
{
    int s = 0, e = size - 1, mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    // int arr[] = {1,2,3,3,3,3,3,4,5};
    int arr[] = {3,3,3};
    int size = sizeof(arr) / sizeof(int);
    int key = 3;

    int first_Occurence = firstOccurence(arr, size, key);
    int last_Occurence = lastOccurence(arr, size, key);
    cout<< first_Occurence << endl;
    cout<< last_Occurence << endl;

}