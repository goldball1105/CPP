#include <iostream>
using namespace std;
int x[1005];
 
int main() {
    ios::sync_with_stdio(0);    
    cin.tie(0);

    int n = 0;
    int m = 0;
    int a = 0;
    int count = 0;

    cin >> n >> m;
    m--;

    for(int i = 0; i < n ; i++){
        cin >> x[i];
    }

    a = x[m];

    for(int i = m; i < n ; i++){

        if(a < x[i]){
            count++;
            a = x[i];
        }
    }

    a = x[m];

    for(int i = m; i >= 0 ; i--){

        if(a < x[i]){
            count++;
            a = x[i];
        }
    }

    cout<<count<<endl;

    return 0;
}