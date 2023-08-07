#include <iostream>
using namespace std;
 
int main() {

    string ans;
    int n = 0;
    

    cin>>ans>>n;

    for(int i = 0; i < n; i++){
        int B = 0;
        int A = 0;

        string gus;
        cin>>gus;


        for(int j = 0; j < 4; j++){
            for(int l = 0; l < 4; l++){
                if(ans[j] - '0' == gus[l] - '0'){
                    B++;
                    if(j == l){
                        A++;
                    }
                }
            }
        }

        B -= A;

        cout<<A<<'A'<<B<<'B'<<"\n";
    }



    return 0;
}