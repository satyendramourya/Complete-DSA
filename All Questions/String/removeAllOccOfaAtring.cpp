#include<iostream>
using namespace std;

string removeAllOcc(string s, string part){
    while(s.length()!=0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}

int main(){
    string str = "ab";
    string part = "aacabaadfabba";

    string ans = removeAllOcc(part, str);
    cout << ans << endl;
}