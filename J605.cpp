#include <iostream>
using namespace std;
int t[105],s[105];

int main() {
    
    int n = 0;
    int topt = 0;
    int mx = 0;
    int cnt = 0;
    int total = 0;

    cin>>n;
    
    for(int i = 0; i < n;i++){
        cin>>t[i]>>s[i];
        if(s[i] > mx){
            mx = s[i];
            topt = i;
        }
        if(s[i] == -1){
            cnt += 2;
        }
    }
    
    total = max(0, mx - n - cnt);

    cout << total << ' ' << t[topt] <<'\n';
}