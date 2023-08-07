#include <iostream>
#include <cstdlib>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);    
    cin.tie(0);

    int x = 0;
    int num = 0;
    int a = 0;
    int min = 0;
    int max = 0;

    cin>>x;

    a = rand()%x;

    while (cin>>num){
        if(num > a){
            cout<<num<<">"<<min<<"\n";
            max = num;
        }else if(num < a){
            cout<<num<<">"<<max<<"\n";
            min = num;
        }else if(num == a){
            cout<<"you guess right-"<<a;
            break;
        }
    }



    return 0;
}