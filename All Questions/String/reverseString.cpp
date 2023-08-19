#include<iostream>
using namespace std;

void rev( string& name, int n){
    for (int i = 0; i < n; i++){
        int s = 0;
        int e = n - 1;

        while(s<e){
            swap(name[s++], name[e--]);
        }
    }
}

int main(){
    string name = "niraj";
    int n = name.size();

     rev(name, n);
    cout << name << endl;
}