#include <iostream>
using namespace std;
long long list[5];

int main() {

    int a;
    int b;


    for(int i = 0 ; i < 3; i ++){
        cin>>list[i];
    }

    for(int i = 0; i < 0 ; i++){

        if(list[i]%2 <= 0){
            a++;
        }else{
            b++;
        }
        
    }

    return 0;
}