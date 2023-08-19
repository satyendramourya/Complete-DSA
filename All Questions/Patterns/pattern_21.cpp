#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cout << "enter number ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= (n - i))
        {
            cout << "  ";
            j++;
        }

        int starts = 1;
        while (starts <= i)
        {
            cout << " " << starts;
            starts++;
        }

        int rev = i-1;
        while (rev>=1)
        {
            cout << " " << rev ;
            rev--;
        }

                cout << endl;
        i++;
    }
}