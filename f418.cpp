#include <iostream>
using namespace std;
char word[25][55];

int main() {
    ios::sync_with_stdio(0);    
    cin.tie(0);

    int h = 0;
    int w = 0;
    int x = 0;
    int y = 0;
    int i = 0;
    int j = 0;
    int r[2][2];
    int cnt = 0;

    cin>>h>>w;
    for(int i = 0;i < 2; i++){
        for(int j = 0; j < 2; j++){
            cin>>r[i][j];
            r[i][j] -= 1;
        }
    }

    for(int i = 0; i < h; i ++){
        for(int j = 0; j < w; j ++){
            cin>>word[i][j];
        }
    }

    if(r[0][0] != r[1][0]){
        x = 1;
    }
    if(r[0][1] != r[1][1]){
        y = 1;
    }

    while (r[0][0] != r[1][0] || r[0][1] != r[1][1]){
        cout<<word[]
    }
    


    // for(int i = r[0][0], j = r[0][1]; i != r[1][0] || j != r[1][1]; i+=x, j+=y){
    //     cout<<word[i][j];
    // }

    cout<<word[r[1][0]][r[1][1]];

    return 0;
}