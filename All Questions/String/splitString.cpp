#include <iostream>
#include <vector>

using namespace std;

int split(string &str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    return ++count;
}

int mostWordsFound(vector<string> &sentences)
{
    int mostWords = 0;
    for (int i = 0; i < sentences.size(); i++)
    {
        mostWords = max(mostWords, split(sentences[i]));
    }
    return mostWords;
}

int main()
{
    vector<string> a = {
        "alice and bob love leetcode",
        "i think so too", "this is great thanks very much"};

    int ans = mostWordsFound(a);
    cout << "ans -- " << ans;
}