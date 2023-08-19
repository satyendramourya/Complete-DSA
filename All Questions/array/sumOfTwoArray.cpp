#include<iostream>
#include<vector>

using namespace std;

void printArray(vector<int>& arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

vector<int> sumOfArr(vector<int>& arr1 , vector<int>& arr2){
    vector<int> ans;
    int i = arr1.size()-1 , j = arr2.size()-1;
    int carry = 0;

    while (i>=0 && j>= 0){
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }

    while(i >= 0){
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    while(j >= 0){
        int sum = arr2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    printArray(ans);
    return ans;
}

int main(){
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {9,9};

    sumOfArr(arr1, arr2);
}