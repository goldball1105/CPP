#include <iostream>
#include <iomanip>

using namespace std;
 
int main() {
    double a = 0.000;
    cin >> a;

    a -= 32;
    a *= 5.0/9.0;

    cout << setprecision(3) << fixed << a << endl;
    return 0;
}