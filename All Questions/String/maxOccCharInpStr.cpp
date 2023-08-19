#include<iostream>
using namespace std;

char getMaxOcc(string str){
    int arr[26] = {0};

    for (int i = 0; i < str.length(); i++){
        char ch = str[i];
        int number = 0;
        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        } else {
            number = ch - 'A';
        }
        arr[number]++;
    }

    int maxI = -1, ans = 0;
    for (int i = 0; i < 26; i++){
        if(maxI < arr[i]){
            ans = i;
            maxI = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main(){
    string str = "tturd";
    char ans = getMaxOcc(str);

    cout << ans << endl;
}