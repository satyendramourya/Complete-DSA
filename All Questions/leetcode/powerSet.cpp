#include <iostream>
#include <vector>

using namespace std;

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{

    vector<int> output;

    // base Case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, ans, index + 1);
    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, ans, index + 1);
}

vector<vector<int>> subset(vector<int> &nums)
{

    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};

    vector<vector<int>> finalSol = subset(arr);

    int row = finalSol.size();
    for (int i = 0; i < row; i++)
    {
        cout << "-print row " << row << endl;
        int col = finalSol[i].size();
        cout << "-print col " << col << endl;

        cout << endl;
    }
    return 0;
}