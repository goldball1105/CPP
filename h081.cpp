#include <iostream>
using namespace std;
 
int main() {
    int n, D, x, y, earn = 0, sell = 0;

    cin >> n >> D >> x;
    
    for (int i = 1; n > i; i++ ){
        cin >> y;

        if ( y >= x + D && x > 0){
            earn += y - x;
            x = 0;
            sell = y;
        }
        if ( y <= sell - D && x == 0){
            x = y;
        }
    }

    cout <<earn<< endl;
    return 0;
}