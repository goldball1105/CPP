#include <iostream>

using namespace std;
 
int main() {
    long long a,b;

    while(cin>>a>>b){
        a -= b;
        if(a<0){
            a = -a;
        }

        cout<<a<<endl;
    }

    return 0;
}