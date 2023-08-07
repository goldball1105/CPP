#include <iostream>
using namespace std;
 
int main() {
    string n;

    while (cin>>n){
        if(n == "0"){
            break;
        }


        int one = 0;
        int two = 0;
        
        for(int i = 0; i < n.size(); i++){
            if(i%2 != 0){
                two += n[i]-'0';
            }else{
                one += n[i]-'0';
            }
        }

        if(abs(two - one)%11 != 0){
            cout<<n<<" is not a multiple of 11."<<"\n";
        }else{
            cout<<n<<" is a multiple of 11."<<"\n";
        }


    }
    



    return 0;
}