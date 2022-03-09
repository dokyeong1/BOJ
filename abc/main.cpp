#include <iostream>

using namespace std;

void print(int a){
   
    int n,max=0;;
    for(int i=0; i<a; i++){
        cin >> n;
        if(n>max){
            max=n;
        }
    }
    }

int main(){
    int a;
    cin >> a;
    print(a);
    return 0;
}


