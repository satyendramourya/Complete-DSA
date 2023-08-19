#include <vector>
#include <iostream>

using namespace std;

void printArr(vector<vector<int>> &a)
{
    int row = a.size();
    int col = a[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }

    cout << endl;
}

void setZeroes(vector<vector<int>> &matrix)
{
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < row; k++){
                matrix[j][k] = 0;
                }
                for (int k = 0; k < row; k++){
                matrix[k][j] = 0;
                }
                break;
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr{
        {0, 1, 2, 0},
        {3, 4, 5, 2},
        {1, 3, 1, 5},
    };

    printArr(arr);
    cout << endl;

    setZeroes(arr);
    cout  << endl;
    printArr(arr);
}
