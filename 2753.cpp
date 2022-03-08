#include <iostream>

using namespace std;

void print(int a){
    if(a%4==0&&a%100!=0) cout << "1";
    else if(a%400==0) cout <<"1";
    else cout <<"0";
}

int main(){
    int a;
    cin >> a;
    print(a);
    return 0;
}




