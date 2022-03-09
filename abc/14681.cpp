#include <iostream>

using namespace std;

void print(int a,int b){
    if(a>0&&b>0) cout << "1";
    else if(a<0&&b>0) cout << "2";
    else if(a<0&&b<0) cout << "3";
    else cout <<"4";
}

int main(){
    int a,b;
    cin >> a>>b;
    print(a,b);
    return 0;
}


