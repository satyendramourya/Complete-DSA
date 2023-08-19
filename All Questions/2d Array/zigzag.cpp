#include<vector>
#include<iostream>

using namespace std;

void printArr(vector<vector<int>>& a){
    int row = a.size();
    int col = a[0].size();

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
}

void zigzag(vector<vector<int>> &a, int N){
    int row = a.size();
    int col = a[0].size();

    for (int k = 0; k <= 2 * N; k++){
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (i + j == k)
                    // cout << a[i][j] << " ";
                    cout << a[j][i] << " ";
            }
        }
        cout << endl;
    }
}

    int main()
{
    int row = 4, col = 4;
    vector<vector<int>> arr {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
    };

    printArr(arr);
    zigzag(arr, row);
}
