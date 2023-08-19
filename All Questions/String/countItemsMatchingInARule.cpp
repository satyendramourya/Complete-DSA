#include <iostream>
#include <vector>

using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int index;
    if (ruleKey == "type")
    {
        index = 0;
    }
    else if (ruleKey == "color")
    {
        index = 1;
    }
    else
    {
        index = 2;
    }
}

int main()
{
    vector<vector<string>> items = {{"phone", "blue", "pixel"},
                                    {"computer", "silver", "phone"},
                                    {"phone", "gold", "iphone"}};

    string ruleKey = "color", ruleValue = "silver";

    countMatches(items, ruleKey, ruleValue);
}