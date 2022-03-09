#include <iostream>

using namespace std;

void print(int t){
    int a,b;
    
    for(int i=0; i<t; i++){
        cin >> a >> b;
    cout << a+b<<"\n";
    }
}

int main(){
    int t;
    cin >>t;
    print(t);
    return 0;
}


