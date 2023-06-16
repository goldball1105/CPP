#include <iostream>
using namespace std;
int a[510];
int main(){
    int n = 0;
    a[1] = 1;

    for(int i = 2; i <= 500; i++){
        a[i] = a[i-1] + i-1;
    }

    while (cin >> n){
        cout << a[n] << endl;
    }
    return 0;
}