#include<iostream>
using namespace std;
bool checkEquals(int arr1[26] , int arr2[26]){
    for (int i = 0; i < 26;i++){
        if(arr1[i] != arr2[i]){
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count1[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count1[index]++;
    }

    int i = 0;
    int windowSize = s1.length();
    int count2[26] = {0};

    // initializing first window
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if(checkEquals(count1, count2)){
        return 1;
    }

    // aage window process karo;
    while(i<s2.length()){
        int index = s2[i];
        char newChar = index - 'a';
        count2[newChar]++;

        index = s2[i - windowSize];
        char oldChar = index - 'a';
        count2[oldChar]--;

        i++;

        if (checkEquals(count1, count2))
        {
            return 1;
        }
    }

    return 0;
}

int main(){
    string s1 = "abj", s2 = "eidbaooo";
    bool status = checkInclusion(s1, s2);
    
    if(status == 1)
        cout << "present";
    else
        cout << "absent";

}