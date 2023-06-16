#include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int l;
    int m;
    int x1;
    int x2;
    int lg[10005];
    int ct = 0;

    cin >> l >> m ;

    for(int i = 0; i <= l; i++){
        lg[i] = 1;
    }

    for (int i = 0; i < m; i++){
        cin >> x1 >> x2;
        for (; x1 <= x2; x1++){
            lg[x1] = 0;
        }
    }

    for (int i = 0; i <= l; i++){

        ct += lg[i];
    }

    cout << ct << endl;

    
    return 0;
}