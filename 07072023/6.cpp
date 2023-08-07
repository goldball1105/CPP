#include <iostream>
#include <string>
using namespace std;

int main() {
    long long a = 0;
    long long ans = 0;

    cin>>a;

    if(a%2 == 0){
        ans = a + a/2;
    }else{
       ans = (a-1) + ((a-1)/2) + 1;
    }

    cout<<ans;

    return 0;
}
