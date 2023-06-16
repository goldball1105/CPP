#include <iostream>
using namespace std;
int main(){
    int a,b,c = 0;

    cin>>a>>b>>c;

    int i = (a+b+c)/2;
    int answer = i*(i-a)*(i-b)*(i-c);

    cout<<answer<<endl;

    return 0;
}