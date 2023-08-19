#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedArray(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> ans;
    int m = arr1.size();
    int n = arr2.size();
    int i = 0, j = 0;

    while ( i < m && j < n){
        if(arr1[i]< arr2[j]){
            ans.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i] >  arr2[j]){
            ans.push_back(arr2[j]);
            j++;
        }
    }

    while (i < m)
    {
        ans.push_back(arr1[i]);
        i++;
    }

    while (j < n)
    {
        ans.push_back(arr2[j]);
        j++;
    }

    return ans;
}

void printArr( vector<int> arr){
    int n = arr.size();
    for (int i = 0; i < n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6};

    cout << "arr1 -- ";
    printArr(arr1);

    cout << "arr2 -- ";
    printArr(arr2);

    vector<int> ans = sortedArray(arr1, arr2);
    printArr(ans);
}