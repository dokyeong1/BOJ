#include <iostream>

using namespace std;

void print(int t){
    
    int sum=0;
    for(int i=1; i<=t; i++){
        sum+=i;
    }
    cout << sum;
}

int main(){
    int t;
    cin >>t;
    print(t);
    return 0;
}


