#include <iostream>
using namespace std;
int main(){
    int a = 0;

    cin>>a;

    // if(a>50){
    //     a--;
    // }

    cout<<a - (a>50)<<endl;

    return 0;
}