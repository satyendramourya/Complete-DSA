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
        while (j <= (i- 1))
        {
            cout << "  ";
            j++;
        }
        while (j <= n)
        {
            cout << " *";
            j++;
        }
        cout << endl;
        i++;
    }
}