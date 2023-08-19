#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isSafeToMove(int x, int y, int n, vector<vector<int>> visited, vector<vector<int>> &m)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && m[x][y] == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &m, int n, vector<string> &ans, int x, int y, vector<vector<int>> &visited, string output)
{

    // base Case
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(output);
        return;
    }

    visited[x][y] = 1;

    // down
    int newX = x + 1;
    int newY = y;

    if (isSafeToMove(newX, newY, n, visited, m))
    {
        output.push_back('D');
        solve(m, n, ans, newX, newY, visited, output);
        output.pop_back();
    }

    // left
    newX = x;
    newY = y - 1;

    if (isSafeToMove(newX, newY, n, visited, m))
    {
        output.push_back('L');
        solve(m, n, ans, newX, newY, visited, output);
        output.pop_back();
    }

    // right
    newX = x;
    newY = y + 1;

    if (isSafeToMove(newX, newY, n, visited, m))
    {

        output.push_back('R');
        solve(m, n, ans, newX, newY, visited, output);
        output.pop_back();
    }

    // up
    newX = x - 1;
    newY = y;

    if (isSafeToMove(newX, newY, n, visited, m))
    {
        output.push_back('U');
        solve(m, n, ans, newX, newY, visited, output);
        output.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &m, int n)
{
    vector<string> ans;

    if (m[0][0] == 0)
    {
        return ans;
    }

    int srcx = 0, srcy = 0;

    vector<vector<int>> visited = m;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }

    string output = "";
    solve(m, n, ans, srcx, srcy, visited, output);
    sort(ans.begin(), ans.end());

    return ans;
}

int main()
{
    vector<vector<int>> m = {{1, 0, 0, 0},
                             {1, 1, 0, 0},
                             {1, 1, 0, 0},
                             {0, 1, 1, 1}};

    int n = 4;

    vector<string> ans = findPath(m, n);

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}