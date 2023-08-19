#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPal (string str){
    int n = str.size();
    int s = 0;
    int e = n - 1;
    while(s<e){
        if(toLowerCase(str[s]) != toLowerCase(str[e])){
            return 0;
        } else {
            s++;
            e--;
        }
    }
    return 1;
}

int main(){
    string pal = "Abcba";
    bool status = checkPal(pal);
    cout << status;
}