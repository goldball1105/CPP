#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;

    cin >> a >> b;

    string c = a+b;

    long long ans = stoi(c);

    cout<<ans * 1234;

    return 0;
}
