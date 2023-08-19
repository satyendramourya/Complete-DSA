#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>> ans)
{
    int row = ans.size();
    int col = ans[0].size();

    cout << "row - " << row << " "
         << "col - " << col << endl;

    for (int i = 0; i < row; i++)
    {
        cout << "[";
        for (int j = 0; j < col; j++)
        {
            cout << ans[i][j];
        }
        cout << "], ";
    }
}

void solve(vector<int> nums, vector<vector<int>> &ans, int index)
{
    // base Case
    if (index >= nums.size())
    {
        ans.push_back(nums);
        return;
    }

    for (int i = index; i < nums.size(); i++)
    {
        swap(nums[i], nums[index]);
        solve(nums, ans, index + 1);
        swap(nums[i], nums[index]);
    }
}

vector<vector<int>> permute(vector<int> &nums)
{
    vector<vector<int>> ans;
    int index = 0;
    solve(nums, ans, index);

    print(ans);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3};
    int size = arr.size();

    permute(arr);
}