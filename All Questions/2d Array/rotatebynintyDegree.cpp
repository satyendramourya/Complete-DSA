#include <iostream>
#include <vector>

using namespace std;

void printMat(vector< vector<int>> matrix){
    int row = matrix.size();
    int col = matrix[0].size();

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void rotate(vector<vector<int>> &matrix)
{

    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; i++)
    {
        for (int j = cols - 1; j >= 0; j--)
        {
            swap(matrix[j][i], matrix[i][j]);
        }
    }
}

int main(){
    vector<vector<int>> matrix =  {{ 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 } };
    printMat(matrix);

    cout << endl;
    rotate(matrix);

    printMat(matrix);
}