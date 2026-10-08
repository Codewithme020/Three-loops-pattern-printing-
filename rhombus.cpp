#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the steps";
    cin >> n;
    for (int h = 1; h <= n; h++)
    {

        for (int i = 1; i <= n - h; i++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}