#include <iostream>
#include <vector>

using namespace std;

void solve(vector<string> &ans, string digits, string output, int index, string mapping[])
{
    // base Case
    if (index >= digits.length())
    {
        if (digits.length() > 0)
        {
            ans.push_back(output);
            return;
        }
    }

    int number = digits[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < value.length(); i++)
    {
        output.push_back(value[i]);
        solve(ans, digits, output, index + 1, mapping);
        output.pop_back();
    }
}

vector<string> letter(string digits)
{
    vector<string> ans;
    string output;
    int index = 0;
    string mapping[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    solve(ans, digits, output, index, mapping);
    return ans;
}

int main()
{
    string a = "23";
    int size = a.length();
    vector<string> ans = letter(a);

    int row = ans.size();

    cout << "row -- " << row << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}