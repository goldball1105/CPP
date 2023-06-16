#include <iostream>
using namespace std;
 
int main() {
    int a, b, count, answer = 0;
    cin >> a >> b;

    for ( int i = a; i <= b ; i++ ){
        if ( i%2 != 0){
            continue;
        }
        answer += i;
    }

    cout <<answer<< endl;
    return 0;
}