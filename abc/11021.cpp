#include <iostream>

using namespace std;

void print(int t){
    
    int a,b;
    for(int i=1; i<=t; i++){
        cin >> a>> b;
        cout << "Case "<< "#"<< i<<": "<< a+b<<"\n";
    }
    
}

int main(){
    int t;
    cin >>t;
    print(t);
    return 0;
}


