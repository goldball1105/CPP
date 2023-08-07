#include <iostream>
using namespace std;
 
int main() {
    int n = 0;
    int ans = 0;

    cin>>n;

    for(int i = 0; i < n; i++){
        int a = 0;
        int b = 0;
        cin>>a>>b;

        ans += a*b;
    }

    cout<<ans;

    return 0;
}