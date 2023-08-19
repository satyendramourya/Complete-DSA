#include <iostream>
using namespace std;

int main(){
    int i = 1, n;
    cout << "enter NO.:- ";
    cin >> n;

    
    while (i <= n)
    {
        int first_num = 1;
        while (first_num <= n-i+1)
        {
            cout << " "<< first_num;
            first_num++;
        }

        int stars = 1;
        while (stars <= (i-1)*2 )
        {
            cout << " *";
            stars++;
        }

        int sec_num = n - i + 1;
        while (sec_num >= 1)
        {
            cout << " " << sec_num;
            sec_num--;
        }

        cout << endl;
        i++;
    }
}