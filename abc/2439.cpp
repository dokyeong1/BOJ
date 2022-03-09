#include <iostream>

using namespace std;

void print(int t){
    
    for(int i=1; i<=t; i++){
        for(int j=t; j>i; j--){
            cout << " ";
        }
        for(int k=1; k<=i; k++){
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


