#include<iostream>
using namespace std;

int compression(string str){
    int i = 0, n = str.size();
    int ansIndex = 0;

    while(i<n){
        int j = i + 1;
        while (j<n && str[i]==str[j])     
        {
            j++;
        }
        
        // different chars.

        str[ansIndex++] = str[i];
        int count = j - i;
        if(count > 1){
            string cnt = to_string(count);
            for( char ch: cnt){
                str[ansIndex++] = ch;
            }
        }
        i = j;
    }
    return ansIndex;
}

int main(){
    string str = "abbccc";
    int newLength = compression(str);

    cout << newLength;
}