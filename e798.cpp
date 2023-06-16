#include <iostream>
#include <algorithm>
using namespace std;
int p[10000000];

int main(){
    ios::sync_with_stdio(0);    
    cin.tie(0);

    int arr[20][20];
    int a;

    cin >> a;

    for (int i = 0; i < a; i++){
        for(int j = 0; j < a; j++){
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < a; i += 2){
        for (int j = 0; j < a; j += 2){
            cout << max({arr[i][j], arr[i+1][j], arr[i+1][j+1], arr[i][j+1]}) << " ";
        }

        cout << endl;
    }

    return 0;
}