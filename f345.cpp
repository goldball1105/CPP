#include <iostream>
using namespace std;
int p[10000000];

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = n - 1; 0 <= i; i--)
    {
        cout << p[i] << "\n";
    }
    return 0;
}