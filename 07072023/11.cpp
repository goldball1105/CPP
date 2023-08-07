#include <iostream>
using namespace std;
int list[1005];

int main() {

    int n = 0;
    int p = 0;
    bool yes = 0;

    cin>>n;

    for(int i = 0; i < n;i++){
        cin>>list[i];
    }

    cin>>p;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(abs(list[i] - list[j]) == p){
                yes = true;
            }
        }
    }

    if(yes == 1){
        cout<<"Yes";
    }else{
        cout<<"No";
    }


    return 0;
}