#include <iostream>
using namespace std;
 
int main() {
    long long n = 0;

    cin>>n;

    if(n <= 10){
        cout<<n*100<<"\n";
    }else if(n > 10 && n <= 20){
        cout<<1000+(n-10)*200<<"\n";
    }else{
        cout<<3000+(n-20)*300<<"\n";
    }

    return 0;
}