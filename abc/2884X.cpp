#include <iostream>

using namespace std;

void print(int h,int m){
    m-=45;
    if(m<0){ h-=1; m+=60;}
    if(h<0){ h=23;}
    cout << h<< " "<<m;
    }

int main(){
    int a,b;
    cin >> a>>b;
    print(a,b);
    return 0;
}


