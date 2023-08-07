#include <iostream>
using namespace std;

int main() {

    long long a = 0;

    cin>>a;

    if(a%2 == 0){
        cout<<"no";
    }else{
        cout<<"yes";
    }

    cout<<a%2;

    return 0;
}