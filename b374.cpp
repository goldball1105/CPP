#include <iostream>
using namespace std;
int a[10005];
int b[30005];
#define endl '\n'
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0)

    int n = 0;
    int m = 0;

    cin>>n;
    for(int i = 0; i < n;i++){
        cin>>a[i];
        b[a[i]]++;
    }

    for(int i = 0; i <= 30000;i++){
        if(b[i] >= m){
            m = b[i];
        }
    }

    for(int i = 0; i <= 30000;i++){
        if(b[i] == m){
            cout<<i<<' '<<m<<'\n';
        }
    }

    return 0;
}