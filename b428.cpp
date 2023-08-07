#include <iostream>
using namespace std;

int main() {

    string p;
    string c;

    while (cin>>p>>c){

        c[0] += 26-p[0];

        cout<<c[0]%26<<"\n";


    };


    return 0;
}