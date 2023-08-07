#include <iostream>
using namespace std;
long long list[15];

int main() {

    int a = 0;
    int pos = 0;
    int min;

    cin>>a;

    for(int i = 0; i < a; i++){
        cin>>list[i];
    }

    for(int i = 0; i < a; i++){
        if(list[i] < min){
            min = list[i];
            pos = i;
        }
    }

    cout<<abs(pos - 1);


    return 0;
}