#include <iostream>
using namespace std;
long long card[5][5];

int main() {

    long long c = 0;

    for(int i = 0; i < 4; i ++){
        for(int j = 0; j < 2; j++){
            cin>>card[i][j];
        }
    }


    if(1+card[0][0] > card[0][1]){
        c = card[0][0] + 1;
    }else{
        c = card[0][1];
    }

    for(int i = 1; i < 4;i++){

        if(card[i][0]+c > card[i][1]*c){
            c += card[i][0];
        }else{
            c *= card[i][1];
        }
    }

    cout<<c;

    return 0;
}