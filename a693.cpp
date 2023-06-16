#include <iostream>
using namespace std;
int a[100005], hunger[100005];

int main() {

    ios::sync_with_stdio(0);    
    cin.tie(0);
    
    int n, m, l, r = 0;

    while (cin >> n >> m){
        for(int i = 1; i <= n; i++){
            cin >> hunger[i];
            a[i] = a[ i - 1 ] + hunger[i];
        }

        for(int i = 0; i < m;i++){
            cin >> l >> r;
            cout << a[r] - a[l - 1] << '\n';
        }
    }
}