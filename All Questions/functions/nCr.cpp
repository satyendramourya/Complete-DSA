// nCr = n! / ( r! * (n-r)!)

#include <iostream>
using namespace std;

int factorial (int n){
    int fact= 1;
    for (int i = 1; i <= n;i++){
        fact = fact * i;
    }
    cout << fact<<endl;
    return fact;
}

int nCr(int a, int b){
    int num = factorial(a);
    int denom = factorial(b) * factorial(a - b);
    int ans = num / denom;
    return ans;
}

int main(){
    int n, r;
    cout << "Enter number n and r: ";
    cin >> n >> r;
    int num = nCr(n,r);
    cout << "nCr " << num;
}