#include <iostream>

using namespace std;

void print(int t, int x){
    
    int n;
    for(int i=0; i<t; i++){
        cin >> n;
        if(n<x){
            cout << n<<" ";
        }
            
    }
    
}

int main(){
    int t,x;
    cin >>t>>x;
    print(t,x);
    return 0;
}


