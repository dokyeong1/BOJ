#include <iostream>

using namespace std;

void print(int t){
    
    for(int i=t; i>0; i--){
        cout << i<<"\n";
    }
    
}

int main(){
    int t;
    cin >>t;
    print(t);
    return 0;
}



