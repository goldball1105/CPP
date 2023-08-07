#include <iostream>
using namespace std;
int a[1000005];
int b[1000005];
 
int main() {

    int n = 0;
    int grop = 0;
    int type = 0;

    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>a[i];
    }

    for(int i = 0; i < n; i++){
        int cnt1 = 0;
        int cnt2 = 0;

        if(b[a[i]] > 0){
            continue;
        }

        b[a[i]] = a[i];

        for(int j = 0; j <n; j++){
            if(a[i] == a[j]){
                cnt1++;
            }
            if(a[i] == a[j]){
                cnt2++;
            }
        }
        if(cnt1 >= 10){
            grop++;
        }
        if(cnt2 >= 15){
            type++;
        }
    }

    cout<<grop<<" "<<type<<"\n";


    return 0;
}