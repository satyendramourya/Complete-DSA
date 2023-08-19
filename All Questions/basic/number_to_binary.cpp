#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n, i = 0, ans = 0;
    cout << "enter a number : ";
    cin >> n;
    while (n!=0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;

        // int rem = n % 2;
        // ans = ans*10 + rem;
        // n = n / 2;
    }

    cout << " answer is " << ans;
}