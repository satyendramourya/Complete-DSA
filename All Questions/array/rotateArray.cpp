#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int>& arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void rotateArray(vector<int>& arr, int k)
{
    int n = arr.size();
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        temp[(i + k) % n] = arr[i];
    }
    printArray(temp, n);
}

int main() {
    vector <int> arr = {1, 7, 9, 11};
    int k = 2;
    int n = arr.size();

    printArray(arr, n);
    rotateArray(arr, k);
}