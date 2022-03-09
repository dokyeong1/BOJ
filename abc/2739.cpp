#include <iostream>

using namespace std;

void print(int a){
    
    for(int i=1; i<=9; i++){
        cout << a<< " * "<< i <<" = "<<a*i<<"\n";
    }
}

int main(){
    int a;
    cin >> a;
    print(a);
    return 0;
}


