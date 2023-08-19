#include <iostream>
using namespace std;

int main(){
    int n, i = 1;
    cin >> n;
    while (i<=n)
    {
        int j = 1;
        int temp = i;
        while (j<=i)
        {
            cout << temp ;
            temp++;
            j++;
        }
        cout << endl;
        i++;
    }
    
}