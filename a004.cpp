#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    string msg;

    while (cin >> a){
        if ( a % 4 == 0 && a % 100 != 0 || a % 400 == 0){
            msg = "true";
        }else{
            msg = "false";
        }

        cout << msg << endl;
    }
    return 0;
}