#include <iostream>
using namespace std;
int list[15][15];
 
int main() {
    ios::sync_with_stdio(0);    
    cin.tie(0);

    string ans;

    int n = 0;
    int q = 0;
    int Max[2] = {0, 0};

    cin>>n>>q;

    for(int i = 0; i < q ; i++){
      
        int a = 0;
        int b = 0;
        
        cin>>a>>b;
        
        list[a][b] = 1;

        if(a > Max[0]){
            Max[0] = a;
        }
        if(b > Max[1]){
            Max[1] = b;
        }
    }

    for(int i = 0; i < Max[0]; i++){
        ans += "1";
    }


    for(int i = 0; i < Max[1]; i++){
        ans += "3";
    }


    for(int i = 0; i < n; i++){
        ans += "24";
    }
    
    cout<<ans;







    return 0;
}