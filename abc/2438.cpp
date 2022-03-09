#include <iostream>

using namespace std;

void print(int t){
    
    for(int i=1; i<=t; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << "\n";
    }
   
    
}

int main(){
    int t;
    cin >>t;
    print(t);
    return 0;
}



