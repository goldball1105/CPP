#include <iostream>
using namespace std;
int l[1005];
int b[1005];
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n = 0;
    int t = 0;
    int eat = 0;
    int step = 0;

    cin>>n>>t;

    for(int i = 0; i < n ;i++){
        cin>>l[i];
    }

    for(int i = 0; i < n ;i++){
        cin>>b[i];
    }

    while (true){
        if(l[t] >= 0){
            if(b[t] == 1){
                eat++;
                b[t] = -1;
            }

            step = l[t];
            l[t] = -1;
            t = step;
            
            continue;
        }
        break;
    }
    
    cout<<eat;

    return 0;
}