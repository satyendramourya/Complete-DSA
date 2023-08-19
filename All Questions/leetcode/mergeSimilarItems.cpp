#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<vector<int>> item)
{
    int row = item.size();
    int col = item[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << item[i][j] << " ";
        }
        cout << endl;
    }
}

vector<vector<int>> mergeSimilarItems(vector<vector<int>> &items1, vector<vector<int>> &items2)
{
    int row1 = items1.size(), row2 = items2.size();
    sort(items1.begin(), items1.end());

    sort(items2.begin(), items2.end());

    vector<vector<int>> ans;
    int i = 0, j = 0;
    while (i < row1 && j < row2)
    {
        vector<int> temp;
        if (items1[i][0] == items2[j][0])
        {
            temp.push_back(items1[i][0]);
            temp.push_back(items1[i][1] + items2[j][1]);

            ans.push_back(temp);
            i++;
            j++;
        }
        else if (items1[i][0] < items2[j][0])
        {
            ans.push_back(items1[i]);
            i++;
        }
        else
        {
            ans.push_back(items2[j]);
            j++;
        }
    }
    while (i < row1)
    {
        ans.push_back(items1[i]);
        i++;
    }
    while (j < row2)
    {
        ans.push_back(items2[j]);
        j++;
    }

    return ans;
}

int main()
{
    vector<vector<int>> item1 = {{5, 1}, {4, 2}, {3, 3}, {2, 4}, {1, 5}};
    vector<vector<int>> item2 = {{7, 1}, {6, 2}, {5, 3}, {4, 4}};

    vector<vector<int>> ans = mergeSimilarItems(item1, item2);
    cout << endl
         << "--ans--" << endl;
    print(ans);
    return 0;
}