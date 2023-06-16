#include<iostream>
 
using namespace std;
 
int main() {
    int a;
    int b;

    cin>>a>>b;

    a += a%2;
    b -= b%2;

    b -= a;
    b /= 2;
    b++;

    cout<<b<<endl;
}