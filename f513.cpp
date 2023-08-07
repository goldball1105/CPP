#include <iostream>
using namespace std;
int team[105][105];
 
int main() {
    ios::sync_with_stdio(0);    
    cin.tie(0);

    int r = 0;
    int c = 0;
    int die = 0;

    cin>>r>>c;
    
    for(int i = 0; i < r ;i++){
        for(int j = 0; j < c ;j++){
            cin>>team[i][j];
            
        }
    }

    for(int i = 0; i < r ;i++){
        for(int j = 0; j < c ;j++){
            bool lose = true;

            for(int k = i-1; k <= i+1; k++){
                for(int l = j-1; l <= j+1; l++){

                    if(k < 0 || l < 0 || k >= r || l >= c){
                        continue;
                    } else if(k == i && l == j){
                        continue;
                    }

                    if(team[k][l] == team[i][j]){
                        lose = false;
                    }
                }
            }

            if(lose == true){
                die++;
            }

        }
    }

    cout<<die;




    return 0;
}