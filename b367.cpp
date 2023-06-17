#include <iostream>
using namespace std;
int n[12][12];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t = 0;
    int x = 0;
    int y = 0;

    cin>>t;
    
    for(int i = 0; i < t ;i++){
        bool b = true;

        cin>>x>>y;

        for(int j = 0; j < x; j++){

            for(int k = 0;k < y;k++){

                cin >> n[j][k];
            }
        }

        for(int j = x-1, x2 = 0; j >= 0 ; j--, x2++){
            
            for(int k = y-1, y2 = 0; k >= 0 ; k--, y2++){

                if (n[j][k] != n[x2][y2]){
                    b = false;
                }
            }
        }

        if(b == true){
            cout<<"go forward\n";
        }else{
            cout<<"keep defending\n";
        }
    }


    return 0;
}